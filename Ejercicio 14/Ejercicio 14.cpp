/*Hacer un programa para ingresar un número y luego informar la cantidad de
divisores de ese número.
Ejemplo 1. Si se ingresa 6 se listarán: 4 divisores.
Ejemplo 2. Si se ingresa 9 se listarán: 3 divisores.
Ejemplo 3. Si se ingresa 11 se listará: 2 divisores.*/

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
