#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int entrada3 = 10;
int entrada4 = 9;

void setup() {
  lcd.begin(16, 2);
  lcd.print("IN3    IN4"); 
}

char c;
void loop() {

  analogWrite(entrada3, 255);
  analogWrite(entrada4, 0);

  lcd.setCursor(0, 1);   //columna 0   fila 1
  lcd.print("255");

  lcd.setCursor(8, 1);   //columna 8   fila 1
  lcd.print("0");
  
  delay(100);
  
}
