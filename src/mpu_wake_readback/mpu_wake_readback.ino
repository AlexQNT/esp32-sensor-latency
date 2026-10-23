#include <Wire.h>

void setup(){
Serial.begin(115200);
Wire.begin(21, 22);
Wire.beginTransmission(0x68);
Wire.write(0x6B);
Wire.write(0x00);
Wire.endTransmission();
}

void loop(){
 Wire.beginTransmission(0x68);
 Wire.write(0x6B);
 Wire.endTransmission(false);
 Wire.requestFrom(0x68, 1);
 byte id=Wire.read();
 Serial.println(id, HEX);
 delay(500);
}
