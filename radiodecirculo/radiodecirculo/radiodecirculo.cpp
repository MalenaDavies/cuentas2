#include <iostream>
using namespace std;

int main()
{
    float r, pi, diametro, area, circunferencia;
    pi = 3, 14; 

    cout << "Ingrese el radio del circulo: ";
    cin >> r;

    diametro = r * 2;
    circunferencia = 2 * pi * r;
    area = pi * r * r;

    cout << "El diametro del circulo es: " << diametro << endl;
    cout << "El area del circulo es: " << area << endl;
    cout << "La circunferencia del circulo es: " << circunferencia << endl;

    return 0;
}

