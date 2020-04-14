int pushButton = 2;

int ledeye1 = 3;
int ledeye2 = 4;
int ledmouth = 5;

int analogpin = A0;
int potRead = 0;

boolean pressed = false;
int counter = 0;

int mappedValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(pushButton, INPUT);
  
  pinMode(ledeye1, OUTPUT);
  pinMode(ledeye2, OUTPUT);
  pinMode(ledmouth, OUTPUT);

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
    Serial.print(" Pressed");
    
    counter++;
  }

  Serial.print("counter");
  Serial.print(counter);

  Serial.println(); 

  
  potRead = analogRead(analogpin);
  mappedValue = map(potRead, 0, 1023, 31, 4978);

  if(mappedValue < 31){
    mappedValue = 31;
  }
  if(mappedValue > 4978){
    mappedValue = 4978;  
  }
  
  Serial.print("Mapped Value: ");
  Serial.println(mappedValue);
  Serial.print(" potRead: ");
  Serial.println(potRead);
  
  if(counter > 1){
    if(mappedValue > 31 && mappedValue < 1000){
      digitalWrite(ledeye1, LOW);
      digitalWrite(ledeye2, LOW);
    }else if(mappedValue > 1000 && mappedValue < 2500){
      digitalWrite(ledeye1, HIGH);
      digitalWrite(ledeye2, HIGH);
      digitalWrite(ledmouth, LOW);   
    }else if(mappedValue > 2500 && mappedValue < 3000){
      digitalWrite(ledeye1, HIGH);
      digitalWrite(ledeye2, HIGH);
      digitalWrite(ledmouth, HIGH);
    }else if(mappedValue > 3000 && mappedValue < 4978){
      digitalWrite(ledeye1, HIGH);
      delay(200);
      digitalWrite(ledeye2, HIGH);
      delay(200);
      digitalWrite(ledmouth, HIGH);
      delay(200);
    }
  }
