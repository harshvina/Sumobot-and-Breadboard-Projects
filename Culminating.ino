//Create a program that allows your SumoBot to fight in the Octagon Battle Field.
//SumoBot must stay inside the ring as outlined by black tape (Line Following Sensor).
//SumoBot needs to look for other SumoBots and attack them (PING Sensor).

//led
int ledR = 4;
int ledG = 10;
int ledO = A4;
//line sensor
int lineSense = A0 ;  
int senseResult; 
int sensitivity = 150;    
//ping
const int pingTrigger = A3;
const int pingEcho = A2;
//switch
int Switch1 = 7;
int switchGnd = 5;

int x = 0;

void setup() {
 //line sensor
  pinMode(lineSense, INPUT);  // Input for Line Follwing Sensor
  Serial.begin(9600);
  //ping sensor
  Serial.begin(9600);
  pinMode(pingTrigger, OUTPUT);
  pinMode(pingEcho, INPUT);
  //led
  pinMode(4,OUTPUT) ;
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW); //used as a ground pin
  pinMode(10,OUTPUT);
  pinMode(A4,OUTPUT) ;
  pinMode(A5, OUTPUT);
  digitalWrite(A5, LOW); //used as a ground pin
  //motor
  pinMode(12,OUTPUT);   //right motor direction
  pinMode(3, OUTPUT);   //right motor speed
  pinMode(13, OUTPUT);  //leftmotor direction
  pinMode(11, OUTPUT);  //Left motor speed
  //switch
  pinMode(switchGnd, OUTPUT);
  digitalWrite(switchGnd, LOW); //used as ground
  pinMode(Switch1, INPUT_PULLUP);
}

void loop() {
 int buttonState = digitalRead(Switch1);
 if (buttonState == 0) {
 mainSequence();
 }else{ 
  blinker();
  halt();
  
 }
}


void mainSequence(){
  while(x<1){
  lineSensor();
  detectBot();
}
}



void lineSensor(){
senseResult = analogRead(lineSense);  // input from IR Sensor
    Serial.println(senseResult);
    if (senseResult < sensitivity)                 // check if IR sensor has been triggered
  {                                     //change direction when sensor detects line
    backward();
    turnRight();
  } else{
    forward1();
}
}
void detectBot(){
  int distance = getDistance();
  Serial.print(distance);
  Serial.print("cm");
  Serial.println();
  delay(100);
    getDistance();
    if (distance<50){
    forward2();
  }else {           ///continue going forward
   slightRight();
  }
}

void blinker(){
  digitalWrite(ledO, HIGH);
  delay(500);
  digitalWrite(ledO, LOW);
  digitalWrite(ledO, HIGH);
  delay(500);
  digitalWrite(ledO, LOW);
}

void halt(){
   digitalWrite(ledR, LOW);
   digitalWrite(ledG, LOW);
   analogWrite(3, 0); //speed of right motor
   analogWrite(11, 0); //speed of right motor
}
void forward1(){
    digitalWrite(ledG, HIGH); 
    digitalWrite(12, LOW); //direction of right motor  
    analogWrite(3, 255); //speed of right motor
    digitalWrite(13, HIGH); //direction of left motor
    analogWrite(11,255); //speed of left motor
    digitalWrite(ledG, LOW); 
}

void forward2(){
    digitalWrite(ledO, HIGH); 
    digitalWrite(12, LOW); //direction of right motor  
    analogWrite(3, 255); //speed of right motor
    digitalWrite(13, HIGH); //direction of left motor
    analogWrite(11,255); //speed of left motor
    digitalWrite(ledO, LOW); 
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
void slightRight(){
    
    digitalWrite(12, HIGH); //direction of right motor
    analogWrite(3, 150); //speed of right motor
    digitalWrite(13, HIGH); //direction of left motor
    analogWrite(11,255); //speed of left motor
    delay(170); //wait for 2 seconds
    
}
void backward(){
    digitalWrite(12, HIGH); //direction of right motor  
    analogWrite(3, 255); //speed of right motor
    digitalWrite(13, LOW); //direction of left motor
    analogWrite(11,255); //speed of left motor
    delay(700);
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
