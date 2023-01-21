#include <Adafruit_GFX.h>  // include Adafruit graphics library
#include "VGA.h"           // include VGA library
 
// initialize the VGA library
VGA display = VGA();
 
void setup(void) {
  // initialize the VGA display
  display.begin();
 
  display.delay(5000);     // wait 5 seconds
  display.clearDisplay();  // clear the screen buffer
 
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Hello, world!");
  display.setTextColor(BLACK, WHITE);
  display.println(3.141592);
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.print("0x");
  display.println(0xDEADBEEF, HEX);
 
  display.setCursor(0, 40);
  display.setTextSize(1);
  display.print("A fully custome 8bit computer and a hacked VGA!");
}
 
void loop() {
  ;
}
