#include <Servo.h>
Servo servo1;
int option;
int ejex = 90;

Servo servo2;
int ejey = 90;


void setup() {
  // put your setup code here, to run once:
  servo1.attach(3);
  servo2.attach(5);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()>0){
      option = Serial.read();
    if (option == 'I'){
      //eje++;
      ejex = ejex + 5;
      servo1.write(ejex);
      // delay(50);
    }
    if (option == 'D'){
      ejex = ejex - 5;
      servo1.write(ejex);
      // delay(50);
    }
    if (option == 'A'){
      //eje++;
      ejey = ejey + 5;
      servo2.write(ejey);
      // delay(50);
    }
    if (option == 'a'){
      ejey = ejey - 5;
      servo2.write(ejey);
      // delay(50);
    }
  }
}
