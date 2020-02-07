int ledpin = 2;
int ledpin2 = 3;
int ledpin3 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, HIGH);
  delay(500);
  digitalWrite(ledpin, LOW);
  delay(500);
  digitalWrite(ledpin2, HIGH);
  delay(500);
  digitalWrite(ledpin2, LOW);
  delay(500);
  digitalWrite(ledpin3, HIGH);
  delay(500);
  digitalWrite(ledpin3, LOW);
  delay(500);

}
