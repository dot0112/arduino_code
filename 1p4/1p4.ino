int LED[] = { 4, 5, 6, 7 };
int len = sizeof(LED) / sizeof(LED[0]);

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < len; i++) {
    pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  for (int i = 0; i < len; i++) {
    digitalWrite(LED[i], HIGH);
  }
  for (int i = 0; i < 4; i++) {
    delay(500);
    digitalWrite(LED[i], LOW);
  }
}
