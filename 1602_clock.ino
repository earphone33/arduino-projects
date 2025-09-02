#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
byte hour = 15;
byte minute = 27;
byte second;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("this is a clock");
}

void loop() {
  lcd.setCursor(0,1);

  second += 1;
  if (second > 59) {
    minute += 1;
    second = 0;
  }
  if (minute > 59) {
    hour += 1;
    minute = 0;
  }
  if (hour > 23) {
    hour = 0;
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
