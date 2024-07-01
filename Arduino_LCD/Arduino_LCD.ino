#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);// LiquidCrystal lcd(rs, enable, D4, D5, D6, D7)

void setup() {
lcd.begin(16, 2); //(column, row)

lcd.clear();
lcd.print("Fatemeh");
}

void loop() {
}