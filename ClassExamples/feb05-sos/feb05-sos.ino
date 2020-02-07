int ledpin = 2;
int time1 = 300;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, HIGH);
  delay(600);
  digitalWrite(ledpin, LOW);
  delay(time1);
  digitalWrite(ledpin, HIGH);
  delay(600);
  digitalWrite(ledpin, LOW);
  delay(time1);
  digitalWrite(ledpin, HIGH);
  delay(600);
  digitalWrite(ledpin, LOW);
  delay(time1);

  digitalWrite(ledpin, HIGH);
  delay(1600);
  digitalWrite(ledpin, LOW);
  delay(time1);
  digitalWrite(ledpin, HIGH);
  delay(1600);
  digitalWrite(ledpin, LOW);
  delay(time1);
  digitalWrite(ledpin, HIGH);
  delay(1600);
  digitalWrite(ledpin, LOW);
  delay(time1);

  digitalWrite(ledpin, HIGH);
  delay(600);
  digitalWrite(ledpin, LOW);
  delay(time1);
  digitalWrite(ledpin, HIGH);
  delay(600);
  digitalWrite(ledpin, LOW);
  delay(time1);
  digitalWrite(ledpin, HIGH);
  delay(600);
  digitalWrite(ledpin, LOW);
  delay(2000);

}
