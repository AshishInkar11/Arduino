#define trigpin 10
#define echopin 8
float duration;
float distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode (trigpin,OUTPUT);
pinMode (echopin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigpin,HIGH);
delay (10);
digitalWrite(trigpin,LOW);
duration=pulseIn(echopin,HIGH);
distance=(duration/2)*0.034;
if(distance<=10)
{
Serial.print("Distance: ");
Serial.print(distance);
Serial.println("cm");
delay(250);
}
