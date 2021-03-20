#define ECHOPIN 10                            
#define TRIGPIN 11                            
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup(){
  lcd.begin(16, 2);
  lcd.print("Range Finder");
  lcd.setCursor(0, 1);
  lcd.print("Range=");
  
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
  delay(1000);
}

void loop(){
  digitalWrite(TRIGPIN, LOW);                   
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);                  
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);                   
  int distance = pulseIn(ECHOPIN, HIGH);        
  distance= distance/58;                        
                      
  lcd.setCursor(6, 1);
  lcd.print(distance); 
  lcd.print(" cm ");
  delay(1000);    
}

