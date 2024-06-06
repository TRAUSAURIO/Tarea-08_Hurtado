//8.Luego de ejecutar el siguiente código: cuanto vale las variables cont y n antes de entrar al bucle y después de salir del bucle? En este ejercicio debe utilizar el depurador y la ventana watch para capturar (como imagen) el valor de las variables cont y n. 

#include <iostream>

using namespace std;

int main() {
    int num, n ,cont;
    cout<<"Ingrese un entero: ";
    cin>>num;
    
    cont=0;
    n=1;
    while(n <= num)
    {
        n*=10;
        cont++;
    }
    cout<<endl<<cont;
    return 0;
}