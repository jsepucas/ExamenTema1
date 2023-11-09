#include <iostream>
#include
using namespace std;

class Estudiante {
private:
    string Nombre;
    int Edad;
    string Grado;

public:
    Estudiante (string Nomb, int Ed, string Gr) : Nombre(Nomb), Edad(Ed), Grado(Gr) {}

    void mostrar_info() {
        cout << "Nombre: " << Nombre << endl;
        cout << "Edad: " << Edad << " anos" << endl;
        cout << "Grado: " << Grado << endl;
    }
};



