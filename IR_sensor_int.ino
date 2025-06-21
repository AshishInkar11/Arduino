#define pin A5
int data;
//int data;
void setup() 
{
pinMode(pin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//data=digitalRead(pin);
data=analogRead(pin);
Serial.println(data);
delay(1000);
}
