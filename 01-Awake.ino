/*
  Awake

  Turns a LED on for 0.1 second, then off for 0.1 second, repeatedly, for all the LED of the Arduino.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 19 Oct 2024
  by Mélodie KOUY

  This example code is based from the Blink's demo.
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

const int LED[] = {LED_BUILTIN, LED_BUILTIN_RX, LED_BUILTIN_TX}; // the order is important!
const int LED_SIZE = 3;

const int INTERVAL = 100;
int statut = HIGH;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for(int i = 0; i < LED_SIZE; i++){
    pinMode(LED[i], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 0; i < LED_SIZE; i++){
    digitalWrite(LED[i], statut);  // turn the LED on (HIGH is the voltage level)
    delay(INTERVAL);
  }
  statut = !statut;
}
