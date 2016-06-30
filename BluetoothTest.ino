#include <SoftwareSerial.h>
#include "Car.h"

//2015:12:289108
//08:6d:41:be:59:20
//AT+PAIR=0026,5C,C9B900
//
SoftwareSerial btport(5, 6);
Car car =Car();
char var;
void setup() {
    Serial.begin(19200);
    btport.begin(115200);
    Serial.println("Enter AT commands:");
    btport.println("Hello, world?");
}

void loop()

{
    if (btport.available()){
      var = btport.read();
      if(var == '0'){//停止
        car.stop();
        Serial.write("stop");
        btport.write("stop");
      }
      else if(var == '1'){//前進
        car.forward();
        Serial.write("forward");
        btport.write("forward");
      }
      else if(var == '2'){//後退
        car.back();
        Serial.write("back");
        btport.write("back");
      }
      else if(var == '3'){//回転
        car.spin_l();
        Serial.write("spin_l");
        btport.write("spin_l");
      }
      else if(var == '4'){//回転
        car.spin_r();
        Serial.write("spin_r");
        btport.write("spin_r");
      }
      Serial.write(var);
    }
    if (Serial.available()){
      btport.write(Serial.read());
    }
}
