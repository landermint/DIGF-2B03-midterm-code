//button pins
const int  buttonPin = 2;  
const int  buttonPin2 = 3;
const int  buttonPin3 = 4;
//motor pin
const int motorPin = 6;
//"stage" represents how far into the password you are, there are 10 digits overall
int stage = 0;
//button states, HIGH or LOW
int buttonState = 0;
int buttonState2 = 0;
int buttonState3 = 0;
//previous button states, so program knows to only record the pressing once
int lastButtonState = 0;
int lastButtonState2 = 0;
int lastButtonState3 = 0;

void setup() {
  //defined button pins as input
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  //define motor pins as output
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  //read them buttons
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  Serial.println(stage);
  
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      // if you press the first button at the wrong time, reset
      if (stage == 2 || stage == 5 || stage == 10 || stage == 0 || stage == 3 || stage == 8 || stage == 9){
        stage = 0;
      }
      //if you press the first button at the right time, progress
      if (stage == 1 || stage == 4 || stage == 6 || stage == 7){
        stage++;
      }
    }
  }

  if (buttonState2 != lastButtonState2) {
    if (buttonState2 == HIGH) {
      //if you press the second button at the wrong time, reset
      if (stage == 1 || stage == 4 || stage == 6 || stage == 7 || stage == 0 || stage == 3 || stage == 8 || stage == 9){
        stage = 0;
      }
      //if you press the second button at the right time, progress
      if (stage == 2 || stage == 5 || stage == 10){
        stage++;
      }
    }
  }
  if (buttonState3 != lastButtonState3) {
    if (buttonState3 == HIGH) {
      //if you press the third button at the wrong time, reset
      if (stage == 1 || stage == 4 || stage == 6 || stage == 7 || stage == 2 || stage == 5 || stage == 10){
        stage = 0;
      }
      //if you press the third button at the right time, progress
      if (stage == 0 || stage == 3 || stage == 8 || stage == 9){
        stage++;
      }

    }
  }
  // now that all the above has been executed, record the current button press as the last
  lastButtonState = buttonState;
  lastButtonState2 = buttonState2;
  lastButtonState3 = buttonState3;
  
  //when you complete the password, the hat spins for 5 seconds!
  if (stage == 11) {
    digitalWrite(motorPin, HIGH);
    delay(5000);  
    stage=0;
  } 
  else {
    digitalWrite(motorPin, LOW);
  }

}



