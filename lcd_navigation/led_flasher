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
*/

#include <LiquidCrystal.h>

int index = 0;
int ledCount = 0;
int ledSpeed = 500;
int switchPinLeft = 5;
int switchPinRight = 6;
int switchPinReset = 3;
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
    lcd.clearLine(0);
    lcd.clearLine(1);
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
      lcd.clearLine(0);
      lcd.clearLine(1);
    }
    if(digitalRead(switchPinRight) == LOW)
    {
      index = 2;
      lcd.clearLine(0);
      lcd.clearLine(1);
    }
  }
  while(index == 1)
  {
    /* This is the LED select menu */
  }
  while(index == 2)
  {
    /* This is the speed select menu*/
  }
}
