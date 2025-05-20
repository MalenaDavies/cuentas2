#include <iostream>
using namespace std;

int main()
{
    int num, dia, mes, ano;
    cout << "Ingrese un numero natural de 8 digitos: ";
        cin >> num;

        if (num > 99999999 || num < 10000000) {
            cout << "El numero ingresado no tiene 8 digitos.";
                return 1;
        }
        ano = num / 10000;
        mes = (num / 100) % 100;
        dia = num % 100;

        cout << "Ano: " << ano << endl;
        cout << "Mes: " << mes << endl;
        cout << "Dia: " << dia << endl;

        return 0;
}


