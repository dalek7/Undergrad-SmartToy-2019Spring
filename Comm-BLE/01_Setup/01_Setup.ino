// 블루투스 통신을 위한 SoftwareSerial 라이브러리
#include <SoftwareSerial.h>

SoftwareSerial BTSerial(4, 5);

void setup()
{
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop()
{
  // 블루투스로 부터 수신된 데이터를 읽는다.
  if (BTSerial.available()) {
    Serial.write(BTSerial.read());
  }
  
  // 시리얼 모니터로 부터 입력 받은 데이터를 블루투스로 송신한다.
  if (Serial.available()) {
    BTSerial.write(Serial.read());
  }
}
