#include <iostream>

using namespace std;

int main()
{
	//Mensaje de bienvenida
	cout << "programa de calificaciones\n" ;

	//Se declaran Las variables
	
	int MAT;
	float CAL1,CAL2,CAL3,CAL4,CAL5 ;
	float Promedio;
	//Se pide la matricula
	cout << "ingrese el valor MAT: " ;
	cin >> MAT;

	//Se pide A
	cout << "ingrese el valor de la CAL1: " ;
	cin >> CAL1;
	
	//Se pide B
	cout << "ingrese el valor de la CAL2: " ;
	cin >> CAL2;
	
	cout << "ingrese el valor de la CAL3: " ;
	cin >> CAL3;
	
	cout << "ingrese el valor de la CAL4: " ;
	cin >> CAL4;
		
	cout << "ingrese el valor de la CAL5: " ;
	cin >> CAL5;
	
	//Se calcula el Promedio 
	Promedio = (CAL1 + CAL2 + CAL3 + CAL4 + CAL5) / 5;
	
	//Se muestra el resultado final
	cout << "MAT: "  << MAT << endl;
	cout << "Promedio: " << Promedio << endl;
	
	
    
	return 0;	
}