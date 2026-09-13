


int delayTime = 250;
int ledR = 4;
int ledG = 10;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10,OUTPUT);
  pinMode(4,OUTPUT) ;
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW); //used as a ground pin

  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledR, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);                       // wait for a second
  digitalWrite(ledR, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(ledG, HIGH);
  delay(delayTime);
  digitalWrite(ledG,LOW);
 
  int delayTime = 300;
}
