int ledpin = 3;

int counter = 0;

boolean flipflop = false;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); 
  //opens the serial port, sets the speed of communication to 9600 buad or bps
  pinMode(ledpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //analogWrite goes from 0-255
  //  analogWrite(ledpin,0);
  //  delay(500);
  //  analogWrite(ledpin, 127);
  //  delay(500);
  //  analogWrite(ledpin, 255);
  //  delay(500);
  //command+/: make comments slash outside the code
  //command+T: auto format

  if(flipflop = false){
  counter++; //counter = counter +1;
  }else{
    counter = counter - 1;
  }
  
  if(counter >= 255){
    //counter = 0;
    flipflop = true;
  }

  if(counter <= 0){
    flipflop = false;
  }
  
  Serial.println(counter);
  analogWrite(ledpin, counter);
  delay(10);

}
