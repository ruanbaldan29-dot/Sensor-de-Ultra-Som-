#include "Ultrassom.h"
#include <Arduino.h>

Ultrassom::Ultrassom(int trig, int echo) {
    trigPin = trig;
    echoPin = echo;
}

void Ultrassom::begin() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

float Ultrassom::lerDistancia() {

    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);

    digitalWrite(trigPin, LOW);

    long tempo = pulseIn(echoPin, HIGH);

    return (tempo * 0.0343) / 2;
}
