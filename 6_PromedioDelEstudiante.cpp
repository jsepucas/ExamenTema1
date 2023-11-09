#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> notas; = {7, 7 , 9 , 10, 8};

    cout << "Las notas:";
    for (int calificacion : notas) {
        cout << " " << calificacion;
    }
    cout << endl;

    int suma = 0;
    for (int calificacion : notas) {
        suma += calificacion;
    }

    double promedio =static_cast<double>(suma) / notas.size();
    cout<< "El promedio de las notas es: " << promedio << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class RegistroAsist {
public:
    RegistroAsist(string fecha, string estado) : fecha(fecha), estado(estado) {}

    void mostrar_asistencia() {
        cout << "Fecha de la clase: " << fecha << ", Estado de asistencia: " << estado << endl;
    }
private:
    string fecha;
    string estado;
};
