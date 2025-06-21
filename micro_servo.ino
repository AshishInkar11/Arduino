#include<Servo.h>
Servo servol;
void setup() {
  // put your setup code here, to run once:
servol.attach(9);
//servol.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
servol.write(0);
delay (500);
servol.write(45);
delay(500);
servol.write(90);
delay(500);
servol.write(120);
delay(500);
servol.write(180);
delay(1000);
servol.write(0);
delay(500);
} 
