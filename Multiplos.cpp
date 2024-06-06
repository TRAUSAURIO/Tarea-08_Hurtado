//1.Múltiplos de 4 comprendidos entre 1 y 50. Adjunte el ejercicio #1 realizado en clases 

#include <iostream>

using namespace std;

int main() {
    int numero = 1;

    cout << "Múltiplos de 4 comprendidos entre 1 y 50:" << endl;

    while (numero <= 50) {
        if (numero % 4 == 0) {
            cout << numero << " ";
        }
        numero++;
    }

    cout << endl;

    return 0;
}
