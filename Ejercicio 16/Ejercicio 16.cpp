/*Hacer un programa que muestre los números primos entre el 1 y el 10.000. El
usuario no debe ingresar nada en este programa.*/

#include <iostream>
using namespace std;

int main(){

    int contador;

    for (int i=2; i<10000; i++){
        contador = 0;
        for (int j=1; j<=i; j++){
            if (i%j == 0){
                contador++;
            }
        }
        if (contador == 2){
            cout << i << endl;
        }
    }

    return 0;
}
