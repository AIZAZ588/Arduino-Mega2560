void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  //we have 10bit ADC
  Serial.println(analogRead(A0));

}
