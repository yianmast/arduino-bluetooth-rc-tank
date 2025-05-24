#include <SoftwareSerial.h>
#include <Servo.h>
Servo myservo;
int pos = 0;

SoftwareSerial bluetoothSerial(0, 1);  // RX, TX
char t;

int lb =5;
int lf = 6;
int rf = 7;
int rb = 8;

void setup() {
Serial.begin(9600);
bluetoothSerial.begin(9600);
pinMode(lf,OUTPUT);   //left motors  fwd
pinMode(lb,OUTPUT);  //left motors bwd
pinMode(rf,OUTPUT);   //right  motors fwd
pinMode(rb,OUTPUT);   //right motors bwd
myservo.attach(9);
for (pos = 0; pos <= 180; pos += 1)
myservo.write(0);
delay(1000);
myservo.write(180);
delay(1000);
myservo.write(90);
delay(1000);


 
}
 
void loop() {

if (bluetoothSerial.available()) {
    t = bluetoothSerial.read();
    Serial.print(t);
  }

  if (Serial.available()) {
    t = Serial.read();
    bluetoothSerial.print(t);
  }
 
if(t == 'W'){            //move  forward(all motors rotate in forward direction)
  digitalWrite(rf,HIGH);
  digitalWrite(lf,HIGH);
  digitalWrite(rb,LOW);
  digitalWrite(lb,LOW);
  
}
 
else if(t == 'S'){      //move reverse (all  motors rotate in reverse direction)
  digitalWrite(rf,LOW);
  digitalWrite(lf,LOW);
  digitalWrite(rb,HIGH);
  digitalWrite(lb,HIGH);
}
  
else if(t == 'A'){      //rotate left (right side motors rotate in forward direction, left  side motors bwd)
  digitalWrite(rb,LOW);
  digitalWrite(lf,LOW);
  digitalWrite(rf,HIGH);
  digitalWrite(lb,HIGH);
}
 
else if(t == 'D'){      //rotate right (left side motors rotate in forward direction,  right side motors bwd)
  digitalWrite(rf,LOW);
  digitalWrite(lb,LOW);
  digitalWrite(lf,HIGH);
  digitalWrite(rb,HIGH);
}

else if(t == 'X'){      //STOP (all motors stop)
  digitalWrite(rf,LOW);
  digitalWrite(rb,LOW);
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
}

else if(t == 'Q'){
   digitalWrite(rf,HIGH);
}

else if(t == 'E'){
   digitalWrite(lf,HIGH);
}

else if(t == 'Z'){
   digitalWrite(rb,HIGH);
}

else if(t == 'C'){
   digitalWrite(lb,HIGH);
}

else if(t == 'R'){
  myservo.write(90);
  digitalWrite(rf,LOW);
  digitalWrite(rb,LOW);
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
  delay(500);
  digitalWrite(rf,HIGH);
  digitalWrite(lf,HIGH);
  delay(100);
  myservo.write(80);
  delay(100);
  myservo.write(70);
  delay(100);
  myservo.write(60);
  delay(100);
  myservo.write(50);
  delay(100);
  myservo.write(40);
  delay(100);
  myservo.write(30);
  delay(100);
  digitalWrite(rf,LOW);
  myservo.write(90);
  delay(1000);
  digitalWrite(rf,LOW);
  digitalWrite(rb,LOW);
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
}

else if(t == 'F'){
  myservo.write(90);
  digitalWrite(rf,LOW);
  digitalWrite(rb,LOW);
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
  delay(500);
  digitalWrite(rb,HIGH);
  digitalWrite(lb,HIGH);
  delay(100);
  myservo.write(100);
  delay(100);
  myservo.write(110);
  delay(100);
  myservo.write(120);
  delay(100);
  myservo.write(130);
  delay(100);
  myservo.write(140);
  delay(100);
  myservo.write(150);
  delay(100);
  digitalWrite(rb,LOW);
  myservo.write(90);
  delay(1000);
  digitalWrite(rf,LOW);
  digitalWrite(rb,LOW);
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
}
else if(t == 'V'){
  myservo.write(90);
  digitalWrite(rf,LOW);
  digitalWrite(rb,LOW);
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
  delay(500);
  digitalWrite(rf,HIGH);
  digitalWrite(lb,HIGH);
  delay(100);
  myservo.write(80);
  delay(100);
  myservo.write(70);
  delay(100);
  myservo.write(60);
  delay(100);
  myservo.write(50);
  delay(100);
  myservo.write(40);
  delay(100);
  myservo.write(30);
  delay(100);
  digitalWrite(rf,LOW);
  myservo.write(90);
  delay(1000);
  digitalWrite(rf,LOW);
  digitalWrite(rb,LOW);
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
}

else if(t == 'j'){
  myservo.write(20);
}

else if(t == 'h'){
  myservo.write(29);
}

else if(t == 'g'){
  myservo.write(37);
}

else if(t == 'f'){
  myservo.write(46);
}

else if(t == 'd'){
  myservo.write(55);
}

else if(t == 's'){
  myservo.write(64);
}

else if(t == 'a'){
  myservo.write(73);
}

else if(t == 'p'){
  myservo.write(81);
}

else if(t == 'o'){
  myservo.write(90);
}

else if(t == 'i'){
  myservo.write(99);
}

else if(t == 'u'){
  myservo.write(108);
}

else if(t == 'y'){
  myservo.write(117);
}

else if(t == 't'){
  myservo.write(125);
}

else if(t == 'r'){
  myservo.write(138);
}

else if(t == 'e'){
  myservo.write(143);
}

else if(t == 'w'){
  myservo.write(152);
}

else if(t == 'q'){
  myservo.write(160);
}
//delay(10);
}