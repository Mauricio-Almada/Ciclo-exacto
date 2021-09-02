/*Hacer un programa que permita ingresar el sueldo de 10 empleados y
determine:
- El sueldo máximo.
- El sueldo mínimo.
- El sueldo promedio.
- Cantidad de sueldos mayores a $50000.*/

#include <iostream>
using namespace std;

int main(){
    const int SUELDOMAYOR = 50000;
    int sueldoMax, sueldoMin, sueldo, promedio, acumSueldo = 0, contSueldo = 0;
    bool bandMax = false, bandMin = false;

    cout << "Ingrese diez sueldos: " << endl;
    for (int i = 1; i <= 10; i++){
        cin >> sueldo;
        acumSueldo += sueldo;

        if (sueldo > SUELDOMAYOR){
            contSueldo++;
        }

        if (bandMax == 0){
            sueldoMax = sueldo;
            bandMax = true;
        }
        else{
            if (sueldo > sueldoMax){
                sueldoMax = sueldo;
            }
        }

        if (bandMin == 0){
            sueldoMin = sueldo;
            bandMin = true;
        }
        else{
            if (sueldo < sueldoMin){
                sueldoMin = sueldo;
            }
        }

    }

    promedio = acumSueldo / 10;

    cout << "\nEl sueldo maximo es: " << sueldoMax << endl;
    cout << "\nEl sueldo minimo es: " << sueldoMin << endl;
    cout << "\nEl promedio es: " << promedio << endl;
    cout << "\nSueldos mayores a $50000: " << contSueldo << endl;



    return 0;
}
