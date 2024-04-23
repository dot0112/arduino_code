int LED[] = { 7, 5 };
int SWITCH[] = { 2, 3 };
int len = sizeof(LED) / sizeof(LED[0]);

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < len; i++) {
    pinMode(LED[i], OUTPUT);
    pinMode(SWITCH[i], INPUT_PULLUP);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < len; i++) {
    digitalWrite(LED[i], !digitalRead(SWITCH[i]));
  }
}
