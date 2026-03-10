#include <iostream>

using namespace std;

int main ()
{
	//Se declaran las variables
	float RADIO;
	float ALTU;
	float VOL;
	float ARE;
	
	//Se pide el RADIO
	cout<< "ingrese el RADIO: " ;
	cin >> RADIO ;
	
	//Se pide la altura
	cout << "ingrese la ALTU: " ;
	cin >> ALTU ;
	
	//Se calcula el VOL
	VOL = (3.141592 * (RADIO * RADIO) * ALTU) ;
	
	//Se calcula el ARE
	ARE = (2 * 3.141592 * RADIO * ALTU) ;
	
	//Se muestra el resultado final
	cout << "VOL: " << VOL << endl ;
	cout << "ARE: " << ARE << endl ;
	
	return 0 ;
}
	

