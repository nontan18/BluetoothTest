#include "Arduino.h"
#include "Car.h"
#include "Motor.h"

Motor left = Motor(7,8,9);
Motor right = Motor(12,13,11);
int speed;

Car::Car(){
  speed = 255;
}

void Car::stop(){
  left.stop();
  right.stop();
  }
void Car::set_speed(int sp){
  speed = sp;
  }

void Car::forward(){
  left.forward(speed);
  right.forward(speed);
}

void Car::back(){
  left.reverce(speed);
  right.reverce(speed);
}

void Car::spin_l(){
  left.forward(speed);
  right.reverce(speed);
}

void Car::spin_r(){
  left.reverce(speed);
  right.forward(speed);
}
