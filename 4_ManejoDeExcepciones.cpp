#include <iostream>
using namespace std;

int divide(int x, int y) {
    if (y == 0) {
        throw "No es posible realizar una división por 0";
    }
    return x / y;
}

int main() {
    int num, denom;
    cout << "Introduzca el numerador: ";
    cin >> num;
    cout << "Introduzca el denominador: ";
    cin >> denom;

    try {
        int resultado = divide(num, denom);
        cout << "Resultado: " << resultado << endl;
    } catch (const char* mensaje) {
        cout << "Excepción capturada: " << mensaje << endl;
    }
        cout << "El programa continua aun habiendo ocurrido la excepciun." << endl;


return 0;

}