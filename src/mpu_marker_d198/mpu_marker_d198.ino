#include <Wire.h>

void setup(){
Serial.begin(115200);
Wire.begin(21, 22);
Wire.beginTransmission(0x68);
Wire.write(0x6B);
Wire.write(0x00);
Wire.endTransmission();
pinMode(4,OUTPUT);
}

void loop(){
digitalWrite(4, HIGH);
Wire.beginTransmission(0x68);
Wire.write(0x3B);             
Wire.endTransmission(false);
Wire.requestFrom(0x68, 14);
byte axh = Wire.read();
byte axl  = Wire.read();
byte ayh = Wire.read();
byte ayl = Wire.read();
byte azh = Wire.read();
byte azl= Wire.read();
byte temph=Wire.read();
byte templ=Wire.read();
byte gxh=Wire.read();
byte gxl=Wire.read();
byte gyh=Wire.read();
byte gyl=Wire.read();
byte gzh=Wire.read();
byte gzl=Wire.read();
int16_t x=axh*256+axl;
int16_t y=ayh*256+ayl;
int16_t z=azh*256+azl;
int16_t temp=temph*256+templ;
int16_t gx=gxh*256+gxl;
int16_t gy=gyh*256+gyl;
int16_t gz=gzh*256+gzl;
Serial.print("Accel x: ");
Serial.println(x);  
Serial.print("Accel y: ");
Serial.println(y);
Serial.print("Accel z: ");
Serial.println(z);   
Serial.print("Temp: ");
Serial.println(temp);  
Serial.print("Gyro x: ");
Serial.println(gx);
Serial.print("Gyro y: ");
Serial.println(gy);
Serial.print("Gyro z: ");
Serial.println(gz);  
Serial.println("----------");  
digitalWrite(4,LOW);            
delay(198);
}
