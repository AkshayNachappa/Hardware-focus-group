int touch_value;
void setup() 
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() 
{
  touch_value=touchRead(32);//read touch value from pin 32
  Serial.println(touch_value);

   if (touch_value<50)
   {
    digitalWrite(2,HIGH);
   }
   else
   {
    digitalWrite(2,LOW);
   }
   delay(1000);


}
