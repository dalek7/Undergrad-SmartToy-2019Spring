void setup() {
  Serial.begin(9600);    // opens serial port, sets data rate to 9600 bps
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    int incomingByte = Serial.read();
    if(incomingByte == '1')
    {
      digitalWrite(LED_BUILTIN, HIGH);//(HIGH is the voltage level)
      Serial.print("On");
    }
    else if(incomingByte == '0')
    {
      digitalWrite(LED_BUILTIN, LOW); //making the voltage LOW
      Serial.print("Off");
    }
  }
  
}
