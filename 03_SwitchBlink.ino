int delayTime = 250;
int ledR = 4;
int ledG = 10;
int ledRGnd = 2;
int Switch1 = 7;
int switchGnd = 5;
int x = 1;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledG, OUTPUT);
  pinMode(ledR, OUTPUT) ;
  pinMode(ledRGnd, OUTPUT);
  digitalWrite(ledRGnd, LOW); //used as a ground pin
  pinMode(switchGnd, OUTPUT);
  digitalWrite(switchGnd, LOW); //used as ground
  pinMode(Switch1, INPUT_PULLUP);


}

// the loop function runs over and over again forever
void loop() {
  while (x <= 10) {
    int buttonState = digitalRead(Switch1);
    if (buttonState == 0) {
      digitalWrite(ledR, HIGH);
      delay(delayTime);                       // wait for a second
      digitalWrite(ledR, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(ledG, HIGH);
      delay(delayTime);
      digitalWrite(ledG, LOW);
    } else {
      digitalWrite(ledR, LOW);
      digitalWrite(ledG, LOW);
    }
    x = x + 1;
  }
}
