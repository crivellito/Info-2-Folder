#include <iostream>
#include <string>

using namespace std;

template < typename T >
T maximo (T a, T b, T c) {
  T max = a;
  if (b > max) max = b;
  if (c > max) max = c;
  return max;
}

template < typename L >
string concatenar (L a, L b, L c) {
  string A, B, C;
  A = to_string(a);
  B = to_string(b);
  C = to_string(c);
  string D = A + B + C;
  return D;
}


int main (void){
  int a,b,c;
	cout << "Ingrese 3 numeros ";
	cin >> a >> b >> c;
	cout << "El maximo es: " << maximo (a,b,c) << endl;
  cout << "Concatenados los valores: " << concatenar (a,b,c) << endl;
	return 0;
}


