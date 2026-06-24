#include "Ultrassom.h"
#include "motores.h"

Ultrassom sensor(9, 10);
Motores motores(5, 6);

void setup() {
    Serial.begin(9600);

    sensor.begin();
    motores.begin();
}

void loop() {

    float distancia = sensor.lerDistancia();

    Serial.print("Distancia: ");
    Serial.println(distancia);

    if (distancia < 20) {
        motores.parar();
    }
    else {
        motores.andar();
    }

    delay(100);
}
