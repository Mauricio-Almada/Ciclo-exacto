/*Hacer un programa para ingresar una lista de 10 números, luego informar
cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.*/

#include <iostream>
using namespace std;

int main(){

    int contPositivos = 0, contNegativos = 0, contCeros = 0, numero;

    cout << "Ingresar diez numeros: " << endl;

    for (int i=1;i<=10;i++){
        cin >> numero;
        if (numero > 0){
            contPositivos++;
        }
        else{
            if (numero < 0){
                contNegativos++;
            }
            else{
                if (numero == 0){
                    contCeros++;
                }
            }
        }
    }

    cout << "\nSe ingresaron " << contPositivos << " numeros positivos" << endl;
    cout << "\nSe ingresaron " << contNegativos << " numeros negativos" << endl;
    cout << "\nSe ingresaron " << contCeros << " numeros cero" << endl;








    return 0;
}
