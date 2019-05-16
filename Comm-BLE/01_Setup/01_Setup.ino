#include <SoftwareSerial.h>

SoftwareSerial BTSerial(4, 5); 

void setup()
{
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop()
{
  // 블루투스로 부터 수신된 데이터가 있다면
  if (BTSerial.available()) {
    Serial.write(BTSerial.read());
  }
  
  // 시리얼 모니터로부터 입력 받은 데이터가 있다면
  if (Serial.available()) {
    BTSerial.write(Serial.read());
  }
}
