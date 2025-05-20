#include <iostream>
using namespace std;

int main()
{
    int num;
    float quintap, tercerap, resto;
    cout << "Ingrese un valor entero a analizar: ";
        cin >> num;

        quintap = num / 5.0;
        resto = num % 5;
        tercerap = quintap / 5.0;

        cout << "La quinta parte de " << num << " es: " << quintap << endl;
        cout << "El resto de la division de " << num << " por 5 es : " << resto << endl;
        cout << "La quinta parte de " << quintap << " es: " << tercerap << endl;

        return 0;
}
