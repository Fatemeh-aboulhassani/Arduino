#include <LiquidCrystal.h>
float temp,tempC;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
Serial.begin(9600);
analogReference(DEFAULT);
lcd.begin(16,2);
lcd.clear();
lcd.print("Fatemeh-Chimeh");
}

void loop() {
temp=analogRead(A0);
temp=4.8*temp/10;
  
  
lcd.setCursor(0,1);
lcd.print("temp= ");
delay(1000);
lcd.clear();

}