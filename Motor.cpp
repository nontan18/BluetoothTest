#include "Arduino.h"
#include "Motor.h"

int MOTOR_IN1;
int MOTOR_IN2;
int MOTOR_REF;

Motor::Motor(int in1,int in2,int ref){
  MOTOR_IN1 = in1;
  pinMode(MOTOR_IN1,OUTPUT);

  MOTOR_IN2 = in2;
  pinMode(MOTOR_IN2,OUTPUT);

  MOTOR_REF = ref;
}

void Motor::stop(){
  digitalWrite(MOTOR_IN1,LOW);
  digitalWrite(MOTOR_IN2,LOW);
}

void Motor::forward(int m_speed){
  digitalWrite(MOTOR_IN1,HIGH);
  digitalWrite(MOTOR_IN2,LOW);
  analogWrite(MOTOR_REF,m_speed);
  }
void Motor::reverce(int m_speed){
  digitalWrite(MOTOR_IN1,LOW);
  digitalWrite(MOTOR_IN2,HIGH);
  analogWrite(MOTOR_REF,m_speed);
  }
