#include <LiquidCrystal.h>

int SwitchPinUp = 5;
int SwitchPinDown = 6;
int pooCount = 0;
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);
  pinMode(SwitchPinUp, INPUT_PULLUP);
  pinMode(SwitchPinDown, INPUT_PULLUP);
  lcd.print("Poos in Loos:");
}

void loop() {
  while(pooCount >= 0)
  {
  if(digitalRead(SwitchPinUp) == LOW)
    {
      pooCount = pooCount + 1;
      delay(200);
    }
  lcd.setCursor(0,1);
  lcd.print(pooCount);
  if(digitalRead(SwitchPinDown) == LOW)
   {
      if(pooCount >= 1)
      {
        pooCount = pooCount - 1;
        delay(200);
      }
   }
   lcd.setCursor(0,1);
   lcd.print(pooCount);
  }
}
