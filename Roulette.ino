int delayTime = 250;
int ledR = 4;
int ledG = 10;
int ledO = A4;
int z = 0;


void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.

  pinMode(10, OUTPUT);
  pinMode(4, OUTPUT) ;
  pinMode(2, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  digitalWrite(A5, LOW); //used as ground pin
  digitalWrite(2, LOW); //used as a ground pin
}
void loop() {
  // put your main code here, to run repeatedly:

  while (1 > z) {
    for (int x = 1; x <= 10; x++) {
      digitalWrite(ledG, HIGH);
      delay(delayTime);
      digitalWrite(ledG, LOW);
      delayTime = delayTime + 10;

      digitalWrite(ledO, HIGH);
      delay(delayTime);
      digitalWrite(ledO, LOW);
      delayTime = delayTime + 20;

      digitalWrite(ledR, HIGH);   // LED on
      delay(delayTime);                       // wait for a second
      digitalWrite(ledR, LOW);  // LED OFF
      delayTime = delayTime + 20;
    }
    z++;
  }
}
