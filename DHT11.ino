#include <DHT.h>
DHT dht(4,DHT11);
void setup() 
{
  Serial.begin(115200);
  dht.begin();
  
}

void loop()
{
  float h=dht.readHumidity(); //reads humidity and temp 
  float t=dht.readTemperature();
  if(isnan(h)||isnan(t))
  {
    Serial.println("error");
  }
  Serial.print("Humidity:");
  Serial.println(h);
  Serial.print("Temperature: ");
  Serial.println(t);
  Serial.print(" C");
  delay(1000);
    
}
