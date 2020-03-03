  // defines pins numbers
  const int trigPin = A11;
  const int echoPin = A12;
  int ultra;
  const int inverterPower = A6;
  const int BLE_power = 8;
void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(BLE_power,OUTPUT);
  digitalWrite(BLE_power,HIGH);

  pinMode(inverterPower,OUTPUT);
  digitalWrite(inverterPower, HIGH);

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
}

void loop() {
  // read from port 1, send to port 0:
  if (Serial1.available()) {
    char inByte = Serial1.read();
    Serial.print((char)inByte);
  }

   // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  ultra = digitalRead(echoPin);
  Serial.print("Ultrasound Out: ");
  Serial.println(ultra);
}
