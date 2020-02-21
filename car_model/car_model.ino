#define trigPin 3

#define echoPin 11

#define led 4
int dis = 0;
int enA = 10;
int in1 = 9;
int in2 = 8;
// motor two
int enB = 5;
int in3 = 7;
int in4 = 6;
int start=0;

void setup()

{ //Serial.begin (9600);
//ultrasonic
pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);

pinMode(led, OUTPUT);
//motor 
pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  //setting touch sensor
  pinMode(2, INPUT);

}
void back()
{
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 255);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 255);
  
  delay(300);
  turn_left();
  
}
void turn_left()
{
  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, 255);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 255);
  
  delay(500);
}
void stop_motor()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW); 
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(500);
}
void ultra()

{ long duration, distance;

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;
if (distance < 30 )

{ digitalWrite(led,HIGH);
  
  
  //turn_left();
  back();
  
  stop_motor();
  
 ultra();
  
}
else{
  digitalWrite(led,LOW);
  
  // turn on motor B
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 250);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 250);
}
}

void loop()
{
  ultra();
}
