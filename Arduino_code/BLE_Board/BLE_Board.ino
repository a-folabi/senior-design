void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(8,OUTPUT);
  digitalWrite(8,HIGH);
}

void loop() {
  // read from port 0, send to port 1:
  if (Serial.available()) {
    int inByte = Serial.read();
    Serial.println((char)inByte);
    Serial1.print(inByte, DEC);
  }
  // read from port 1, send to port 0:
  if (Serial1.available()) {
    char inByte = Serial1.read();
    Serial.print((char)inByte);
  }
}
