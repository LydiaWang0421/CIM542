int light1 = 2;
int light2 = 3;
int boat1 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(boat1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(light1, HIGH);
  delay(1500);
  digitalWrite(light2, HIGH);
  delay(1500);
  digitalWrite(light1, LOW);
  delay(200);
  digitalWrite(light2, LOW);
  delay(200);
  digitalWrite(boat1, HIGH);
  delay(500);
  digitalWrite(boat1, LOW);
  delay(500);
}
