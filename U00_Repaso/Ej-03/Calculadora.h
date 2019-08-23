#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H
#include <iostream>

template<class T, class P>
class Calculadora {
public:
    T suma(T a,T b);
    T restar(T a, T b);
    P dividir(T a, T b);
    T multiplicar(T a, T b);
};

//La implementación de un template se hace en el mismo header.

template<class T, class P>
T Calculadora<T, P>::suma(T a, T b){
    return a + b;
}

template<class T, class P>
T Calculadora<T, P>::restar(T a, T b) {
    return a - b;
}

template<class T, class P>
P Calculadora<T, P>::dividir(T a, T b) {
    return (P)(a / b);
}

template<class T, class P>
T Calculadora<T, P>::multiplicar(T a, T b) {
    return a * b;
}

#endif //REPASO_CALCULADORA_H
