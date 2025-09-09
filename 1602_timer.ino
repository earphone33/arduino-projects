#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
byte hour;
int minute = 10;
int second;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("this is a timer");
}

void loop() {
  lcd.setCursor(0,1);
  if (hour == 0 && minute == 0 && second == 0) {
    lcd.setCursor(0, 0);
    lcd.print("!THE END!");
    while (true) {}
  }
  second -= 1;
  if (second < 0) {
    minute -= 1;
    second = 59;
  }
  if (minute < 0) {
    hour -= 1;
    minute = 59;
  }
  if (hour > 99) {
    hour = 99;
  }
 //displaying the numbers
 lcd.print(hour);
 lcd.setCursor(2,1); lcd.print(":");
 lcd.print(minute);
 lcd.setCursor(5,1); lcd.print(":");
 lcd.print(second);
 delay(1000);

 lcd.clear();

}
