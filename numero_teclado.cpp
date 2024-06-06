//5.Se lee un número por teclado que representa una tabla de multiplicar. Imprima los resultados de la tabla de multiplicar desde el 1 al 12.
//Use un bucle do..while para que se impriman varias tablas de multiplicar. El bucle termina cuando el usuario ingresa como tabla el número cero.

#include <iostream>

using namespace std;

int main() {
    int tabla;

    do {
        // Solicitar al usuario ingresar la tabla de multiplicar
        cout << "Ingresa el número de la tabla de multiplicar (0 para salir): ";
        cin >> tabla;

        // Verificar si el usuario ingresó 0 para salir
        if (tabla == 0) {
            cout << "Has salido del programa." << endl;
            break;
        }

        // Imprimir la tabla de multiplicar del número ingresado
        cout << "Tabla de multiplicar del " << tabla << ":" << endl;
        int contador = 1;
        while (contador <= 12) {
            cout << tabla << " x " << contador << " = " << tabla * contador << endl;
            contador++;
        }

        cout << endl;

    } while (true);

    return 0;
}
