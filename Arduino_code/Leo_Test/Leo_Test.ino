#include <SoftwareSerial.h>

SoftwareSerial mySerial(8, 3); // RX, TX

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Native USB only
  }
  Serial.println("Ready");
  mySerial.begin(9600);
  mySerial.print("Wassup");

}

void loop() {
  // put your main code here, to run repeatedly:
 
  if (mySerial.available()){
    char data = mySerial.read();
    int val = data;
    Serial.print(char(data));
  }
  
}
