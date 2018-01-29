/*
January 28, 2018
github.com/smsaul/effective-sniffle/

This is code for a five-led flasher arranged similar to a lightbar. There are
two red outside lights, an inside blue and yellow light, and a rapidly-flashing
white middle light. The flash pattern is illustrated below, over one second.

|  bbbb  |yyyy    |
|rrrr  rr|rr      |
| w w w  | w w w  |


*/

//Define pins
#define red_right 3
#define blue 5
#define white 6
#define yellow 9
#define red_left 10

void setup()
{
pinMode(red_right, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(white, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(red_left, OUTPUT);
digitalWrite(red_right, LOW);
digitalWrite(blue, LOW);
digitalWrite(white, LOW);
digitalWrite(yellow, LOW);
digitalWrite(red_left, LOW);
}

void loop()
{
  {
    digitalWrite(red_right, HIGH);
    digitalWrite(red_left, HIGH);
    delay(125);
    digitalWrite(white, HIGH);
    delay(125);
    digitalWrite(blue, HIGH);
    digitalWrite(white, LOW);
    delay(125);
    digitalWrite(white, HIGH);
    delay(125);
    digitalWrite(red_right, LOW);
    digitalWrite(red_left, LOW);
    digitalWrite(white, LOW);
    delay(125);
    digitalWrite(white, HIGH);
    delay(125);
    digitalWrite(blue, LOW);
    digitalWrite(white, LOW);
    digitalWrite(red_right, HIGH);
    digitalWrite(red_left, HIGH);
    delay(250);
    digitalWrite(yellow, HIGH);
    delay(125);
    digitalWrite(white, HIGH);
    delay(125);
    digitalWrite(red_right, LOW);
    digitalWrite(red_left, LOW);
    digitalWrite(white,LOW);
    delay(125);
    digitalWrite(white, HIGH);
    delay(125);
    digitalWrite(yellow, LOW);
    digitalWrite(white, LOW);
    delay(125);
    digitalWrite(white, HIGH);
    delay(125);
    digitalWrite(white, LOW);
    delay(250);
 }
}
