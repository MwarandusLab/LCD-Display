#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd_A(0x26, 16, 4);
LiquidCrystal_I2C lcd_B(0x27, 16, 4);

void setup() {
  // put your setup code here, to run once:
  lcd_A.init();
  lcd_A.backlight();
  lcd_B.begin(16, 4);
  lcd_B.backlight();

}

void loop() {
  lcd_A.clear();
  lcd_A.print("Hello There");
  lcd_A.setCursor(0,1);
  lcd_A.print("Welcome Home");
  delay(1000);
  lcd_B.clear();
  lcd_B.print("Hello     Thare");
  lcd_B.setCursor(0,1);
  lcd_B.print("Welcome Home");
  delay(1000);



}
