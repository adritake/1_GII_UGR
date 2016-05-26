/* Programa para calcular la cantidad que se tendria en un banco durante un año segun el
interes.
*/

#include <iostream>
#include <cmath>

using namespace std ;

int main () {
	
	double total ;
	double capital ;
	double interes ;
	
	cout << "Introduzca el capital a ingresar en el banco: " ;
	cin >> capital ;
	cout << "Introduzca el interes del banco: " ;
	cin >> interes ;
	
	total = capital + capital * ( interes / 100 ) ;
	
	cout << "\nEl capital obtenido al cabo de un ano es: " << total <<" \n\n";
	
	system("pause") ;
}
