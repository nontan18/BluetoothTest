#ifndef Motor_h
#define Motor_h
#endif

class Motor{
public:
  Motor(int in1,int in2,int ref);
  int MOTOR_IN1;
  int MOTOR_IN2;
  int MOTOR_REF;
  void stop();
  void forward(int m_speed);
  void reverce(int m_speed);

};
