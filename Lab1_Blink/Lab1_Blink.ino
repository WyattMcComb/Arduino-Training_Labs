/*
 * 
 *  Programmer: Wyatt McComb
 *  Date: 11.6.19
 *  Program:Blink
 *  
 *  This program will turn on an LED for specified amounts of time, turn it 
 *  off, and back on in a While Loop
 *  
 *  Merged on 12.2.19
 *  
 *  Programmer: Wyatt McComb
 *  Date: 11.14.19
 *  Program:digitalRead() & The Serial Port
 *  
 *  Reads a digital input on pin 2, prints the result to the serial monitor
 */

// Initialize our LED to Pin 13
int led = 13;

//digital pin 2 has a push button attached to it
int pushButton = 2;

void setup() {
  //Using the function pinMode to call the variable led and provide output:
  pinMode(led, OUTPUT);

  //initialize serial communication at 9600 bits per second
  Serial.begin(9600);
  //make the pushButton pin an input
  pinMode(pushButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);

  //read the input pin
  int buttonState = digitalRead(pushButton);
  //print out the stae of the button
  Serial.println(buttonState);
  // if buttonState is True/Pushed by human the LED with Blink
  if (buttonState == HIGH){
    digitalWrite(led, HIGH);
    delay(1500);
    digitalWrite(led, LOW);
    delay(500);
    }
  delay(250); // delay in between readings for stability
}
