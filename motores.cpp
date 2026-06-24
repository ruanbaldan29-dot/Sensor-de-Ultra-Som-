#include "motores.h"
#include <Arduino.h>

Motores::Motores(int m1, int m2) {
    motor1 = m1;
    motor2 = m2;
}

void Motores::begin() {
    pinMode(motor1, OUTPUT);
    pinMode(motor2, OUTPUT);
}

void Motores::andar() {
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, HIGH);
}

void Motores::parar() {
    digitalWrite(motor1, LOW);
    digitalWrite(motor2, LOW);
}
