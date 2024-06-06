//3.Tabla de multiplica, bucle do while. Adjunte el ejercicio #3 realizado en clases

#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicitar al usuario ingresar un número
    cout << "Ingresa un número para generar su tabla de multiplicar: ";
    cin >> numero;

    // Validar si el número ingresado es válido (entero positivo)
    while (numero <= 0) {
        cout << "Por favor, ingresa un número entero positivo: ";
        cin >> numero;
    }

    int contador = 1;

    // Imprimir la tabla de multiplicar utilizando un bucle do-while
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    do {
        cout << numero << " x " << contador << " = " << numero * contador << endl;
        contador++;
    } while (contador <= 10); // Se imprimirán las multiplicaciones del número ingresado hasta el 10

    return 0;
}
