// https://create.arduino.cc/projecthub/remnis/h-bridge-for-your-robot-025ae8

int IN1 = 10;
int IN2 = 11;

int IN3 = 5;
int IN4 = 6;
int delaytime = 2000;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);  
  pinMode(IN1, OUTPUT);    
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);    
  pinMode(IN4, OUTPUT);  
}
 
void loop() {
  // forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print('1');
  delay(delaytime);

  //stop
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);  
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print('0');
  delay(delaytime);
  
   // backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.print('2');
  delay(delaytime);

  //stop
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);  
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print('0');
  delay(delaytime);
  
}
