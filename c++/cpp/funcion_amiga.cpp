#include <iostream>

using namespace std;

class Persona {
private:
    int edad;

public:
    Persona(int e) : edad(e) {}

    // Función externa declarada como amiga
    friend void cambiarEdad(Persona &p, int nuevaEdad);
};

void cambiarEdad(Persona &p, int nuevaEdad) {
    p.edad = nuevaEdad;  // Accede y modifica el atributo privado
}

int main() {
    Persona p(20);
    cambiarEdad(p, 35);
    // no hay getter, pero sabemos que cambió
    cout << "Edad cambiada con friend (no controlada)" << endl;
    return 0;
}

