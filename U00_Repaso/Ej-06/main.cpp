#include <iostream>
#include <ctime>

int main() {
    int array[1024];

    double begin = clock();

    std::cout << "Comenzando a medir Tiempo\n" << std::endl;

    for(int i=0; i<=1023; i++){
        array[i] = i;
    }


    double end = clock();

    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

    std::cout << "Tardo elapsed_secs" << elapsed_secs << "\n" << std::endl;

    //creo que está bien pero devuleve 0 porque es muy rapido xd
    for(int i=0; i<=1023; i++){
        std::cout << array[i] << std::endl;
    }
    return 0;
}