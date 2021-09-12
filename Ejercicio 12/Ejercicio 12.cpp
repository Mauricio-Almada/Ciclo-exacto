/*Hacer un programa para ingresar 5 n�meros, luego informar los 2 mayores
valores ingresados, aclarando cual es el m�ximo y cual el que le sigue.
Ejemplo: 10, 8, 12, 14, 3 el resultado ser� 14 y 12.
Ejemplo: 14, 8, 12, 14 ,3 el resultado ser� 14 y 14.
Ejemplo: -4, -8, -12, -20, -2 el resultado ser� -2 y -4*/

#include <iostream>
using namespace std;

int main(){

    const int INGRESOS = 5;
    int numero, primerMayor, segundoMayor, numeroAux;

    cout << "INGRESE CINCO NUMEROS: " << endl;

    for (int i=0; i<INGRESOS; i++){
        cout << "Numero " << i+1 << ": ";
        cin >> numero;

        if (i == 0){
            primerMayor = numero;
        }
        if (numero >= primerMayor){
            segundoMayor = primerMayor;
            primerMayor = numero;
        }
        else{
            if (numero >= segundoMayor){
                numero = segundoMayor;
            }
        }


    }

    cout << "\nPrimer mayor: " << primerMayor << endl;
    cout << "\nSegundo mayor: " << segundoMayor << endl;

    return 0;
}
