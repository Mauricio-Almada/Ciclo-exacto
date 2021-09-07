/*Hacer un programa para ingresar una lista 10 n�meros e informar el m�ximo de
los negativos y el m�nimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3,
24.
M�ximo Negativo: -3.
M�nimo Positivo: 2.*/

#include <iostream>
using namespace std;

int main(){

    int numero, maximoNegativo, minimoPositivo;
    bool bandmaxNeg = 0, bandminPos = 0;

    cout << "INGRESE DIEZ NUMEROS: " << endl;

    for (int i = 1;i <= 10; i ++){
        cout << "Numero " << i << ": ";
        cin >> numero;

        // minimo positivo
        if (bandminPos == 0){
            minimoPositivo = numero;
            bandminPos = 1;
        }
        else{
            if (numero > 0 && numero < minimoPositivo){
                minimoPositivo = numero;
            }
        }

        //maximo negativo
        if (bandmaxNeg == 0 && numero < 0){
            maximoNegativo = numero;
            bandmaxNeg = 1;
        }
        else{
            if (numero < 0 && numero > maximoNegativo){
                maximoNegativo = numero;
            }
        }
    }

    cout << "\nMaximo negativo: " << maximoNegativo << endl;
    cout << "\nMinimo positivo: " << minimoPositivo << endl;



    return 0;
}
