int light1 = 2;
int light2 = 3;
int boat1 = 4;
int boat2 = 5;

int pushButton = 8;

int counter = 0;

boolean flipflop = false;
boolean pressed = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(pushButton, INPUT);
  
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(boat1, OUTPUT);
  pinMode(boat2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonState = digitalRead(pushButton);

  Serial.print("buttonState: ");
  Serial.print(buttonState);
  delay(1);

  if(buttonState == HIGH){
    pressed = true;
  }

  if(buttonState == LOW && pressed == true){
    pressed = false;
    Serial.println(" Pressed");

    counter++;
  }


  Serial.print("counter");
  Serial.print(counter);

  Serial.println();

  if(counter == 0){
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(boat1, LOW);
    digitalWrite(boat2, LOW);
  }else if(counter == 1){
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(boat1, HIGH);
    digitalWrite(boat2, HIGH);
  }else if(counter == 2){
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
    digitalWrite(boat2, HIGH);
    delay(500);
    digitalWrite(boat2, LOW);
    delay(500);
  }else{
    counter = 0;
  }

}
