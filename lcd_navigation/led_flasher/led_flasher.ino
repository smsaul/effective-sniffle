/*

The purpose of this program is to exhibit the ability to navigate a simple
set of "pages" that control five flashing LEDs. This uses three inputs: left,
right, and reset. It uses a standard 16-pin LCD screen, 16x2.

First created 1/3/2018.

WORK IN PROGRESS NOTES:

there is NOTHING HERE regarding LEDs. They will be added after the interface
works appropriately.

for speed and led indicator characters, when the values are reduced, use a
blank space to clear the character. lcd.print(" ");

consider using variabke marh

*/

#include <LiquidCrystal.h>

int index = 0;
int ledCount = 1;
int ledSpeed = 500;
int switchPinLeft = 3;
int switchPinRight = 5;
int switchPinReset = 6;
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16,2);
  pinMode(switchPinLeft, INPUT_PULLUP);
  pinMode(switchPinRight, INPUT_PULLUP);
  pinMode(switchPinReset, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(switchPinReset) == LOW)
  {
    index = 0;
    lcd.setCursor(0,0);
    lcd.print("                ");
    lcd.setCursor(0,1);
    lcd.print("                ");
  }
  while(index == 0)
  {
    lcd.setCursor(0,0);
    lcd.print("LED CONTROLLER");
    lcd.setCursor(1,1);
    lcd.print("SELECT");
    lcd.setCursor(9,1);
    lcd.print("SPEED");
    if(digitalRead(switchPinLeft) == LOW)
    {
      index = 1;
      lcd.setCursor(0,0);
      lcd.print("                ");
      lcd.setCursor(0,1);
      lcd.print("                ");

    }
    if(digitalRead(switchPinRight) == LOW)
    {
      index = 2;
      lcd.setCursor(0,0);
      lcd.print("                ");
      lcd.setCursor(0,1);
      lcd.print("                ");
    }
  }
  while(index == 1)
  {
    lcd.setCursor(2,0);
    lcd.print("LEDs:");
    lcd.setCursor(2,1);
    lcd.print("LESS");
    lcd.setCursor(10,1);
    lcd.print("MORE");
    if(digitalRead(switchPinLeft) == LOW)
    {
      if(ledCount >= 1 <= 5)
      {
        lcd.setCursor((ledCount + 6), 0);
        lcd.print("X");
        ledCount = ledCount + 1;
      }
    }
    if(digitalRead(switchPinRight) == LOW)
    {
      if(ledCount >= 1 < 5)
      {
        lcd.setCursor((ledCount + 6), 1);
        lcd.print(" ");
        ledCount = ledCount - 1;
      }
    }
  }
/*
  while(index == 2)
  {
    lcd.setCursor(1,0);
    lcd.print("SPEED:");
    lcd.setCursor(2,1);
    lcd.print("LESS");
    lcd.setCursor(10,1);
    lcd.print("MORE");

  }
  */
}
