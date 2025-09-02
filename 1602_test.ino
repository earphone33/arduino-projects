/* Hello Wokwi! */
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int number = 0;

void setup() {
lcd.init();
lcd.backlight();
lcd.setCursor(1, 0);
lcd.print("Hello, world!");
}
void loop() {
  lcd.setCursor(0, 1);
  lcd.print(number);
  number += 1;
  delay(500);
}