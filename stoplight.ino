int x = 2000;
int ledR = 4;
int ledG = 10;
int ledO = A4;



void setup() {
  // put your setup code here, to run once:
// initialize digital pin LED_BUILTIN as an output.

  pinMode(10,OUTPUT);
  pinMode(4,OUTPUT) ;
  pinMode(2, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT); 
  digitalWrite(A5,LOW); //used as ground pin
  digitalWrite(2, LOW); //used as a ground pin
}
void loop() {
  // put your main code here, to run repeatedly:
  while(x > 1){
  x = x-200;
    digitalWrite(ledG, HIGH);
  delay(x);
  digitalWrite(ledG,LOW);
  
    digitalWrite(ledO, HIGH);
  delay(x);
  digitalWrite(ledO,LOW);
  
  digitalWrite(ledR, HIGH);   // LED on
  delay(x);                       // wait for a second
  digitalWrite(ledR, LOW);  // LED OFF
  

  }
  x=2000;
  }
