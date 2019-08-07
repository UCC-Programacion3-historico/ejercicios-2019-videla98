#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H
#include "Geometria.h"

class Triangulo:public Geometria {
private:
    float angulo;
public:
    Triangulo(float xAlto, float xAncho, float xAngulo, int xColor):Geometria(xAlto,xAncho,xColor){ angulo = xAngulo; }
    void getAngulo();
    void getSuperficie();
    void getPerimetro();
    void queSoy();
};


#endif //REPASO_TRIANGULO_H
