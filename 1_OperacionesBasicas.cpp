#include <iostream>
using namespace std;

int main() {
    // Variables para almacenar los valores introducidos por el usuario
    int uno, dos;
    // Preguntamos los valores al usuario y los recolectamos
    cout<< "Introduce dos valores, Primer numero: ";
    cin>>uno;
    cout<< "Segundo numero: ";
    cin>>dos;
// Sumamos los valores y le enseñamos el resultado al usuario
    int suma = uno + dos;
    cout<< "La suma de los numeros introducidos es: "<<suma;

    return 0;
}