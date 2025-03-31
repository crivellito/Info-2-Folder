#include <iostream>
using namespace std;



class Vector {
    friend void estableceZ(Vector &, int); //Declaro funcion amiga
    friend void imprimeZ (Vector& vec); //Funcion amiga que imprime
public:
    Vector() : x(0), y(0), z(0){}  // Inicialización de x e y en el constructor
    void establecerPunto(int x, int y);
    void imprimir();
   
private:
    int x, y, z;  
};



void Vector::establecerPunto(int x, int y) {
    this->x = x;  
    this->y = y;
}


void Vector::imprimir() {
    cout << "x = " << this->x << "    y = " << this->y << endl;
}

void estableceZ(Vector &vec, int val){
    vec.z = val;
}

void imprimeZ(Vector& vec){
    cout << "  Z = " << vec.z << endl;
}



int main() {
    Vector vec1;
    vec1.establecerPunto(3.5, 7.2);  // Establecemos las coordenadas
    vec1.imprimir();                 // Imprimimos las coordenadas
    estableceZ(vec1, 4.1);
    imprimeZ(vec1); 
    return 0;
}

