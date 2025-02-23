#include "LiquidCrystal.h"
 
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
float input_voltage = 0.0;
float temp=0.0;
float source_voltage = 0.0;
float r1 = 10000.0;
float r2 =  7000;
float r_p = 9.98;
float current_voltage= 0.0;
float source_current = 0.0;
 
void setup()
{
  Serial.begin(9600);     //opens serial port, sets data rate to 9600 bps
  lcd.begin(16, 2);       //set up the LCD's number of columns and rows:
  lcd.print("DVM by i202312");
}
 
void loop()
{
  //Conversion formula for voltage  
  int analog_value = analogRead(A0);
  int analog_current = analogRead(A2);
  input_voltage = (analog_value * 5.0) / 1024.0;

  source_voltage = (input_voltage * (r1+r2)/r2);
 
  current_voltage = (analog_current * 5.0)/ 1024.0;
  source_current = (current_voltage * (r1 + r2) / r2);
 
  lcd.setCursor(0, 1);
  Serial.print("V=");
  Serial.println(source_voltage * 220 / 12);
  delay(1000);
  Serial.print(" A=");
  Serial.println(source_current * 1000);
}



