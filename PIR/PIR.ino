/*
 * PIR Shield with a JST COnnector
 * 
 * A movement with some IR changes at the PIR sensor location cause the sensor to connect pin D3 to GND
 */

const int PIR = D3;

int PIRState = 0;


void setup() {
  pinMode(PIR, INPUT);
  pinMode(BUILTIN_LED, OUTPUT);
  // set initial state, LED off
  digitalWrite(BUILTIN_LED, HIGH);
}

void loop() {

  PIRState = digitalRead(PIR);

  if (PIRState == HIGH) {
    digitalWrite(BUILTIN_LED, LOW);  // LED on
  } else {
    digitalWrite(BUILTIN_LED, HIGH); // LED off
  }
}