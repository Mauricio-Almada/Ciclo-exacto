/*Hacer un programa para ingresar un n�mero positivo y calcular e informar si el
mismo es un n�mero primero. Recordar que un n�mero primo es un n�mero
natural que tiene exactamente dos divisores.*/

#include <iostream>
using namespace std;

int main(){

    int numero, contador = 0;


    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i=1; i<=numero; i++){
        if (numero%i == 0){
            contador++;
        }
    }
    if (contador > 2){
        cout << "\nEl numero no es primo" << endl;;
    }
    else{
        cout << "\nEl numero es primo" << endl;
    }


    return 0;
}
