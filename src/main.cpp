#include <Arduino.h>

const int PWM_FRQ = 585937;
const int PWM_RES = 256;
int sin_frq = 10000;

void setup() {
  analogWriteFrequency(2,PWM_FRQ);
  analogWriteFrequency(3,PWM_FRQ);
  digitalWrite(LED_BUILTIN,HIGH);
}

void loop() {
  float t = 2.0*PI*((micros() % (1000000/sin_frq))/(1000000.0/sin_frq));
  int out = (PWM_RES/2) + sin(t) * (PWM_RES/2);
  analogWrite(2, out);
  analogWrite(3, out);
}
