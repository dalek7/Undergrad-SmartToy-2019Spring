
void setup() {
  Serial.begin(9600);    // opens serial port, sets data rate to 9600 bps
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {

    int incomingByte = Serial.read();
    if(incomingByte == '1')
    {
      // turn the LED on (HIGH is the voltage level)
      digitalWrite(LED_BUILTIN, HIGH);   
      Serial.print("On");
    }
    else if(incomingByte == '0')
    {
      // turn the LED off by making the voltage LOW
      digitalWrite(LED_BUILTIN, LOW);    
      Serial.print("Off");
    }
  }
  
}
