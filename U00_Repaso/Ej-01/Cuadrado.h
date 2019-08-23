#ifndef REPASO_CUADRADO_H
#define REPASO_CUADRADO_H
#include "Geometria.h"

class Cuadrado:public Geometria{
public:
    Cuadrado(float xAlto, float xAncho, int xColor):Geometria(xAlto, xAncho,xColor){};
    float getDiagonal();
    float getSuperficie();
    float getPerimetro();
    void queSoy();
};

#endif //REPASO_CUADRADO_H
