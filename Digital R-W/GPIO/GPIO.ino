void setup() {
  // put your setup code here, to run once:
  Serial.begin(9500);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(3)==HIGH){
    digitalWrite(2,HIGH);
    Serial.println("Button pressed!");
  }
  else{
    digitalWrite(2,LOW);
  }
  
}
