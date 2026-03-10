#include <iostream>

using namespace std;

int main()
{
	// se declaran las variables
	float PREPRO;
	float PAGO;
	float DEVO;

	//Se pide PREPRO
	cout << "ingrese PREPRO: " ;
	cin >> PREPRO ;
	
	//Se pide el pago
	cout << "ingrese EL PAGO: " ;
	cin >> PAGO ;
	
	//Se calcula el devo
	DEVO = (PAGO-PREPRO) ;
	
	//Se muestra el resultado final
	cout << "DEVO: " << DEVO <<  endl;
	
	return 0;
}