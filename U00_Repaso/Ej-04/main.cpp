#include <iostream>

int main() {
    std::cout << "Ejercicio 00/04\n" << std::endl;
    int a, hora=0, min=0, seg=0;
    std::cout << "Ingrese tiempo en segundos: ";
    std::cin >> a;
    seg = a % 60;
    min = a / 60;
    if(min%60 != 0){
        hora = min/60;
        min %= 60;
    }
    std::cout << "Hora corregida: " << hora << ":" << min << ":" << seg;
    return 0;
}