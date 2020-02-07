int ledpin = 2;
int time1 = 200;
int time2 = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, HIGH);
  delay(time1);
  digitalWrite(ledpin, LOW);
  delay(time1);
  digitalWrite(ledpin, HIGH);
  delay(time2);
  digitalWrite(ledpin, LOW);
  delay(time2 );

}
