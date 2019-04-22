// https://create.arduino.cc/projecthub/remnis/h-bridge-for-your-robot-025ae8

int IN1 = 10;
int IN2 = 11;
 
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);  
  pinMode(IN1, OUTPUT);    
  pinMode(IN2, OUTPUT);
}
 
void loop() {
  // forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print('1');
  delay(1000);

   // backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.print('2');
  delay(1000);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print('0');
  delay(1000);
  
}
