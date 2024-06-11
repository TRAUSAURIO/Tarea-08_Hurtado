//2.Tabla de multiplicar desde el 12 al 1. Adjunte el ejercicio #2 realizado en clases

#include <iostream>

using namespace std;

int main() {
    int numero = 12; // Empezaremos con la tabla de multiplicar del 12

    cout << "Tabla de multiplicar del 12 al 1:" << endl;

    
    //EN ESTE EJERCICIO NO SE DEBE USAR 2 BUCLES
    
    // Utilizamos un bucle while para iterar desde el 12 hasta el 1
    while (numero >= 1) {
        int contador = 1;

        cout << "Tabla de multiplicar del " << numero << ":" << endl;

        // Imprimir la tabla de multiplicar del número actual
        while (contador <= 10) {
            cout << numero << " x " << contador << " = " << numero * contador << endl;
            contador++;
        }

        cout << endl;

        numero--; // Decrementamos el número para pasar al siguiente en la tabla
    }

    return 0;
}
