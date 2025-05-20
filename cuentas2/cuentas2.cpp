#include <iostream>
using namespace std;
//h
int main()
{
	float a, b, s, r, m, d;
	cout << "Ingrese el primer numero que desea calcular: ";
	cin >> a;

	cout << "Ingrese el segundo numero que desea calcular: ";
	cin >> b;

	s = a + b;
	r = a - b;
	m = a * b;
	d = a / b;

	cout << "La suma de " << a << " + " << b << " es: " << s << endl;
	cout << "La resta de " << a << " - " << b << " es: " << r << endl;
	cout << "La multiplicacion de " << a << " * " << b << " es: " << m << endl;
	cout << "La division de " << a << " / " << b << " es: " << d << endl;

	return 0;

}
