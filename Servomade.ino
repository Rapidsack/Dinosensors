#include <Servo.h>
//Can only go from 20 degrees to 160 KNOW THIS
int pos = 0; // Declare the start
int servoPin = 23; // Tennsy is hooked up to pin 23
int servodelay=25; //Time for it to start (ms)
Servo servoma; //Name is servo



void setup() {
  Serial.begin(9600);//Working with serial Monitor so just used basic bits per sec rate 9600
  servoma.attach(servoPin);//Calls the pin it's connected to


}

void loop() {
Serial.println("Where would you like to posiition the servo? ");// User input

while (Serial.available()==0) {
}

pos=Serial.parseInt(); //read user input

servoma.write(pos);// write pos to servo

}
  
