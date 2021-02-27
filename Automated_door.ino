#include <Servo.h>
#define infra 3                                             //infrared sensor pin
int servoPin = 4;                                           //Servo motor pin

 Servo door;                                                //servo motor work as door 
void setup() {
                                                            //put your setup code here, to run once:
pinMode(infra,INPUT);                                       //making input from infrared 
door.attach(servoPin);                                      //making attachment of door with servo pin
door.write(0);                                              //put the door closed
}

void loop() {
  // put your main code here, to run repeatedly:
int moven = digitalRead(infra);                             //reading the movenment of any person or anything near the sensor
  if (moven == 0)                                           //if there is movement near the sensor then 
    {
    door.write(90);                                         //door will open 
    delay(5000);                                            //door will be open for 5 second
    }
  else                                                      //when there is no movement
    {
    door.write(0);                                          //door will be closed
    }

}
