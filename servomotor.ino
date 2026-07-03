# include<Servo.h>
Servo motor1;

void setup() {
  motor1.attach(9);
}

void loop(){
    motor1.write(0);
    delay(3000);
    motor1.write(90);
    delay(3000);    
    motor1.write(180);
    delay(3000);
}
