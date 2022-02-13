#include <IRremote.h>
#include <M5Atom.h>

IRsend irsend(26);
const int khz = 38;
const unsigned int irSignal[] =  <Signal>
                                
void setup()
{
  M5.begin(true, false, true);
  M5.dis.setBrightness(10);
  M5.dis.drawpix(0, 0x00f000);
}

void loop()
{
  if (M5.Btn.wasPressed())
  {
    irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);
    M5.dis.drawpix(0, 0xf00000);
    delay(1000);
  }
  M5.dis.drawpix(0, 0x00f000);
  M5.update();
  delay(10);
}
  
