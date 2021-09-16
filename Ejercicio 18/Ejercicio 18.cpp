/*La cuenta corriente de la famosa cantante Lady Lara ha registrado 14
movimientos durante la semana pasada. Por cada movimiento se registró:
- Número de movimiento
- Día
- Tipo ('E' - Extracción / 'D' - Depósito)
- Importe
Existe un registro por movimiento. Se desea calcular e informar:
    A- El saldo final de la cuenta.
    B- El porcentaje de movimientos de extracción y el porcentaje de depósito.
    C- El depósito de mayor importe indicando también día y número de
movimiento.
    D- La cantidad de movimientos del día 10.*/

#include <iostream>
using namespace std;

int main(){

    const int MOVIMIENTOS = 14;
    int importe, dia;
    char tipoMov;

    // A
    float acumuladorImporte = 0;

    // B
    int contExtraccion = 0, contDeposito = 0;
    float porcExtraccion, porcDeposito;

    // C
    int depositoMax, diaDeposito, movimiento;
    bool bandDeposito = false;

    // D
    int diaDiez = 0;

    for (int i=1;i<=MOVIMIENTOS;i++){
        cout << "\tNumero de movimiento: " << i << endl;
        cout << "Dia: ";
        cin >> dia;
        cout << "Tipo de movimiento ('E' - Extraccion / 'D' - Deposito): ";
        cin >> tipoMov;
        cout << "Importe: ";
        cin >> importe;

        // A
        acumuladorImporte += importe;

        // B
        switch(tipoMov){
        case 'E': contExtraccion++;
            break;
        case 'D': contDeposito++;
            break;
        default:
            break;
        }

        // C
        if (tipoMov == 'D'){
            if (bandDeposito == false){
                depositoMax = importe;
                bandDeposito = true;
                diaDeposito = i;
                movimiento = i;
            }
            else{
                if (importe > depositoMax){
                    depositoMax = importe;
                    diaDeposito = i;
                    movimiento = i;
                }
            }
        }

        // D
        if (dia == 10){
            diaDiez++;
        }
    }
    // B
    porcExtraccion = ((float)contExtraccion / MOVIMIENTOS) * 100;
    porcDeposito = ((float)contDeposito / MOVIMIENTOS) * 100;

    cout << "\n\tPunto A " << endl;
    cout << "Saldo final: $" << acumuladorImporte << endl;
    cout << "\n\tPunto B " << endl;
    cout << "Porcentaje de Extracciones: %" << porcExtraccion << endl;
    cout << "Porcentaje de Depositos: %" << porcDeposito << endl;
    cout << "\n\tPunto C " << endl;
    cout << "Deposito mayor es de: $" << depositoMax << " en el dia: " << diaDeposito << " y movimiento: " << movimiento << endl;
    cout << "\n\tPunto D " << endl;
    cout << "En el dia 10 hubieron " << diaDiez << " movimientos " << endl;


    return 0;
}
