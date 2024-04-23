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
    int now = LED[i], next = LED[(i + 1) % len];
    digitalWrite(now, HIGH);
    digitalWrite(next, HIGH);
    delay(500);
    digitalWrite(now, LOW);
    digitalWrite(next, LOW);
  }
}
