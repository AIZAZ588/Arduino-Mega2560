int ledPin = 3;
int buttonPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // Enable pull up resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile int buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);  // As due to pull by when we press button it will be logic 0 or low state.
  } else {
    digitalWrite(ledPin, LOW);
  }
}
