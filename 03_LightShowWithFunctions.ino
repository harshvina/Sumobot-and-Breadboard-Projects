//Use all available LED’s
//Create 2 “Light Show” blinking patterns.
//Each blinking pattern should be in their own function with their own loops to determine how many times they run.
//Initiate each pattern from a “mainSequence” function.
//Initiate the “mainSequence” function by a switch.



int delayTime = 200;
int ledR = 4;
int ledG = 10;
int ledO = A4;
int ledOGnd = A5;
int ledRGnd = 2;
int Switch1 = 7;
int switchGnd = 5;
int x = 0;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledG, OUTPUT);
  pinMode(ledR, OUTPUT) ;
  pinMode(ledRGnd, OUTPUT);
  digitalWrite(ledRGnd, LOW);                   //used as a ground pin
  pinMode(ledO, OUTPUT) ;
  pinMode(ledOGnd, OUTPUT);
  digitalWrite(ledOGnd, LOW);              //used as a ground pin
  pinMode(switchGnd, OUTPUT);
  digitalWrite(switchGnd, LOW);                 //used as ground
  pinMode(Switch1, INPUT_PULLUP);


}

// the loop function runs over and over again forever
void loop () {
 while (x <= 4) {
    int buttonState = digitalRead(Switch1);
    if (buttonState == 0) {
      mainSequence();
      } else {
      digitalWrite(ledR, LOW);
      digitalWrite(ledG, LOW);
      digitalWrite(ledO, LOW);
    }
    x = x + 1;
  }
}
    
void mainSequence() {
  lightShow1();
  lightShow2();
}
      
void lightShow1() {
  int k = 0;
  while (k<=4){
      digitalWrite(ledR, HIGH);
      delay(delayTime);                       // wait for a second
      digitalWrite(ledR, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(ledG, HIGH);
      delay(delayTime);
      digitalWrite(ledG, LOW);
      
      digitalWrite(ledR, HIGH);
      delay(delayTime);                       // wait for a second
      digitalWrite(ledO, HIGH);
      delay(delayTime);                       // wait for a second
      digitalWrite(ledR, LOW); 
      digitalWrite(ledO, LOW);
       k++;
}   
}

void lightShow2(){
  int z = 0;
 while (z<=3) {
      digitalWrite(ledG, HIGH);
      delay(delayTime);
      digitalWrite(ledG, LOW); 
      digitalWrite(ledO, HIGH);
      delay(delayTime);    
      digitalWrite(ledO, LOW);
      digitalWrite(ledR, HIGH);
      delay(delayTime);
      digitalWrite(ledR, LOW);
      digitalWrite(ledG, HIGH);
      delay(delayTime);                       // wait for a second
      digitalWrite(ledG, LOW);     
      z++;
}

}
