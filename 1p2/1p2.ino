int LED[] = {4,5,6,7};
int len = sizeof(LED)/sizeof(LED[0]);

void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<len;i++){
    pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<len;i++){
    digitalWrite(LED[i], HIGH);
    delay(500);
    digitalWrite(LED[i], LOW);
  }
  for(int i=len-1;i>=0;i--){
    digitalWrite(LED[i], HIGH);
    delay(500);
    digitalWrite(LED[i], LOW);
  }
}
