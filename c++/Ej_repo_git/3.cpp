#include <iostream>
using namespace std;

int divisionEntera(int &a, int &b, int &c);


int main(void){
	int divisor;
	int dividendo;
	int resultado;
	cout << "Ingrese el divisor \n" << endl;
	cin >> divisor;
    	cout << "\nIngrese el dividendo\n" << endl;
	cin >> dividendo;
	
	cout << "Resultado de la division: " << divisionEntera(divisor,dividendo,resultado) << endl;
}


int divisionEntera(int &a, int &b, int &c){
	if (b == 0){
		cout << "EL DIVISOR NO PUEDE SER 0" << endl;
		return 0;
	}	
	c = a / b;
	return c;
}	
