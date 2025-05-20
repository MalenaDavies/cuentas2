#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Ingrese un numero de 5 digitos: ";
    cin >> num;

    if (num < 1000 || num >99999) {
        cout << "El numero ingresado no tiene 5 digitos. Vuelva a intentarlo por favor.";
        return 1;
    }

    int d1, d2, d3, d4, d5;

    d1 = num / 10000;
    d2 =(num / 1000) % 10;
    d3 = (num / 100) % 10;
    d4 = (num / 10) % 10;
    d5 = num % 10;

    cout << "Los digitos del numero son: " << endl;
    cout << d1 << endl;
    cout << d2 << endl;
    cout << d3 << endl;
    cout << d4 << endl;
    cout << d5 << endl;

}

