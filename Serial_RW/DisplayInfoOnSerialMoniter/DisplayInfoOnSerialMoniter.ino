int ledPin = 31;
int potPin = A0;
int button = 40;

void setup(void){
  pinMode(ledPin , OUTPUT );
  pinMode(potPin , INPUT  );
  pinMode(button , INPUT_PULLUP); // Enable pullup resistor
  
  Serial.begin(9600); //(baud rate) bits per sec 
}
void loop(void){
   int potValue = analogRead(potPin);
   int Sbutton  = digitalRead(button);
   int PWM_v    = potValue/4;
  
  if(Sbutton){
   digitalWrite(ledPin,LOW);
   Serial.println("\nButton is Not pressed! LED OFF!"); 
  }
  else{
  digitalWrite(ledPin,HIGH);
  Serial.println("\nButton is Pressed! LED ON!");
  }
 
  Serial.print("Pot Value : ");
  Serial.print(potValue);
  Serial.print("\tPWM value  : ");
  Serial.print(PWM_v);
  Serial.println(" ");
  delay(200);
}
