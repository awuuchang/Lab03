float SensorVoltage=0;
float SensorValue=0;
float Vin;
float ResisterValue = 1003001.47;
float R1=1003000;
float R2=1.47;
void setup() 
{
  Serial.begin(9600);
  pinMode(A1,INPUT);
  

}
void loop()
{
  int i;
   for (i=0;i<=5;i++)
   {
SensorValue = 0.7*SensorValue + 0.3* analogRead(A1);
SensorVoltage = SensorValue * 5 / 1024;
// sensorVoltage= Vin * R1 / (R1+R2)

Serial.println("SensorValue");
Serial.println("SensorVoltage");
   }
    delay(500);
    
    
    
    
    
    
}
