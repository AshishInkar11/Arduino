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
 digitalWrite(trigpin,LOW);
 duration=pulseIn(echopin,HIGH);
 distance=(duration/2)*0.034;
 delay(100);
 if(distance<=10)
 {
 Serial.print(10);
 Serial.println("  cm");
 }
 else
 {
 Serial.print(20);
 Serial.println("   cm");
 }
}
