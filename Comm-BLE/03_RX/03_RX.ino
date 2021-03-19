#include <SoftwareSerial.h>

SoftwareSerial BTSerial(4, 5); 
int cnt = 0;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  BTSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {

  char buf[10];
  sprintf(buf,"%d", cnt);
  
  cnt++;
  Serial.write(buf);
  BTSerial.write(buf);
  
  
  delay(1000);

  
}
