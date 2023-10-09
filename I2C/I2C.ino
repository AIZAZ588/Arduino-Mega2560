#include<Wire.h>
int temp_Addr = 72;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9200);
  Wire.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  //Send a request 
  //start talking
  Wire.beginTransmission(temp_Addr);
  
  //Ask for register zero
  Wire.send(0);

  //stop Talking
  Wire.endTransmission();

  //request 1 byte
  Wire.requestFrom(temp_Addr,1);

  //wait for response
  while(Wire.available()==0);

  //get the temp
  int temp = Wire.receive();

  //Send data to serial moniter
  Serial.println(temp);
  

}
