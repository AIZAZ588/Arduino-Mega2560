#include <SPI.h>

byte s_rec = 0;
volatile bool pin;

void setup(void) {
  Serial.begin(9600);
  pinMode(MISO, OUTPUT);
  SPCR = 0xD0;

  SPI.attachInterrupt();  // turn on interrupt;
  sei();
}
// Interrupt function
ISR(SPI_STC_vect) {
  s_rec = SPDR;  // read byte from SPI Data Register
  pin = true;
}


void loop(void) {
  if (pin) {
    Serial.println(s_rec);
    pin = false;
  }
  delay(50);
}
