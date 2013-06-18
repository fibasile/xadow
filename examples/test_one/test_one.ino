// demo of xadow, test one
#include <Streaming.h>
#include <Wire.h>

#include "xadow.h"
#include "xadowDfs.h"

void setup()
{
    Serial.begin(115200);
    
    while(!Serial);
    
    delay(2000);
    cout << "hello world" << endl;

    Xadow.init();
}

double ax, ay, az;
void loop()
{

    Xadow.OLED.clearDisplay();          //clear the screen and set start position to top left corner
    Xadow.OLED.setNormalDisplay();      //Set display to normal mode (i.e non-inverse mode)
    Xadow.OLED.setPageMode();           //Set addressing mode to Page Mode
    Xadow.OLED.setTextXY(0,0);          //Set the cursor to Xth Page, Yth Column  
    Xadow.OLED.putString("Hello World!"); //Print the String
    
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/