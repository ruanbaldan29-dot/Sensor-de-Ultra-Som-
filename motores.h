#ifndef MOTORES_H
#define MOTORES_H

class Motores {
private:
    int motor1;
    int motor2;

public:
    Motores(int m1, int m2);

    void begin();

    void andar();

    void parar();
};

#endif
