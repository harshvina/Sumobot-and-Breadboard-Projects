void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT); //right motor direction
pinMode(3, OUTPUT);//right motor speed
pinMode(13, OUTPUT);//leftmotor direction
pinMode(11, OUTPUT); //Left motor speed
//LED
pinMode(10,OUTPUT); 
pinMode(4,OUTPUT); 
pinMode(2,OUTPUT);
pinMode(A4,OUTPUT);
pinMode(A5,OUTPUT); 
digitalWrite(2,LOW); //gnd
digitalWrite(A4,LOW);//gnd
}

void loop() {
  // put your main code here, to run repeatedly:

//LED green
digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
 
  //forward
digitalWrite(12, LOW); //direction of right motor
analogWrite(3, 255); //speed of right motor
digitalWrite(13, HIGH); //direction of left motor
analogWrite(11,255); //speed of left motor
delay(1000);  //wait for 2 seconds
 digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW

 //LED red
 digitalWrite(4, HIGH); 
//turn right
digitalWrite(12, HIGH); //direction of right motor
analogWrite(3, 150); //speed of right motor
digitalWrite(13, HIGH); //direction of left motor
analogWrite(11,255); //speed of left motor
delay(1000);  //wait for 2 seconds
digitalWrite(4, LOW); //led
//green and orange
digitalWrite(10,HIGH);
digitalWrite(A5,HIGH);
//turn back to center
digitalWrite(12, LOW); //direction of right motor
analogWrite(3, 255); //speed of right motor
digitalWrite(13, LOW); //direction of left motor
analogWrite(11,150); //speed of left motor
delay(1000);  //wait for 2 seconds
digitalWrite(10,LOW);
digitalWrite(A5,LOW);
//orange LED
digitalWrite(A5, HIGH);
//backward
digitalWrite(12, HIGH); //direction of right motor
analogWrite(3, 255); //speed of right motor
digitalWrite(13, LOW); //direction of left motor
analogWrite(11,255); //speed of left motor
delay(1000);  //wait for 2 seconds
digitalWrite(A5,LOW);

//Green&red LED
digitalWrite(4, HIGH);
digitalWrite(10, HIGH);
//turn left
digitalWrite(12, LOW); //direction of right motor
analogWrite(3, 255); //speed of right motor
digitalWrite(13, LOW); //direction of left motor
analogWrite(11,150); //speed of left motor
delay(1000);  //wait for 2 seconds
digitalWrite(4,LOW);
digitalWrite(10, LOW);
//Red, and orange
digitalWrite(4,HIGH);
digitalWrite(A4,HIGH);
//Turn back to center
digitalWrite(12, HIGH); //direction of right motor
analogWrite(3, 150); //speed of right motor
digitalWrite(13, HIGH); //direction of left motor
analogWrite(11,255); //speed of left motor
delay(1000);  //wait for 2 seconds
digitalWrite(4,LOW);
digitalWrite(A4,LOW);
}
//




