/* Programa para averiguar el precio final de un coche sabiendo que el iva es del 16% y el vendedor se lleva un 20$
*/

#include <iostream>

using namespace std;

int main () {
	
	double precio_coche;
	double precio_coche_final;
	
	cout<< "Introduzca el precio de fabrica del coche: ";
	cin>> precio_coche;
	
	precio_coche_final = precio_coche + precio_coche * 0.16 + precio_coche * 0.2;
	
	cout<< "\nEl precio final del coche es: ";
	cout<< precio_coche_final << "\n\n";
	
	system("pause");
	
}
