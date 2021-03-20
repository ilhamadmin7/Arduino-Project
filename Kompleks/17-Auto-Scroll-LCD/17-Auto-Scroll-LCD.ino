#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
void setup() {  
  lcd.begin(16,2);
}

void loop() {  
  lcd.setCursor(0, 0);  
  for (int angka = 0; angka < 10; angka++) {
   lcd.print(angka);
   delay(500);
  }  
  lcd.setCursor(16,1);  
  lcd.autoscroll();  
  for (int angka = 0; angka < 10; angka++) {
    lcd.print(angka);
    delay(500);
  }  
  lcd.noAutoscroll();  
  lcd.clear();
}

