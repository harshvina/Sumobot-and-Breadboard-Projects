
int ledG = 10;
int delayTime1 = 1500;
int delayTime2 = 890;
int Rspeed = 200;
int Lspeed = 200;
int Rturn = 150;
int Lturn = 200;

void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT); //right motor direction
pinMode(3, OUTPUT);//right motor speed
pinMode(13, OUTPUT);//leftmotor direction
pinMode(11, OUTPUT); //Left motor speed
//LED
pinMode(10,OUTPUT); 

}


void loop() {
  // put your main code here, to run repeatedly:
  
 while (3000>delayTime1){
  for (int x =1; x<=4; x++){
  
  //LED green
  digitalWrite(ledG, HIGH);   // turn the LED on (HIGH is the voltage level)
   
    //forward
  digitalWrite(12, LOW); //direction of right motor
  analogWrite(3, Rspeed); //speed of right motor
  digitalWrite(13, HIGH); //direction of left motor
  analogWrite(11,Lspeed); //speed of left motor
  delay(delayTime1);  //wait for 2 seconds
  
  digitalWrite(ledG, LOW);    // turn the LED off by making the voltage LOW
   
  //turn right
  digitalWrite(12, HIGH); //direction of right motor
  analogWrite(3, Rturn); //speed of right motor
  digitalWrite(13, HIGH); //direction of left motor
  analogWrite(11,Lturn); //speed of left motor
  delay(delayTime2);  //wait for 2 seconds
  }
  delayTime1 = delayTime1 + 500;
 } 
 analogWrite(3, 0); //speed of right motor
 analogWrite(11,0); //speed of left motor
}
