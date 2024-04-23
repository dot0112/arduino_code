int LED[] = {7,6,5,4};

void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<4;i++){
    pinMode(LED[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int v = analogRead(0);
  bool c[4] ={};
  if(v>767) c[0] = 1;
  else if(v>511) c[1]=1;
  else if(v>127) c[2]=1;
  else if(v>63) c[3]=1;
  for(int i=0;i<4;i++){
    digitalWrite(LED[i],c[i]);
  }
}
