/*11 Hacer un programa para ingresar una lista de 8 números y luego informar si
todos están ordenados en forma creciente. En caso de haber dos números
“empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No rdenado”*/

#include <iostream>
using namespace std;
int main(){

    const int INGRESOS = 8;  // genero una constante que es la que indica la cantidad de vueltas que va a iterar el ciclo.
    int numero, numeroMayor, contNumeros = 0; //dentro de las variables, genere un contador que me va a ayudar las veces que un numero sea maryor al siguiente.

    cout << "INGRESE OCHO NUMEROS: " << endl;

    for (int i=0; i<INGRESOS; i++){
        cout << "Numero " << i+1 << ": ";
        cin >> numero;

        if (i == 0){
            numeroMayor = numero;
        }

        if (numero >= numeroMayor){
            numeroMayor = numero;
            contNumeros++;
        }
    }

    //verifico que el contador sea 8, de lo contrario, no estaran ordenados
    if (contNumeros == INGRESOS){
        cout << "\nConjunto ordenado" << endl;
    }
    else{
        cout << "\nConjunto no ordenado" << endl;
    }





    return 0;
}
