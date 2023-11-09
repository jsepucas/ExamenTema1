#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Estudiante {
public:
    Estudiante(string nombre, int grado) : nombre(nombre), grado(grado) {}
string obtenerNombre() const {
        return nombre;
    }
    int obtenerGrado() const {
        return grado;
    }
private:
    string nombre;
    int grado;

};

int main() {
vector<Estudiante> estudiantes;

    estudiantes.push_back(Estudiante("Juan", 7));
    estudiantes.push_back(Estudiante("Mario", 6));
    estudiantes.push_back(Estudiante("Antonio", 5));
    estudiantes.push_back(Estudiante("Mauricio", 4));
    estudiantes.push_back(Estudiante("Alberto", 6));

    cout << "Grados disponibles:\n";
    for (const Estudiante& estudiante : estudiantes) {
        cout << estudiante.obtenerNombre() << " - Grado " << estudiante.obtenerGrado() << endl;
    }

    int gradoBuscado;
    cout << "Elija un grado para filtrar: ";
    cin >> gradoBuscado;

    cout << "Estudiantes del grado " << gradoBuscado << ":\n";
    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.obtenerGrado() == gradoBuscado) {
            cout << estudiante.obtenerNombre() << endl;
        }
    }
    return 0;
}