#include <Servo.h>


Servo servo1;
Servo servo2;
Servo servo3;




void setup() {
  servo1.attach(9);
  servo2.attach(3);
  servo3.attach(5);
  servo4.attach(6);
  servo5.attach(10);
  servo6.attach(11);
  Serial.begin(9600);
}
int pos = 0;


void loop() {
  if(pos == 0){
    resetServos();
    pos = 1;
  }
  if (Serial.available() > 0) {
    resetServos();
    char character = Serial.read();
    displayCharacter(character);
    delay(1000); // Wait 1 second before displaying the next character
  }
}


void displayCharacter(char character) {
  switch (character) {
    case 'a':
      servo1.write(-20);
      // servo2.write(90);
      // servo3.write(90);
      // servo4.write(90);
      // servo5.write(90);
      // servo6.write(90);
      break;
    case 'b':
      servo1.write(-20);
      servo3.write(50);
      // servo2.write(90);
      // servo3.write(90);
      // servo4.write(90);
      // servo5.write(90);
      // servo6.write(0);
      break;
    case 'c':
      servo1.write(-20);
      servo2.write(50);
      // servo2.write(90);
      // servo3.write(90);
      // servo4.write(90);
      // servo5.write(0);
      // servo6.write(90);
      break;
    case 'd':
      servo1.write(-20);
      servo2.write(50);
      // servo2.write(90);
      // servo3.write(90);
      // servo4.write(90);
      // servo5.write(0);
      // servo6.write(90);
      break;
    // more characters
    default:
      // If character not supported, reset all servos to neutral position
      resetServos();
      break;
  }
}


void resetServos() {
  servo1.write(30);
  servo2.write(30);
  servo3.write(30);
  servo4.write(30);
  servo5.write(30);
  servo6.write(30);
}
