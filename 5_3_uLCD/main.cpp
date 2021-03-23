#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{
      int r;
      uLCD.printf("\nHello uLCD World\n"); //Default Green on black text

      ThisThread::sleep_for(5s);
      uLCD.cls();
      for (r = 1; r < 20; r++) {
            uLCD.circle(40 , 40 , r, 0xFFFFFF);
            ThisThread::sleep_for(1s);
      }

}