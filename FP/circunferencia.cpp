/* Programa para averiguar la superficie y el radio de una circunferencia
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	double radio;
	double superficie;
	double longitud;
	double PI;
	
	cout << "Introduzca longitud del radio: ";
	cin >> radio;
	
	PI = 3.1416;
	
	superficie = PI * radio * radio ;
	
	longitud = 2 * PI * radio ;
	
	cout << "\nLa superficie vale: " << superficie;
	cout << "\nEl diametro mide: " << longitud << "\n\n\n";
	
	system("pause");
}
