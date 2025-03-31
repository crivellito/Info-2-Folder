#include <iostream>
using namespace std;

class Vector {
	public:
	    Vector() : x(0), y(0) {}
	    void establecerPunto(int x, int y);
	    void imprimir();
	    	
	private: 
	    int x, y;
};

void Vector::establecerPunto(int x, int y){
	this->x = x;
	this->y = y;
}

void Vector::imprimir(){
	cout << "x = " << this->x << "    y = " << this->y << endl;
}


int main(){
	Vector vec1;
	vec1.establecerPunto(3.5,7.2);
	vec1.imprimir();
	return 0;
}
	
