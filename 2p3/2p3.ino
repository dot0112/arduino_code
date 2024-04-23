int LED[] = { 7, 6, 5, 4 }, count = 3, reset = 2, n = 0;
int len = sizeof(LED) / sizeof(LED[0]);

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < len; i++) {
    pinMode(LED[i], OUTPUT);
  }
  pinMode(count, INPUT);
  pinMode(reset, INPUT_PULLUP);
}

bool count_prev = 1, count_now = 1, reset_prev = 1, reset_now = 1;

void LED_ON() {
  for (int i = 0, init = pow(2, len - 1), temp = n; i < len; i++, init /= 2) {
    bool status = false;
    if (temp >= init) {
      temp -= init;
      status = true;
    }
    digitalWrite(LED[i], status);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  LED_ON();
  count_now = digitalRead(count);
  if ((count_now != count_prev) && count_prev == 1) {
    n = n + 2;
    delay(200);
  }
  count_prev = count_now;

  reset_now = digitalRead(reset);
  if ((reset_now != reset_prev) && reset_prev == 1) {
    n = 0;
    delay(200);
  }
  reset_prev = reset_now;
}
