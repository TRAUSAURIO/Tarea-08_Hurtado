//7.Diseñe el programa que usando un bucle while, imprima 100 números aleatorios comprendidos entre 15 y 120

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int contador = 0;

    cout << "100 números aleatorios entre 15 y 120:" << endl;

    while (contador < 100) {
        int numeroAleatorio = 15 + rand() % (120 - 15 + 1);
        cout << numeroAleatorio << " ";
        contador++;
    }

    cout << endl;

    return 0;
}
