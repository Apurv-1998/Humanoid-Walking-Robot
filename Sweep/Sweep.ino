
#include <Servo.h>

Servo servo1;//left lower ankle
Servo servo2;//left hip;
Servo servo3;//right thigh;
Servo servo4;//right hip;
Servo servo5;//right lower ankle
Servo servo6;//right knee
Servo servo7;//left thigh
Servo servo8;//right upankle

int pos = 0;    // variable to store the servo position

void setup() {
  servo1.attach(3);
  servo2.attach(2);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
  servo7.attach(8);
  servo8.attach(9);// attaches the servo on pin 9 to the servo object
}
void loop()
{
  rightankle();
  delay(150);
  rightupankle();
  delay(150);
  rightthigh();
  delay(150);
  leftthigh();
  delay(150);
  leftankle();
  delay(150); 
  rightknee();
  delay(150);
 
}

  //right ankle stability
  void rightankle(){
    for(pos=0;pos<=0;pos++)
    {
      servo5.write(pos);
      delay(15);
    }
  }
  //right hip movement
  void righthip()
  {
    for(pos=160;pos<=160;pos++)
    {
      servo4.write(pos);
      delay(15);
    }
  }
 
  //left hip stability point
  void lefthip()
  {
    for (pos = 45; pos <= 45; pos += 1) { // goes from 0 degrees to 180 degrees
      servo2.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
  }

  
  // left ankle stability point
  void leftankle()
  {
    for(pos=160;pos<=180;pos++)
    {
      servo1.write(pos);
      delay(150);
    }
    for (pos = 180; pos >= 160; pos -= 1) { // goes from 180 degrees to 0 degrees
      servo1.write(pos);// tell servo to go to position in variable 'pos'
      delay(150);                       // waits 15ms for the servo to reach the position
    }
  }
  // right thigh movement
  void rightthigh(){
    for(pos=200;pos<=200;pos++)
    {
      servo3.write(pos);
      delay(150);
    }
  }
  //right knee stability
  void rightknee(){
    for(pos=30;pos<=60;pos++)
    {
      servo6.write(pos);
      delay(150);
    }
  }
  //left thigh stability
  void leftthigh(){
    for(pos=360;pos<=360;pos++)
    {
      servo7.write(pos);
      delay(150);
    }
    
  }
  //upankle stability
  void rightupankle(){
    for(pos=90;pos<=90;pos++)
    {
      servo8.write(pos);
      delay(150);
    }
  }
   
