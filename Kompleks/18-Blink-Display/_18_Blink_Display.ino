#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3, 4, 5, 6, 7);
void setup() {
  lcd.begin(16, 2);    
}
void loop() {
  lcd.setCursor(0,0);
  lcd.print("Blink   ");
  lcd.blink();
  delay(3000);
  lcd.setCursor(0,0);
  lcd.print("No Blink");
  lcd.noBlink();
  delay(3000);
}

