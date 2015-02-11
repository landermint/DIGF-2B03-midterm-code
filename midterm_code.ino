const int buttonPin = 2;     // the number of the pushbutton pin
const int buttonPin2 = 3;     // the number of the pushbutton pin
const int buttonPin3 = 4;     // the number of the pushbutton pin

const int ledPin =  9;      // the number of the LED pin

int stage = 0;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);  
  pinMode(buttonPin2, INPUT);    
  pinMode(buttonPin3, INPUT);    
  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (stage == 1){
    if (buttonState == HIGH) {    
      stage++; 
    }
  }
  if (stage == 2){
    if (buttonState == HIGH) {    
      stage++; 
    } else {
      stage = 0;
    }
  }
  if (stage == 3){
    if (buttonState == HIGH) {    
      stage++; 
    } else {
      stage = 0;
    }
  }
  if (stage == 4){
    if (buttonState == HIGH) {    
      stage++; 
    } else {
      stage = 0;
    }
  }
  if (stage == 5){
    if (buttonState == HIGH) {    
      stage++; 
    } else {
      stage = 0;
    }
  }
  if (stage == 6){
    if (buttonState == HIGH) {    
      stage++; 
    } else {
      stage = 0;
    }
  }
  if (stage == 7){
    if (buttonState == HIGH) {    
      stage++; 
    } else {
      stage = 0;
    }
  }
  if (stage == 8){
    if (buttonState == HIGH) {    
      stage++; 
    } else {
      stage = 0;
    }
  }
  if (stage == 9){
    if (buttonState == HIGH) {    
      stage++; 
    } else {
      stage = 0;
    }
  }
  if (stage == 10){
    if (buttonState2 == HIGH) {    
      stage++; 
    } else {
      stage = 0;
    }
  }
  if (stage == 11){
    digitalWrite(ledPin, HIGH);
  }
}
