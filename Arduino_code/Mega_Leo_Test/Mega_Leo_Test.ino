void setup() {
  Serial.begin(9600);
  Serial2.begin(9600);
  pinMode(8,OUTPUT);
  digitalWrite(8,HIGH);
}

void loop() {
  // read from port 0, send to port 1:
  if (Serial.available()) {
    char inByte = Serial.read();
    Serial.println((char)inByte);
    Serial2.print(inByte);
  }
}
