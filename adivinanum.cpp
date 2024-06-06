//Diseña un programa que genere un numero aleatorio
//el usuario debe adivinar el numero en 3 oportunidades
//use numeros aleatorios y un bucle (while o do while)
//4.Ejercicio adivina el número correcto. Adjunte el ejercicio #4 realizado en clases.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int numeroAleatorio = 1 + rand() % 50;

    int intentos = 0;
    const int MAX_INTENTOS = 3;

    while (intentos < MAX_INTENTOS) {
        cout << "Intento " << intentos + 1 << " de " << MAX_INTENTOS << ". Ingresa tu número: ";
        int num_usuario;
        cin >> num_usuario;

        if (num_usuario == numeroAleatorio) {
            cout << "¡Felicidades! Ganaste una Beca en la Pucese de Esmeraldas." << endl;
            return 0;
        } else if (num_usuario < numeroAleatorio) {
            cout << "Intenta un número mayor." << endl;
        } else {
            cout << "Intenta un número menor." << endl;
        }

        intentos++;
    }

    cout << "Agotaste tus intentos. El número era " << numeroAleatorio << endl;

    return 0;
}
