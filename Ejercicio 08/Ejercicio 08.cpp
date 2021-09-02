/*Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y
determine:
- El legajo del empleado con mayor sueldo*/

#include <iostream>
using namespace std;

int main(){

    int legajo, sueldo, sueldoMax, legajoMax;

    cout << "Ingresar legajo y sueldo de diez empleados: " << endl;

    for (int i=1;i<=10;i++){
        cout << "Legajo: ";
        cin >> legajo;
        cout << "Sueldo: ";
        cin >> sueldo;

        if (i == 1){
            sueldoMax = sueldo;
            legajoMax = legajo;
        }
        else{
            if (sueldo > sueldoMax){
                sueldoMax = sueldo;
                legajoMax = legajo;
            }
        }

    }

    cout << "\nEl legajo " << legajoMax << " Tiene el mayor sueldo de " << sueldoMax << endl;




    return 0;
}
