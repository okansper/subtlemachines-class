/* <-- this gray text is a COMMENT; it is not read by the computer as code. 
Begin a comment with // or /*

  Blink: Turns an LED on for one second, then off for one second, repeatedly.

(i'm ending this documentation comment with -->) */

// Create a constant to store the LED pin location
// declaring a variable of type "int" (integer number)
constint LED_PIN = 13; //see numbers next to black pins on board  
// const means the variable will not be changed

//const int LED_PIN = LED_BUILTIN; (from board specs, we know LED_BUILTIN = 13)
// if we didn't connect to breadboard, we could also just make the builtin LED on board blink. 

/*
This setup function is called (executed) EVERY TIME a sketch (program) starts. 
Use it to initialize variables, pin modes, start using libraries, etc. 
This will only run once, after each powerup or reset of the board.
*/
void setup() {
  // initialize LED pin as an output.
  pinMode(LED_PIN, OUTPUT);
  //builtin function pinMode configures digital pins to be either input or output
}

/*
This loops consecutively, allowing program to change and respond as it runs. 
It runs forever, as long as the board is connected to power. 
This code is used to actively control the board.
*/
void loop() {
  digitalWrite(LED_PIN, HIGH);    // turn the LED on 
  //digitalWrite takes 2 arguments: the pin to control, and the value to set that pin (HIGH or LOW).
      //If HIGH, it will send 5V of energy to that pin. 
  delay(200);                    // wait for a second -- makes go to sleep for 200 ms, not checking inputs
   //when delay() is called, it stops all other functionality. 
   // No sensor readings will happen until this time period had passed. 
  digitalWrite(LED_PIN, LOW);     // turn the LED off by making the voltage LOW
  delay(100);                    // wait for a second
}