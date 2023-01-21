
#ifndef _VGA_H
#define _VGA_H

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include "pins_arduino.h"
#endif


#define BLACK 0
#define WHITE 1

#define VGAWIDTH    160
//#define VGAHEIGHT   80
#define VGAHEIGHT   64

#define CLONED_LINES  3
#define STARTLINE    50   // start line
#define ENDLINE   (STARTLINE + VGAHEIGHT * CLONED_LINES)  // end line
#define VGA_BWIDTH   20   //number of bytes in a row ( = VGAWIDTH/8 )



class VGA : public Adafruit_GFX {
  public:
    VGA();

    void begin();
    void drawPixel(int16_t x, int16_t y, uint16_t color);
    void clearDisplay(void);
    static void delay(uint16_t msec);
};

#endif
