/*Hacer un programa para ingresar un n�mero y luego informar la cantidad de
divisores de ese n�mero.
Ejemplo 1. Si se ingresa 6 se listar�n: 4 divisores.
Ejemplo 2. Si se ingresa 9 se listar�n: 3 divisores.
Ejemplo 3. Si se ingresa 11 se listar�: 2 divisores.*/

#include <iostream>
using namespace std;

int main (){

    int numero, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i=1; i<=numero; i++){
        if (numero % i == 0){
            contador++;
        }
    }
    cout << "\nEl numero " << numero << " tiene " << contador << " divisores" << endl;


    return 0;
}
