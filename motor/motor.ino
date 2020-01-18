const int pin = 11;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(pin,OUTPUT);
}

void loop() {
  
  
  int speed = 250;
  // put your main code here, to run repeatedly:
analogWrite(pin,speed);


  

}
