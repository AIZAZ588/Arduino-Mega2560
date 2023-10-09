int ledPin = 10; // PWM pin
int potPin = A0; // ADC Pin
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin , OUTPUT);
  pinMode(potPin , INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(potPin) / 4; // Div by 4 because ADC is 10 bit wider and can hold up to 1024 values, where PWM is 8 bit wider register size which can hold upto 256
  analogWrite(ledPin , potValue);
}
