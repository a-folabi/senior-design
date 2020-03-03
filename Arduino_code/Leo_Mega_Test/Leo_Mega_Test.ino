void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);
  while(!serial){}
  Serial.println("Ready");

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial1.available()){
    char data = Serial1.read();
    Serial.print(data);
  }
  
}
