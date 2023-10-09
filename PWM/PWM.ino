int pin = 10;
int D = 200;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int fadeValue = 0; fadeValue < 256; fadeValue += 5) {
    analogWrite(pin, fadeValue);
    Serial.println(fadeValue);
    delay(D);
  }

  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(pin, fadeValue);
    Serial.println(fadeValue);
    delay(D);
  }
}
