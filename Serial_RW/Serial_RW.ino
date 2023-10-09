void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() == 1)
  {  //wait until we get something form computer
    int val = Serial.read() - '0';
    Serial.println(val);
    Serial.flush();
  }
}
