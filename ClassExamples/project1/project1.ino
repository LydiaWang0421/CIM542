int light1 = 2;
int light2 = 3;
int boat1 = 4;

int counter = 0;

boolean flipflop = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(boat1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(flipflop = false){
    counter++;
  }else{
    counter--;
  }

  if(counter >= 255){
    flipflop = true;
  }

  if(counter <= 0){
    flipflop = false;
  }

  Serial.println(counter);

  analogWrite(light1, HIGH);
  delay(1500);
  analogWrite(light2, HIGH);
  delay(1500);
  analogWrite(light1, LOW);
  delay(200);
  analogWrite(light2, LOW);
  delay(200);
  analogWrite(boat1, HIGH);
  delay(500);
  analogWrite(boat1, LOW);
  delay(500);
}
