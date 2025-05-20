#include <iostream>
using namespace std;

int main()
{
    int num, cuadrado, cubo;
    cout<< "Numero\tCuadrado\tCubo\t"<<endl;
    num = 0;

    while (num < 10) {
        cuadrado = num * num;
        cubo = num * num * num;
        cout << num << "\t" << cuadrado << "\t" << cubo << endl;
        num++;
    }
    return 0;
 
}
