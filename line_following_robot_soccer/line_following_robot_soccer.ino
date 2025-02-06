 #include <Servo.h>
 Servo myservo;
 char input;
 const int motorPin_1A = 4;
 const int motorPin_1B = 5;
 const int motorPin_2A = 7;
 const int motorPin_2B = 6;
 const int pin1 = A1;  //digital sensor
 const int pin2 = A2;
 const int pin3 = A3;
 const int pin4 = A4;
 const int pin5 = A5;
 const int IR_pin = 2;   //ir sensor
 const int Servo_pin = 3;
 const int min_angle = 0, max_angle = 130;
int pin1_val = 0;
 int pin2_val = 0;
 int pin3_val = 0;
 int pin4_val = 0;
 int pin5_val = 0;
 int IR_val = 0;
 void setup() {
 Serial.begin(9600);
 pinMode(motorPin_1A, OUTPUT);  //LEFT
 pinMode(motorPin_1B, OUTPUT);
 pinMode(motorPin_2A, OUTPUT); //RIGHT
 pinMode(motorPin_2B, OUTPUT);
 pinMode(pin1,INPUT);
 pinMode(pin2,INPUT);
 pinMode(pin3,INPUT);
 pinMode(pin4,INPUT);
 pinMode(pin5,INPUT);
 pinMode(IR_pin,INPUT);
 myservo.attach(Servo_pin);
}
 void loop()
 {
 static int pos;
 if (Serial.available()>0)
 {
 input = Serial.read();
 Serial.println (input);
 if (input == 'A' )   //autonomous mode
 {
 != 'K'){
 while(input != 'F' && input != 'R' && input != 'L' && input != 'B' && input != 'S' && input
 pin1_val = digitalRead(pin1);
 pin2_val = digitalRead(pin2);
 pin3_val = digitalRead(pin3);
 pin4_val = digitalRead(pin4);
 pin5_val = digitalRead(pin5);
 IR_val = digitalRead(IR_pin);
Serial.print(pin1_val);
 Serial.print(pin2_val);
 Serial.print(pin3_val);
 Serial.print(pin4_val);
 Serial.print(pin5_val);
 Serial.print("\t");
 Serial.println(IR_val);
 if (pin1_val == 1 && pin2_val == 0 && pin3_val == 0 && pin4_val == 0 && pin5_val
 == 0)//LEFT
 {
 }
 left (50,100);
 if (pin1_val == 1 && pin2_val == 1 && pin3_val == 0 && pin4_val == 0 && pin5_val
 == 0)//SLIGHT LEFT
 {
 }
 left (70,100);
 if (pin1_val == 0 && pin2_val == 1 && pin3_val == 1 && pin4_val == 0 && pin5_val
 == 0)
 {
 forward (110,100);
}
 if (pin1_val == 0 && pin2_val == 1 && pin3_val == 1 && pin4_val == 1 && pin5_val
 == 0)
 == 0)
 == 0)
 {
 }
 forward (110,100);
 if (pin1_val == 0 && pin2_val == 0 && pin3_val == 1 && pin4_val == 0 && pin5_val
 {
 }
 forward (110,100);
 if (pin1_val == 0 && pin2_val == 0 && pin3_val == 1 && pin4_val == 1 && pin5_val
 {
 }
 forward (110,100);
 if (pin1_val == 0 && pin2_val == 0 && pin3_val == 01 && pin4_val == 1 && pin5_val
 == 1)//SLIGHT RIGHT
{
 right (100,70);
 }
 if (pin1_val == 0 && pin2_val == 0 && pin3_val == 0 && pin4_val == 0 && pin5_val
 == 1) //RIGHT
 {
 }
 right (100,50);
 if (IR_val == 0) //STOPP
 {
 stopp (0,0);
 delay (100);
 right (200,160);
 }
 input = Serial.read();
 Serial.println (input);
 }
}
 //remote controlled mode
 if (input == 'K' )   //kicking ball
 {
 }
 for (pos = min_angle; pos <= max_angle; pos++)
 {
 }
 myservo.write (pos);
 delay (10);
 if (input == 'F')
 {
 }
 forward (110,100);
 if (input == 'R')
 {
 }
 right (150,50);
if (input == 'L')
 {
 }
 left (100,150);
 if (input == 'B')
 {
 }
 backward (200,200);
 if (input == 'S')
 {
 }
 }
 }
 stopp (0,0);
 void forward (int pwm1, int pwm2){
 digitalWrite (motorPin_1A, HIGH);
 analogWrite (motorPin_1B, pwm1);
digitalWrite (motorPin_2A, HIGH);
 analogWrite (motorPin_2B, pwm2);
 Serial.print("right:  ");
 Serial.println (pwm1);
 Serial.print("left:  ");
 Serial.println (pwm2);
 }
 void backward (int pwm1, int pwm2){
 digitalWrite (motorPin_1A, LOW);
 analogWrite (motorPin_1B, pwm1);
 digitalWrite (motorPin_2A, LOW);
 analogWrite (motorPin_2B, pwm2);
 }
 void right (int pwm1, int pwm2){
 digitalWrite (motorPin_1A, HIGH);
 analogWrite (motorPin_1B, pwm1);
 digitalWrite (motorPin_2A, HIGH);
 analogWrite (motorPin_2B, pwm2);
 Serial.print("right:  ");
 Serial.println (pwm1);
 Serial.print("left:  ");
Serial.println (pwm2);
 }
 void left (int pwm1, int pwm2){
 digitalWrite (motorPin_1A, HIGH);
 analogWrite (motorPin_1B, pwm1);
 digitalWrite (motorPin_2A, HIGH);
 analogWrite (motorPin_2B, pwm2);
 Serial.print("right:  ");
 Serial.println (pwm1);
 Serial.println("left:  ");
 Serial.println (pwm2);
 }
 void stopp (int pwm1, int pwm2){
 digitalWrite (motorPin_1A, 0);
 analogWrite (motorPin_1B, pwm1);
 digitalWrite (motorPin_2A, 0);
 analogWrite (motorPin_2B, pwm2)