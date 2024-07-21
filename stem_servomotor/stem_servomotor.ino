
#include <Servo.h>
Servo servo_1;
#define trigPin 5
#define echoPin 6

void setup(){

  Serial.begin(9600);
  
  pinMode(A0, INPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  servo_1.attach(2);
  servo_1.write(0);  
   
}

void loop(){

  float duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0344;

  int distan = map(distance,0,100,180,0);

  if(distance < 101){
     servo_1.write(distan);
  }

 
  Serial.println(distance);

}
