/*********************************************************************/
/* Bluetooth interfacing */
/*********************************************************************/

#include <SoftwareSerial.h>

SoftwareSerial MySerial (5,6); // TX AND RX on UNO

void setup() {
  // Setting baud rate
  MySerial.begin(9600);
  
  // For serial reading
  Serial.begin(9600);

}

void loop() {
  // Print on Serial monitor what's recieved from the phone (read from phone (TX) and printing on serial monitor (RX) )
  if(MySerial.available())
  {
    Serial.write(MySerial.read());
  }
  
  // Print on Phone what's recieved from the PC (read from PC (TX) and printing on mobile phone (RX) )
  if (Serial.available())
  {
    MySerial.write(Serial.read());
  }
}
