#include <Arduino.h>

const int PWM_FRQ = 585937;
const int PWM_RES = 256;
const float sin_frq = 60;
void setup() {
  analogWriteFrequency(2,PWM_FRQ);
  analogWriteFrequency(3,PWM_FRQ);
  digitalWrite(LED_BUILTIN,HIGH);
}

void loop() {

  analogWrite(2, PWM_RES/2);
  analogWrite(3, PWM_RES/2);
}