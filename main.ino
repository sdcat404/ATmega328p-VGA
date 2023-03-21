#include <Adafruit_GFX.h>  // include Adafruit graphics library
#include "VGA.h"           // include VGA library
#define BUTTON_PIN 4
#define BUTTON 2

// initialize the VGA library
VGA display = VGA();
 
void setup(void) {
  // initialize the VGA display
  display.begin();
  pinMode(9, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUTTON, INPUT_PULLUP);
 
  display.delay(5000);     // wait 5 seconds
  display.clearDisplay();  // clear the screen buffer
 
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Booting SD2382 IRON OS");
  display.delay(2000); 
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.print("Welcome to Iron OS ");
  display.print("Please press ENTER to continue");
 
  
  }

 
void loop() {


digitalWrite(9, HIGH); 
   delay(1000); 
   digitalWrite(9, LOW); 
   delay(1000);


  
  byte buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW) {
      display.clearDisplay();
      display.setTextSize(1);
      display.println(".");
      delay(0400);
            display.clearDisplay();

      delay(0400);
      display.println("..");
      delay(0400);
            display.clearDisplay();

      delay(0400);
      display.println("...");
      delay(0400);
            display.clearDisplay();

      delay(0400);
      display.println("....");
            display.clearDisplay();

      delay(0400);
      display.println(".....");
            display.clearDisplay();

      delay(0400);
      display.clearDisplay();
      display.println("hi! ");

      
  }
   
}


// end of code.
