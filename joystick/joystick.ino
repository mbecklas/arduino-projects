
#include <Servo.h>

Servo servo_1;
Servo servo_2;



void setup()
{
  Serial.begin(9600);
  
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  
  servo_1.attach(2);
  servo_2.attach(3);


}

void loop() {

  int varx = analogRead(A0);
  int x = map(varx,1023,0,0,180);

  int vary = analogRead(A1);
  int y = map(vary,1023,0,0,180);

  Serial.println(y);
  Serial.println(x);
  
  servo_1.write(x);
  servo_2.write(y);
  delay(100);
    

   
}
