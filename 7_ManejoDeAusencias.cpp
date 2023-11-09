#include <iostream>
#include <string>
using namespace std;

class RegistroAsist {
public:
    RegistroAsist(string fecha, string estado) : fecha(fecha), estado(estado) {}

    void Enseñar_Asist() {
        cout << "Fecha del dia: " << fecha << ", Estado de la asistencia: " << estado << endl;
    }
private:
    string fecha;
    string estado;
};

