/*
 * 
 *  Programmer: Wyatt McComb
 *  Date: 11.6.19
 *  Program:Blink
 *  
 *  This program will turn on an LED for specified amounts of time, turn it 
 *  off, and back on in a While Loop
 *  
 *  Update:11.22.19
 *  Program: Update Blink to allow my led to fade
 */

// Initialize our LED to Pin 9
int led = 9;        //the pin that the led is attached to on the arduino board
int brightness = 0;  //how bright the led is
int fadeAmount = 5; //how many points to fade the led

void setup() {
  //Using the function pinMode to call the variable led and provide output:
  pinMode(led, OUTPUT);
}

void loop() {
  // set the brightness to pin9 (led)
  analogWrite(led, brightness);

  //change the brightness for the next time through the loop[
  brightness = brightness + fadeAmount;

  //reverse the direction of the fading at the end of the fade
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
