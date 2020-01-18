int ctr=1;
int led1=13;
//int led2=12;
int led2=8;
int led3=7;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital led LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
     
}

// the loop function runs over and over again forever
void loop() {
  if(ctr==1)
  {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);                       // wait for a second
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  //delay(1000); 
  }// wait for a second
  if(ctr==2)
  {
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  //delay(1000); 
  ctr=0;
  }// wait for a second
  
  ctr++;
}
