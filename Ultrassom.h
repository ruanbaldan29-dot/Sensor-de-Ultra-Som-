#ifndef ULTRASSOM_H
#define ULTRASSOM_H

class Ultrassom {
private:
    int trigPin;
    int echoPin;

public:
    Ultrassom(int trig, int echo);

    void begin();

    float lerDistancia();
};

#endif
