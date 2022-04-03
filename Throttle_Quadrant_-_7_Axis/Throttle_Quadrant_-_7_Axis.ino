// Throttle Quadrant - 7 Axis - maaltran
// 6 x 10k sliding linear pots + 1 x standard linear 10k pot + 1 x Arduino Micro Pro
// Connect all nr.1 pot pin to Arduino VCC, all nr.3 pot pin to Arduino GND.
// Connect each nr.2 pin to A0, A1, A2, A3, A6, A7, A8 Arduino pins.
// Upload the sketch, calibrate and and enjoy

#include <Joystick.h>

Joystick_ Joystick(0x11, JOYSTICK_TYPE_JOYSTICK, 0,0,true,true,true,true,true,true,false,true,false,true,false);

int xAxis_ = 0;
int yAxis_ = 0;
int zAxis_ = 0;
int RxAxis_ = 0;                    
int RyAxis_ = 0;  
int RzAxis_ = 0;          
int Throttle_ = 0;      
const bool initAutoSendState = false;

void setup()
{
      Joystick.begin();
  }
   
void loop(){
 
xAxis_ = analogRead(A0);  
xAxis_ = map(xAxis_,0,1023,0,255);
Joystick.setXAxis(xAxis_);  

yAxis_ = analogRead(A1);  
yAxis_ = map(yAxis_,0,1023,0,255);
Joystick.setYAxis(yAxis_);  

zAxis_ = analogRead(A2);  
zAxis_ = map(zAxis_,0,1023,0,255);
Joystick.setZAxis(zAxis_);  
 
RxAxis_ = analogRead(A3);
RxAxis_ = map(RxAxis_,0,1023,0,255);
Joystick.setRxAxis(RxAxis_);
 
RyAxis_ = analogRead(A6);
RyAxis_ = map(RyAxis_,0,1023,0,255);
Joystick.setRyAxis(RyAxis_);

RzAxis_ = analogRead(A7);
RzAxis_ = map(RzAxis_,1023,0,255,0);            
Joystick.setRzAxis(RzAxis_);
 
Throttle_ = analogRead(A8);
Throttle_ = map(Throttle_,1023,0,255,0);        
Joystick.setThrottle(Throttle_);                
 
delay (50);
}
