/*
    Code by : Projectslearner
    Project name : LED Dimmer
    Modified Date: 08-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-led-dimmer
*/

const int ledPin = 9;    // Pin connected to the LED
const int potPin = A0;   // Pin connected to the potentiometer

void setup() {
  // Initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the potentiometer value (0-1023):
  int potValue = analogRead(potPin);
  
  // Map the potentiometer value to a PWM range (0-255):
  int pwmValue = map(potValue, 0, 1023, 0, 255);
  
  // Set the LED brightness using PWM:
  analogWrite(ledPin, pwmValue);
  
  // Small delay for stability:
  delay(10);
}
