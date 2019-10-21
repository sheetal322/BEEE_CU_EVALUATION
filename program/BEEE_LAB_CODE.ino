void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // when the door is opened
int d=analogRead(A0);
Serial.println(d);
if(d<500)
{
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(13,LOW);
}
else
digitalWrite(13,HIGH);
delay(2000);
digitalWrite(13,LOW);  
}
