/*
 * 
 *  Programmer: Wyatt McComb
 *  Date: 12.0.19
 *  Program: LED & Potentiometer
 *  
 *  Read analog port and turn on LED at a determined threshold
 */

const int analogPin = A0;
const int ledPin = 13;
float threshold = 2.25;

void setup() {
  //initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
  
}

void loop() {
  // read the input on analog pin 0
  int potentiometerValue = analogRead(analogPin);

  // Convert the analog read from 0 - 1023 to 0 - 5 volts
  float voltage = potentiometerValue * (5.0 / 1023);

  // print the value of our potnetiometer
  Serial.println(voltage);

  //If the analog value is higher than threshold it will turn on the LED
  if (voltage > threshold) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

  // Add a delay for stability
  delay(1);
}
