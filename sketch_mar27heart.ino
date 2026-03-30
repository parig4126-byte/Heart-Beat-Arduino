#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

const uint32_t heart[] = {
    0x3184a444,
    0x44044044,
    0x04402801,
    0x00000000
};

void setup() {
  Serial.begin(115200);
  matrix.begin(); 

void loop() {
  matrix.loadFrame(heart);
  delay(1000); 
}