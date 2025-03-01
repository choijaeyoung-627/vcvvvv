
const int Pin = 2; 

void setup() {
  Serial.begin(9600);
  pinMode(Pin, INPUT);
}

void loop() {
  if (digitalRead(Pin) == LOW) {
 Serial.println("1") ;
  delay(700); 

  } 
  
}
