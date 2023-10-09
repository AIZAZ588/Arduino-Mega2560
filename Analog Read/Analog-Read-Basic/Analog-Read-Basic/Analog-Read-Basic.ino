int  ledPin = 3; // Digital pin

int Variable_Resistor = A0; //Analog Pin
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin , OUTPUT);
  pinMode(Variable_Resistor , INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(Variable_Resistor);
  digitalWrite(ledPin,HIGH);
  delay(value);

  value = analogRead(Variable_Resistor);
  digitalWrite(ledPin,LOW);
  delay(value);


}
