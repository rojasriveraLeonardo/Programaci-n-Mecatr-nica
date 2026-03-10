#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Se declaran las variables
	
	double X1;
	double Y1;
	double X2;
	double Y2;
	double DIS;
	
	//Se pide X1
	cout << "ingrese el valor de X1: " ;
	cin >> X1 ;
	
	//Se pide Y1
	cout << "ingrese el valor de Y1: " ;
	cin >> Y1 ;
	
	//Se pide X2
	cout << "ingrese el valor de X2: " ;
	cin >> X2 ;
	
	//Se pide Y2
	cout << "ingrese el valor de Y2: " ;
	cin >> Y2 ;
	
	//Se calcula la distancia 
	DIS = sqrt( (X1-X2) * (X1-X2) + (Y1-Y2) * (Y1-Y2) ) ;
	
	//Se muestra el resultado final ;
	cout << "DIS: " << DIS << endl;
	
	return 0;
}