/*Dada una lista de 7 números informar cual es el primer y segundo número
impar ingresado.
Ejemplo: 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.*/

#include <iostream>
using namespace std;

int main(){

    int numero, primerImpar, segundoImpar, posicion, posicionActual, contImpares = 0;
    bool bandImpar = 0;

    cout << "INGRESAR SIETE NUMEROS: " << endl;

    for (int i=1; i<=7; i++){
        cout << "Numero " << i << ": ";
        cin >> numero;
        posicionActual = i;

        //primer impar
        if (numero%2 != 0){
            contImpares++;
            if (numero%2 != 0 && bandImpar == 0){
                primerImpar = numero;
                posicion = posicionActual;
                bandImpar = 1;
            }
            else{
                if (numero%2 != 0 && posicionActual > posicion && contImpares == 2){
                    segundoImpar = numero;
                }
            }
        }
    }

    cout << "\nPrimer impar: " << primerImpar << endl;
    cout << "\nSegundo impar: " << segundoImpar << endl;

    return 0;
}
