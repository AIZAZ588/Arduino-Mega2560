#include <SPI.h>
 int slaveSelect  = 53;
int delayTime = 250;

void setup(void) {
  Serial.begin(9600);
  pinMode(slaveSelect , OUTPUT);
  SPI.begin();
  digitalWrite(slaveSelect , HIGH);
}

void loop(void) {
  for (int i = 0; i < 255; i++) {
    digitalWrite(slaveSelect , LOW);
     SPI.transfer(i);
    digitalWrite(slaveSelect , HIGH);
    Serial.println(i);
    delay(delayTime);
  }
}