#include <DHT11.h> // Library for DHT11 Humidity Reader, Author: Dhruba Saha, github: https://github.com/dhrubasaha08/DHT11
#include <Wire.h>
#include <LiquidCrystal_I2C.h> //Library for lcd displays with I2c, https://www.arduinolibraries.info/libraries/liquid-crystal-i2-c

LiquidCrystal_I2C lcd(0x27,16,2); //set the address to 0x27 for a 16 chars and 2 line display
DHT11 dht11(5); //connected to Digital I/O Pin 5 in Arduino Uno.

void setup()
{
  lcd.init(); //initialize lcd
  lcd.backlight(); //put backlight on
  Serial.begin(9600); //Initialize serial communication for dht11
}

void loop()
{
  int humidity = dht11.readHumidity();
  int temperature = dht11.readTemperature();
  lcd.setCursor(0,0); //set cursor to position
  lcd.print("Temp = ");
  lcd.print(temperature); //print temperature read from dht11
  lcd.setCursor(0,1);
  lcd.print("Humidity = ");
  lcd.print(humidity);
  lcd.print(" %");
  delay(2000); //delay 2seconds
}
