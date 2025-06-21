#include<Servo.h>
Servo motor1;
int i=0;
void setup() {
  // put your setup code here, to run once:
motor1.attach(9);
motor1.write(180);
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<180;i++)
 {
   motor1.write(i);
   delay(10);
 }
for(i=180; i>=1; i--)
 {
   motor1.write(i);
   delay(10);
  }
}
