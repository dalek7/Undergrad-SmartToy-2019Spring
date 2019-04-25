int cnt1;
void setup() {
  Serial.begin(9600);    // opens serial port, sets data rate to 9600 bps
  cnt1 = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(cnt1);
  cnt1 = cnt1 + 1;
  delay(1000);
}
