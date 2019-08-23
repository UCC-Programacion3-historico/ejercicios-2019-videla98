#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H

template<class T>
class Calculadora {
public:
    T sumar(T a,T b);
    T restar(T a, T b);
    T dividir(T a, T b);
    T multiplicar(T a, T b);
};

//La implementación de un template se hace en el mismo header.

template<class T>
T Calculadora<T>::sumar(T a, T b){
    return a + b;
}

template<class T>
T Calculadora<T>::restar(T a, T b) {
    return a - b;
}

template<class T>
T Calculadora<T>::dividir(T a, T b) {
    return (a / b);
}

template<class T>
T Calculadora<T>::multiplicar(T a, T b) {
    return a * b;
}

#endif //REPASO_CALCULADORA_H
