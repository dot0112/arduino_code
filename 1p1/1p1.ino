int LED[] = {7,6,5,4};
int len = sizeof(LED)/(sizeof(LED[0]));

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<len; i++) {
  pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  for(int i=0;i<len;i++){
    bool c= true;
    for(int j=i+1;j<len;j++){
      c&=digitalRead(LED[j]);
    }
    if(c)
    digitalWrite(LED[i], !digitalRead(LED[i]));
  }
}
