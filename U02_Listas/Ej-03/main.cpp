#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;
    Lista<float> lista;
    float dato;
    int x;

    std::cout << "Insertar elementos de la lista" << std::endl;
    for(int i=0; i<8; i++) {
        std::cin >> dato;
        lista.insertarUltimo(dato);
    }

    std::cout << "\nCantidad de elementos en la lista: " << lista.getTamanio();
    std::cout << "\nIngrese posicion del elemento a eliminar";
    std::cin >> x;
    try{
        lista.remover(x);
    }catch (int exception){
        switch(exception){
            case 404:
                std::cout << "404 posicion no excontrada" << std::endl;
                break;
            default:
                std::cout << "vs decis";
        }
    }

    for(int i=0; i<lista.getTamanio(); i++){
        std::cout << lista.getDato(i) << std::endl;
    }

    system("Pause");
    return 0;
}