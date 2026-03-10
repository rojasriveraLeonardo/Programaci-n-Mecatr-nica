#include <iostream>
#include <cmath>
using namespace std ;

int main ()
{
	// se declaran las variables
	float L1;
	float L2;
	float L3;
	float S;
	float AREA;
	// se pide L1
	cout  << "ingrese L1: ";
	cin >> L1 ;

	cout << "ingrese L2: " ;
	cin >> L2 ;
	
	cout << "ingrese L3: " ;
	cin >> L3 ;
	
	//Se calcula S
	S = (L1 + L2 + L3) / 2;
	
	//Se determina en Area del triangulo
	AREA = sqrt(S* (S-L1) * (S-L2) * (S-L3)) ;
	
	//Se muestra el resultado final
	cout << "S: " << S << endl;
	cout << "AREA: " << AREA << endl;
	
	return 0;  
}