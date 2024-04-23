void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(0);
  int val_m = map(val,0,1023,0,255);
  Serial.println(val_m);
  analogWrite(5,val_m);
  analogWrite(3,255-val_m);
}
