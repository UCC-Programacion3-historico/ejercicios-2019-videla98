#include <iostream>
#include "sumatoria.h"

int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;

    unsigned int n;
    int *p;

    std::cout << "Ingrese cantidad de elementos del arreglo a sumar: " << std::endl;
    std::cin >> n;
    p = new int[n];

    for(int i=0; n > i; i++){
        std::cout << "Arr[" << i << "]: ";
        std::cin >> p[i];
    }

    std::cout << "\nSumatoria= " << sumatoria(p, n);

    return 0;
}