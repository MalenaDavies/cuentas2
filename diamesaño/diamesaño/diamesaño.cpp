#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int ano, mes, dia;
    cout << "Ingrese una fecha:" << endl;

    cout << "Ano (como numero de 4 digitos): ";
        cin >> ano;

     cout << "Mes(del 1 al 12): ";
        cin >> mes;

        if (mes < 1 || mes>12) {
            cout << "El mes debe ser entre el 1 al 12.";
            return 1;
        }

        cout << "Dia (del 1 al 31): ";
        cin >> dia;

        if (dia < 1 || dia>31) {
            cout << "El dia debe ser entre el 1 al 31.";
            return 1;
        }


        cout << ano;
        cout << setw(2) << setfill('0') << mes; //para que sea un numero de 2 digitos, y si falta uno lo rellene con 0
        cout << setw(2) << setfill('0') << dia;

        return 0;
}

