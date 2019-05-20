#include <SoftwareSerial.h>

SoftwareSerial BTSerial(4, 5); 
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  BTSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if (BTSerial.available()) {
    int incomingByte = BTSerial.read();
    
    if(incomingByte == '1')
    {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("ON");
    }
    else if(incomingByte == '0')
    {
      digitalWrite(LED_BUILTIN, LOW); 
      Serial.println("OFF");
    }
  }
}
