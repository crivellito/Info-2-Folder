#include <iostream>
using namespace std;

int division(int &a, int &b, int &c);
float division(float &a, float &b, float &c);

int main(void){
	int divisor;
	int dividendo;
	int resultado;
	cout << "Ingrese el divisor \n" << endl;
	cin >> divisor;
    	cout << "\nIngrese el dividendo\n" << endl;
	cin >> dividendo;
	
	cout << "Resultado de la division: " << division(divisor,dividendo,resultado) << endl;
	return 0;	
}


int division(int &a, int &b, int &c){
	if (b == 0){
		cout << "EL DIVISOR NO PUEDE SER 0" << endl;
		return 0;
	}	
	c = a / b;
	return c;
}



float division(float &a, float &b, float &c){
	if (b == 0){
		cout << "EL DIVISOR NO PUEDE SER 0" << endl;
		return 0;
	}
	c = a / b;
	return c;
}

