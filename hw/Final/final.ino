int pushButton = 2;

const int ledstart = 3;
const int led1 = 4;
const int led2 = 5;
const int ledstop = 6;

boolean pressed = false;
int counter = 0;

long prevMillis = 0;
int interval = 1000;
boolean starttimer = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(pushButton, INPUT);
  
  pinMode(ledstart, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(ledstop, OUTPUT);
}

void loop(){
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(pushButton);

  Serial.print("buttonState: ");
  Serial.print(buttonState);
  delay(1);

  if(buttonState == HIGH){
    starttimer = true;
  }

  if(buttonState == LOW && starttimer == true){
    pressed = false;
    Serial.print(" Pressed");
    
    counter++;
  }

  Serial.print("counter");
  Serial.print(counter);

  Serial.println(); 

  if(starttimer == true){
    if(millis() - prevMillis >= interval){
    prevMillis = millis();
    counter++;
    Serial.println(counter);
    }

    if(counter >= 0 && counter < 30){
      digitalWrite(ledstart, HIGH);
    }else if(counter >= 30 && counter < 150){
      digitalWrite(ledstart, LOW);
      digitalWrite(led1, HIGH);
      delay(80);
      digitalWrite(led1, LOW);
      delay(80);
      digitalWrite(led1, HIGH);
    }else if(counter >= 150 && counter < 180){
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
    }else if(counter >= 180 && counter < 190){
      digitalWrite(led2, LOW);
      digitalWrite(ledstop, HIGH);
    }else if(counter > 190){
      digitalWrite(ledstart, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(ledstop, LOW);     
    }
  }
  
}
