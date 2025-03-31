#include <iostream>

using namespace std;

int maximo(int,int,int);

int main (void){
	int a, b, c;
	cout << "Ingrese 3 numeros ";
	cin >> a >> b >> c;
	return 0;
	maximo (a,b,c);
}

int maximo (int a, int b, int c){
	int max = a;

	if (b>max)
		max =b;
	if (c>max)
		max =c;
	return max;
}
