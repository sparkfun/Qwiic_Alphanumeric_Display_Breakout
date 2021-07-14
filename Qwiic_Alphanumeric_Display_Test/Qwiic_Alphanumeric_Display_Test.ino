/********************************************************************
 * This example rapid tests the hardware to verify Qwiic Alphanumeric
 * builds.
 * 
 * Priyanka Makin @ SparkFun Electronics
 * Original Creation Date: March 17, 2020
 *******************************************************************/
#include <Wire.h>
#include <SparkFun_Alphanumeric_Display.h>
HT16K33 display;

const int LED = 13;

void setup()
{
  Serial.begin(115200);
  Serial.println("Qwiic Alphanumeric Display Test");
  Wire.begin();
  pinMode(LED, OUTPUT);
}

void loop()
{
  if (display.begin() == true) {
    digitalWrite(LED, HIGH);
    Serial.println("Alphanumeric detected!");
    display.print("Milk");
  } else {
    digitalWrite(LED, LOW);
    Serial.println("Nothing detected!");
  }
}
