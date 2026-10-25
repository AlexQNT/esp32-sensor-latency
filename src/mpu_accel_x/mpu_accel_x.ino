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
Wire.write(0x3B);                 
Wire.endTransmission(false);
Wire.requestFrom(0x68, 2 );      
byte high = Wire.read();
byte low  = Wire.read();
int16_t x=high*256+low;
Serial.println(x);                       
delay(500);
}
