#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup(){
  lcd.begin(16, 2);
  lcd.setCursor(3,0);
  lcd.print("Row:1 Col:4");
  lcd.setCursor(4, 1);
  lcd.print("Row:2 Col:5");   
}
void loop(){  
}

