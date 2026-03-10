#include <iostream>
#include <string>

using namespace std;

int main()
{
	// se declaran las variables
	
	string NOM ;
	float PES ;
	float LON ;
	float PESKIL;
	float LOMMET ;
	
	//Se pide el NOM 
	cout << "ingrese el NOM: " ;
	cin >> NOM ;
	
	//Se pide el PES
	cout << "ingrese el PES: " ;
	cin >> PES ;
	
	//Se pide LON
	cout << "ingrese la LON: " ;
	cin >> LON ;
	
	//Se calcula el PESKIL
	PESKIL = (PES * 1000) ;
	
	//Se calcula el LOMMET
	LOMMET = (LON * 0.3047) ;
	
	//Se muestra el resultado final
	cout << "Nombre: " << NOM << endl ;
	cout << "PESKIL: " << PESKIL <<  endl;
	cout << "LOMMET: " << LOMMET << endl;
	
	return 0;
}