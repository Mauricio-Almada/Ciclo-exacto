/*Una estación meteorológica registró una muestra climática de los últimos 15
días. Por cada día registró:
- Número de día (entero)
- Temperatura (float)
- Milímetros de lluvia (float)
- Visibilidad en km (float)
Hay un registro por cada día. La información se encuentra ordenada por día. Se
pide calcular e informar:
    A - El número de día que se haya registrado la temperatura máxima.
    B - La amplitud térmica de todo el período.
    C - La cantidad de días con neblina.
    D - Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin
lluvia. Mostrar "Quincena húmeda" si llovió al menos un tercio de los
días. De lo contrario mostrar "Quincena seca".
NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la
temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.*/

#include <iostream>
using namespace std;

int main(){
    const int DIAS = 15;
    float temperatura, milimLLuvia, visibilidad;

    // A
    int diaMax;
    float tempMaxima;

    // B
    float amplitudTermica;
    float tempMinima;

    // C
    int contNeblina = 0;

    // D
    float acuLLuvia = 0;


    for (int i=1; i<=DIAS; i++){
        cout << "\tDIA " << i << ": " << endl;
        cout << "Temperatura: ";
        cin >> temperatura;
        cout << "Milimetros de lluvia: ";
        cin >> milimLLuvia;
        cout << "Visibilidad: ";
        cin >> visibilidad;
        cout << endl;

        if (i == 1){ // pregunto por la primer vuelta del for
            tempMaxima = temperatura;
            tempMinima = temperatura;
        }
        else{
            // A
            if (temperatura > tempMaxima){ // veriguo temperatura maxima
                tempMaxima = temperatura;
                diaMax = i;
            }


        }
        if (temperatura < tempMinima){ // temperatura minima. No la egreso! solo por amplitud**
            tempMinima = temperatura;
        }

        // C
        if (visibilidad <= 2){
            contNeblina++;
        }

        // D
        if (milimLLuvia >= 1){
            acuLLuvia++;
        }


    }

    // B
    amplitudTermica = tempMaxima - tempMinima; // amplitud **

    cout << "\n\tPunto A" << endl;
    cout << "La temperatura maxima registrada fue en el dia " << diaMax << " y fue de " << tempMaxima << " Grados " << endl;
    cout << "\n\tPunto B" << endl;
    cout << "La amplitud termica registrada fue de: " << amplitudTermica << endl;
    cout << "\n\tPunto C" << endl;
    cout << "Los dias con neblina fueron: " << contNeblina << endl;

    // D
    if (acuLLuvia > acuSeco){
        cout << "\n\tPunto D " << endl;
        cout << "Quincena lluviosa" << endl;
    }
    else{
        if (acuLLuvia == 5){
            cout << "\n\tPunto D " << endl;
            cout << "Quincena humeda" << endl;
        }
        else{
            if (acuLLuvia == 0){
                cout << "\n\tPunto D " << endl;
                cout << "Quincena seca" << endl;
            }
        }
    }

    return 0;
}
