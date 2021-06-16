#include <Wire.h>

void setup() { 
  // Start I2C Bus.
  Wire.begin(); 
}

void loop() { 
// Front HP	25
// Top HP	26
// Rear HP	27

// 1 = off
// 2 = on white (all LEDs on)
// 3 = on mulitcolor (LEDs change color randomly, always on)
// 4 = legacy mode (default, LEDs change color randomly, and sometimes turn off)
// 5 = White
// 6 = Red
// 7 = Green
// 8 = Blue
// 9 = Cyan
// 10 = Yellow
// 11 = Magenta
// Legacy, the following will cause the holos, servo and I2C 
// to be unresponsive until the effect is over.
// 12 = HoloMessage (flickers for 31 seconds)
// 13 = Disco 
// 14 = System Failure
  
   triggerI2C(25, 3);  
   delay(5000); 
}

void triggerI2C(byte deviceID, byte eventID) { 
  Wire.beginTransmission(deviceID);
  Wire.write(eventID);
  Wire.endTransmission();
}