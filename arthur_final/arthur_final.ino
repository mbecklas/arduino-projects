
#include <Servo.h>

Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;


void setup()
{
  
  servo_1.attach(2);
  servo_2.attach(3);
  servo_3.attach(4);
  servo_4.attach(5);

  
  servo_1.write(0);  
  servo_2.write(0); 
  servo_3.write(0);  
  servo_4.write(0); 

}

void loop() {

    servo_1.write(0);
    delay(300);
    servo_1.write(70);
    delay(500);
    servo_2.write(0);
    delay(300);
    servo_2.write(70);

   
}
