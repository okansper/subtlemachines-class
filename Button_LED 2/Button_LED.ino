/*
  Button

  Turns an LED on when a button is pressed
*/

// Create a variable to store the LED pin location
const int LED_PIN = 13; //could do thru builtin
const int BUTTON_PIN = 4;

// SETUP runs once
void setup() {
  // initialize LED pin as an output.
  pinMode(LED_PIN, OUTPUT);
  // initialize LED pin as an output.
  pinMode(BUTTON_PIN, INPUT);
}

// LOOP runs forever
void loop() {
  //Read the state of the button
  int buttonState = digitalRead(BUTTON_PIN);

  //If the button state is HIGH...
  if( buttonState == HIGH ) {
  	digitalWrite(LED_PIN, HIGH);      //...turn on the LED...
  } else {
  	digitalWrite(LED_PIN, LOW);       //...else turn off the LED.
  }
}