//6.Modifique el ejercicio #4 (adivina el número) para que la terminación del mismo NO sea la sentencia break, sino una variable booleana. De la siguiente forma:

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int numeroAleatorio = 1 + rand() % 50;

    int intentos = 0;
    const int MAX_INTENTOS = 3;
    bool adivinaste = false;

    do {
        cout << "Intento " << intentos + 1 << " de " << MAX_INTENTOS << ". Ingresa tu número: ";
        int num_usuario;
        cin >> num_usuario;

        if (num_usuario < numeroAleatorio) {
            cout << "Intenta un número mayor." << endl;
        } else if (num_usuario > numeroAleatorio) {
            cout << "Intenta un número menor." << endl;
        } else {
            adivinaste = true;
            break;
        }

        intentos++;
    } while (intentos < MAX_INTENTOS);

    if (adivinaste) {
        cout << "¡Felicidades! Ganaste una Beca en la Pucese de Esmeraldas." << endl;
    } else {
        cout << "Agotaste tus intentos. El número era " << numeroAleatorio << endl;
    }

    return 0;
}
