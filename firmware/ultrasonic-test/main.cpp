#include "ultrasonic.h"
#include "wire.h"

#define Echo_pin 7
#define Trig_pin 6


void setup(){
    Serial.begin(115200);
}

void loop(){
    pinMode(Echo_pin, INPUT);
    pinMode(Trig_pin, OUTPUT);

    dig
}

