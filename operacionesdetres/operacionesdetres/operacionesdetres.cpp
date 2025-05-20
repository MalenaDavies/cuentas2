#include <iostream>
using namespace std;

int main()
{
    float a, b, c, suma, promedio, producto, mayor, menor;

    cout << "Ingrese el primer numero que desea calcular: ";
    cin >> a;

    cout << "Ingrese el segundo numero que desea calcular: ";
    cin >> b;

    cout << "Ingrese el tercer numero que desea calcular: ";
    cin >> c;

    suma = a + b + c;
    producto = a * b * c;
    promedio = (a + b + c) / 3;

    if (a > b && a > c) {
        mayor = a;
    }
    else if (b > a && b > c) {
        mayor = b;
    }
    else {
        mayor = c;
    }


    if (a < b && a < c) {
        menor = a;
    }
    else if (b < a && b < c) {
        menor = b;
    }
    else {
        menor = c;
    }

    cout << "La suma de " << a << " + " << b << " + " << c << " es: " << suma << endl;
    cout << "El promedio de " << a << ", " << b << " y " << c << " es: " << promedio << endl;
    cout << "El producto de " << a << " x " << b << " x " << c << " es: " << producto << endl;
    cout << "El mayor de " << a << ", " << b << " y " << c << " es: " << mayor << endl;
    cout << "El menor de " << a << ", " << b << " y " << c << " es: " << menor << endl;
    return 0;
}

