#include <iostream>

using namespace std;

int main()
{
	//Mensaje de bienvenida
	cout << "programa de calculo (A+B)^2/ 3\n" ;

	//Se declaran Las variables
	int A,B ;
	float resultado ;
	
	//Se pide A
	cout << "ingrese el valor A: " ;
	cin >> A;

	//Se pide B
	cout << "ingrese el valor B: " ;
	cin >> B;
	
	//Se realiza la operacion
	resultado = ((A+B)*(A+B)) / 3.0 ;
	//se muestra el resultado
	
	cout<< "El resultado es: " << resultado <<"\n";
    
	return 0;	
}