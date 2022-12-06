// operaciones.cpp

#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;

    cout << "dame un numero: ";
    cin >> n1;
    cout << "dame otro numero: ";
    cin >> n2;

    suma = n1+n2;
    resta = n1-n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout << "la suma es: " << suma << endl;
    cout << "la resta es: " << resta << endl;
    cout << "la multipilcacion es: " << multiplicacion << endl;
    cout << "la division es: " << division << endl;

    return 0;

}
