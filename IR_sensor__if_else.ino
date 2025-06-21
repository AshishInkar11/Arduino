#define pin A0
#define led 13
boolean data;
boolean led_status;
//int data;
void setup() 
{
pinMode(pin,INPUT);
pinMode(led,OUTPUT);
Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly:
data=digitalRead(pin);
if(data==0&&led_status==0)
{
digitalWrite(led,HIGH);
led_status=1;
delay(1000);
}
else if(data==1&&led_status==1)
{
digitalWrite(led,LOW);
led_status=0;
delay(1000);
}
}
