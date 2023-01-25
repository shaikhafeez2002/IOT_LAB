// C++ code
//
float temp;

void setup(){
  Serial.begin(9600);
}

void loop(){
 float reading=analogRead(A0);
 float voltage=reading*4.68;
  voltage/=1024.0;
 Serial.print("Volts");
 Serial.println(voltage);
 delay(1000);
 float centitemp=(voltage-0.5)*100;
 Serial.print("Celsius temp");
 Serial.println(centitemp);
 delay(1000);
 float fahrtemp=(centitemp*9.0/5.0)+32.0;
 Serial.print("Fahrenhiet temp");
 Serial.println(fahrtemp);
 delay(1000);
}
