#include <iostream>

using namespace std;

int main ()

{
	// se declaran las variables 
	float GAL ;
	float TOTAL;
	
	//Se piden los galones
	cout << "Ingrese los GAL : " ;
	cin >> GAL ;
	
	//Se calculcula los litros
	TOTAL = (GAL*3.785*8.20);
	
	//Se muestra el resultado final
	cout << "TOTAL: "<< TOTAL << endl ;
	
	return 0;
}