//runs two motors alternating direction and varying times by using and
//manipulating variables.
//Have at least 4 changes of directions ands runs times fore each motor.
//Make motors ddo their changes concurrently.

int delayTime = 1500;
int Speed = 230;


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

 //LED red
 digitalWrite(4, HIGH); 
 //forward
digitalWrite(12, LOW); //direction of right motor
analogWrite(3, Speed - 30); //speed of right motor
digitalWrite(13, HIGH); //direction of left motor
analogWrite(11,Speed); //speed of left motor
delay(delayTime);  //wait for 2 seconds
digitalWrite(4, LOW); //led
delayTime = delayTime + 500;

//green and orange
digitalWrite(10,HIGH);
digitalWrite(A5,HIGH);
//turn right
digitalWrite(12, HIGH); //direction of right motor
analogWrite(3, Speed); //speed of right motor
digitalWrite(13, HIGH); //direction of left motor
analogWrite(11,Speed-30); //speed of left motor
delay(delayTime);  //wait for 2 seconds
digitalWrite(10,LOW);
digitalWrite(A5,LOW);
delayTime = delayTime - 250; 

//orange LED
digitalWrite(A5, LOW);
//turn to center
digitalWrite(12, LOW); //direction of right motor
analogWrite(3, Speed); //speed of right motor
digitalWrite(13, LOW); //direction of left motor
analogWrite(11,Speed); //speed of left motor
delay(delayTime);  //wait for 2 seconds
digitalWrite(A5,LOW);

//Green&red LED
digitalWrite(4, HIGH);
digitalWrite(10, HIGH);
//forward
digitalWrite(12, LOW); //direction of right motor
analogWrite(3, Speed); //speed of right motor
digitalWrite(13, HIGH); //direction of left motor
analogWrite(11,Speed-30); //speed of left motor
delay(delayTime);  //wait for 2 seconds
digitalWrite(4,LOW);
digitalWrite(10, LOW);
delayTime = delayTime + 150;
//Green
digitalWrite(10,HIGH);
//Turn left
digitalWrite(12, LOW); //direction of right motor
analogWrite(3, Speed); //speed of right motor
digitalWrite(13, LOW); //direction of left motor
analogWrite(11,Speed); //speed of left motor
delay(delayTime);  //wait for 2 seconds
digitalWrite(10,LOW);

delayTime = delayTime + 100;

//Red, and orange
digitalWrite(4,HIGH);
digitalWrite(A4,HIGH);
// backward
digitalWrite(12, HIGH); //direction of right motor
analogWrite(3, Speed); //speed of right motor
digitalWrite(13, LOW); //direction of left motor
analogWrite(11,Speed); //speed of left motor
delay(delayTime);  //wait for 2 seconds
digitalWrite(4,LOW);
digitalWrite(A4,LOW);
delayTime = delayTime - 100 ;

//turn right
digitalWrite(4,HIGH);

digitalWrite(12, HIGH); //direction of right motor
analogWrite(3, Speed); //speed of right motor
digitalWrite(13, HIGH); //direction of left motor
analogWrite(11,Speed); //speed of left motor
delay(delayTime);  //wait for 2 seconds
digitalWrite(4,LOW);

}
