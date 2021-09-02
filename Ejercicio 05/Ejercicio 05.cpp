/*Hacer un programa para ingresar un N valor que indica la cantidad de números
que componen una lista y luego solicitar se ingresen esos N números. Se pide
informar cuantos son positivos*/

#include <iostream>
using namespace std;

int main(){

    int numeros, contador = 0, numero;

    cout << "Cantidad de numeros a listar: ";
    cin >> numeros;

    for (int i=1;i<=numeros;i++){
        cout << "Ingresar numeros: " << endl;
        cin >> numero;

        if (numero >= 0){
            contador++;
        }
    }

    cout << "\nSe ingresaron " << contador << " numeros positivos" << endl;






    return 0;
}
