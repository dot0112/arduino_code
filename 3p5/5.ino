int LED[] ={6,5,3};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=0;i<3;i++){
    pinMode(LED[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()){
    for(int i=0;i<3;i++){
      int n = Serial.parseInt();
      n=constrain(n, 0, 255);
      analogWrite(LED[i], n);
    }
  }
}
