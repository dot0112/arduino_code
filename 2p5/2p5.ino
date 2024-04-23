int LED[] ={7,5},SWITCH[]={2,3};
int len = sizeof(LED)/sizeof(LED[0]);

void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<len;i++){
    pinMode(LED[i], OUTPUT);
    pinMode(SWITCH[i], INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED[0],digitalRead(SWITCH[0]));
  digitalWrite(LED[1],!digitalRead(SWITCH[1]));
}
