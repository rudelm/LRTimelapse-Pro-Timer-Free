// code provided by Johannes Z
// https://forum.lrtimelapse.com/Thread-alternative-lcd-keypad-shields?pid=31865#pid31865

//Initialize LCD
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup()
{
//Set LCD Display Size
lcd.begin(16,2);
lcd.clear();

//Control LED Backlight @ D10
pinMode(10, OUTPUT);
}

void loop()
{
//Set LED Backlight to OFF
digitalWrite(10, LOW);

//Read Shield Button from Analog 0 Pin
double button = analogRead(0);

//Set LCD Display Settings
lcd.setCursor(0,0);
lcd.println("Analog 0 Value: ");

lcd.setCursor(0,1);
lcd.print(button);
lcd.println(" ");

}
