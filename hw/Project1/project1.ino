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

  Serial.print("counter");
  Serial.print(counter);

  Serial.println();

  if(counter == 0){
    analogWrite(light1, LOW);
    analogWrite(light2, LOW);
    analogWrite(boat1, LOW);
    analogWrite(boat2, LOW);
  }else if(counter == 1){
    analogWrite(light1, HIGH);
    analogWrite(light2, HIGH);
    analogWrite(boat1, HIGH);
    analogWrite(boat2, HIGH);
  }else if(counter == 2){
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
    analogWrite(boat2, HIGH);
    delay(500);
    analogWrite(boat2, LOW);
    delay(500);
  }else{
    counter = 0;
  }

}
