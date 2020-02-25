// defines pins numbers
const int pulse = 3; 
const int dirPin = 4; 
const int enPin = 5;
const long revs = 15000;
const int microStep = 1;
void setup() {
  Serial.begin(9600);
  // Sets the two pins as Outputs
  pinMode(pulse,OUTPUT); 
  pinMode(dirPin,OUTPUT);

  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,LOW);
  
}
void loop() {
  
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  // 1 Full clockwise rev, full step mode
  Serial.println(revs*microStep);
  for(int x = 0; x < revs; x++) {
    digitalWrite(pulse,HIGH); 
    delayMicroseconds(600); 
    digitalWrite(pulse,LOW); 
    delayMicroseconds(600); 
  }
  delay(1000); // One second delay
  Serial.println("Switching!");
  digitalWrite(dirPin,LOW); //Changes the rotations direction
  // Counter clockwise rev
  for(int x = 0; x < revs; x++) {
    digitalWrite(pulse,HIGH);
    delayMicroseconds(600);
    digitalWrite(pulse,LOW);
    delayMicroseconds(600);
  }
  delay(1000);
  
}
