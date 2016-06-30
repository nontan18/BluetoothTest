#ifndef Car_h
#define Car_h
#endif

class Car{
public:
  Car();
  void stop();
  void forward();
  void back();
  void spin_l();
  void spin_r();
  int speed;
  void set_speed(int sp);
};
