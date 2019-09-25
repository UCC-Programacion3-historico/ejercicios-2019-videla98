#include <iostream>
#include "../Cola/Cola.h"

int main() {
    std::cout << "Ejercicio 04/01\n" << std::endl;
    Cola<char> c1, c2;
    unsigned int n, m;
    char temp1, temp2;

    std::cout<<"Ingrese el tamaño de la cola 1"<<std::endl;
    std::cin>>n;
    std::cout<<"Ingrese datos..."<<std::endl;
    for(int i=0;i<n;i++) {
        std::cin>>temp1;
        c1.encolar(temp1);
    }

    std::cout<<"Ingrese el tamaño de la cola 2"<<std::endl;
    std::cin>>m;
    std::cout<<"Ingrese datos..."<<std::endl;
    for(int i=0;i<m;i++) {
        std::cin>>temp2;
        c2.encolar(temp2);
    }

    if(n != m){
        std::cout<<"Las colas no son iguales";
    } else {
        for (int i=0;i<n;i++) {
            temp1 = c1.desencolar();
            temp2 = c2.desencolar();
            if (temp1 != temp2) {
                std::cout << "Las colas no son iguales";
                return 0;
            }
        }
        std::cout<<"Las colas son iguales";
    }


    return 0;
}