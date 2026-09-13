//Create a program that uses distance sensing to make your sumoBot drive back and forth between two walls.
//Use LEDs to indicate the output of the sensors.
//Create separate functions for each direction the SumoBot goes. Ex: forward, turn, backward

const int pingTrigger = A3;
const int pingEcho = A2;
int ledR = 4;
int ledG = 10;
int lineSense = A0 ; 
int senseResult; 
int sensitivity = 150;    // declarations
//switch
int Switch1 = 7;
int switchGnd = 5;
int x = 0;


void setup() {
  Serial.begin(9600);
  pinMode(pingTrigger, OUTPUT);
  pinMode(pingEcho, INPUT);
   //led red
  pinMode(4,OUTPUT) ;
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW); //used as a ground pin
  //ledG
  pinMode(10, OUTPUT);
  
  //motor
  pinMode(12,OUTPUT); //right motor direction
  pinMode(3, OUTPUT);//right motor speed
  pinMode(13, OUTPUT);//leftmotor direction
  pinMode(11, OUTPUT); //Left motor speed

  //switch
  pinMode(switchGnd, OUTPUT);
  digitalWrite(switchGnd, LOW);                 //used as ground
  pinMode(Switch1, INPUT_PULLUP);

}

void loop(){
  int buttonState = digitalRead(Switch1);
 if (buttonState == 0) {
 mainSequence();
   }else{
   digitalWrite(ledR, LOW);
   digitalWrite(ledG, LOW);
   analogWrite(3, 0); //speed of right motor
   analogWrite(11, 0); //speed of right motor
}
}

 void mainSequence(){
  while (x<1){
  int distance = getDistance();
  Serial.print(distance);
  Serial.print("cm");
  Serial.println();
  delay(100);

  if (distance<10){
    backward();
    turnRight();
  }else {           ///continue going forward
    
    forward();
    
}
}
}
void forward(){
    digitalWrite(12, LOW); //direction of right motor  
    analogWrite(3, 255); //speed of right motor
    digitalWrite(13, HIGH); //direction of left motor
    analogWrite(11,255); //speed of left motor
}

void turnRight(){
    digitalWrite(ledR, HIGH); 
    digitalWrite(12, HIGH); //direction of right motor
    analogWrite(3, 150); //speed of right motor
    digitalWrite(13, HIGH); //direction of left motor
    analogWrite(11,255); //speed of left motor
    delay(1550); //wait for 2 seconds
    digitalWrite(ledR, LOW);
}

void backward(){
    digitalWrite(12, HIGH); //direction of right motor  
    analogWrite(3, 255); //speed of right motor
    digitalWrite(13, LOW); //direction of left motor
    analogWrite(11,255); //speed of left motor
    delay(500);
}

int getDistance() {
  digitalWrite(pingTrigger, LOW);     //triggers sound
  delayMicroseconds(2);
  digitalWrite(pingTrigger, HIGH);
  delayMicroseconds(10);                //duration of ping
  digitalWrite(pingTrigger, LOW);

//Echo pin produces a pulse with the length
  long duration = pulseIn(pingEcho, HIGH);
// convert time to distance
  long cm = duration / 29 / 2;         
  return cm;
// returns the value in “cm” to “distance”
}
