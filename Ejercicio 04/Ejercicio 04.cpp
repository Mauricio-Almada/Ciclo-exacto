/*Hacer un programa para que el usuario ingrese dos n�meros y luego el
programa muestre por pantalla los n�meros entre el menor y el mayor de
ambos. Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n los n�meros entre el
3 y el 15; y si el usuario ingresa 25 y 8, se mostrar�n los n�meros entre el 8 y el
25.*/

#include <iostream>
using namespace std;

int main(){

    int numero1, numero2;

    cout << "Ingrese un numero: ";
    cin >> numero1;
    cout << "Ingrese un numero: ";
    cin >> numero2;

    if (numero1 < numero2){
        for (int i=numero1;i<=numero2;i++){
            cout << i << endl;
        }
    }
    else{
        if (numero2 < numero1){
            for (int x=numero2;x<=numero1;x++){
                cout << x << endl;
            }
        }
    }





    return 0;
}
