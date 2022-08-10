int value=0;
int lm35 = A0;

void setup(){
    Serial.begin(9600);
}

void loop()
{
  value = analogRead(lm35);
  float milivolts = ( value/1024.0)*5000; 
  //float milivolts = ( 1024.0/5)*value;
  float cel = milivolts/10;
  //float cel = milivolts*100;
  float farh = cel*(9/5) + 32;

  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  delay(3000);

  Serial.print("TEMPRATURE = ");
  Serial.print(farh);
  Serial.print("*F");
  Serial.println();
  delay(3000);
}
