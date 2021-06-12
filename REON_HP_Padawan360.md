# REON HoloProjectors with Padawan 360 Overview

If you have updated the firmware on the REON HP's to use CuriousMarcs firmware, you'll find that the I2C commands for the lights no longer match.

Below are the details of the holo projectors along with their old and new command assignments.
  

## I2C Addresses
  
| HP Position | I2C Address |
| --- | --- | 
| Front HP | 25 |
| Top HP | 26 |
| Rear HP |27 |

## I2C Commands
  

| Command | New Behaviour | Old Behaviour |
| ------- | ------------- | ------------- |
| 1 | Off | On | 
| 2 | White (All LEDs On) | Off |
| 3 | Always On, Random Colour | Alarm |
| 4 | Random On / Off, Random Colour | Red |
| 5 | White  | Green |
| 6 | Red | Blue |
| 7 | Green | Cyan |
| 8 | Blue | Yellow | 
| 9 | Cyan | Holo Message |
| 10 | Yellow | Disco | 
| 11 | Magenta | System Failure |
| 12 | Holo Message * | Holo Message |
| 13| Disco * | Disco |
| 14 | System Failure * | System Failure |  
  
* Note these legacy effects are programmed with simple delays. The holos, servo and I2C will be unresponsive until the effect is over.

## Holo Projector Test Sketch
A simple Arduino sketch for testing the various light commands for the Holo Projectors can be found here [test_REON_HP_commands.ino](test_REON_HP_commands.ino).

## Updated Padawan360 Body Sketch
The updated Arduino sketch for the main body with updated Holo Projector I2C commands and light changes can be found here [padawan360_body_mega_i2c.in](padawan360_body/padawan360_body_mega_i2c.ino).

Please refer to the original documentation on Padawan360 for updating and using the sketch. [Dan Kraus - Padawan360](https://github.com/dankraus/padawan360).