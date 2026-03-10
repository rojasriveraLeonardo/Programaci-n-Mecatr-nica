#include <iostream>

using namespace std;

int main()
{
	// se declaran las variables
	
	float A;
	float CUB;
	float CUA;

	//Se pide A
	cout << "ingresa el NUM: " ;
	cin >> A ;
	// se calcula el CUB
	CUB = (A*A*A);
	//se calcula el CUA
	CUA = (A*A);
	
	// se muestra el resultado final
	
	cout << "CUB:  " << CUB << endl;
	cout << "CUA:  " << CUA << endl;
	return 0;
}