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

int main() {
    RegistroAsist asistencia1("2023-2-01", "Tarde");
    RegistroAsist asistencia2("2023-2-02", "Falta");
    RegistroAsist asistencia3("2023-2-03", "Tarde");

    asistencia1.Enseñar_Asist();
    asistencia2.Enseñar_Asist();
    asistencia3.Enseñar_Asist();

    return 0;
}