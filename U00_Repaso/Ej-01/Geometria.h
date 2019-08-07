#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H
#include <string>
#include "Color.h"

class Geometria {
protected:
    Geometria(float, int);
    Geometria(float, float, int);
    float ancho;
    float alto;
    virtual void getSuperficie()=0;
    virtual void getPerimetro()=0;
    virtual void queSoy()=0;
public:
    Color color;
};


#endif //REPASO_GEOMETRIA_H
