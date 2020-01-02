//Sample Code for I2C LCD Display 
// Saswat Samal
// Libraries included: <........>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
void setup() {
lcd.begin(16, 2); 

}
void loop() 
{

lcd.print("PUT YOUR TEXT HERE");
lcd.setCursor(0, 0); 
delay(1500);
lcd.setCursor(0, 1);
lcd.print("PUT YOUR TEXT HERE");
delay(1500);
lcd.clear();
lcd.print("PUT YOUR TEXT HERE");
lcd.setCursor(8, 8);
delay(1500);
lcd.setCursor(0, 1);
lcd.print("PUT YOUR TEXT HERE");
delay(1500);
lcd.clear();
lcd.print("PUT YOUR TEXT HERE");
lcd.setCursor(8, 8);
delay(1500);
lcd.clear();

}
