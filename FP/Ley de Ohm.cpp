/* Programa para calcular el voltaje sabiendo el valor de la intensidad
y el valor de la resistencia. Según la ley de Ohm: Voltaje = Resistencia * Intensidad
*/

#include <iostream>        // Inclusion de recursos E/S

using namespace std ;

int main () {
	
	double voltaje ;           // Declaracion de las variables intensidad, voltaje y resistencia
	double intensidad ;
	double resistencia ;
	
	cout << "Introduzca el valor de la intensidad: " ;  
	cin  >> intensidad ;
	cout << "Introduzca el valor de la resistencia: " ;
	cin >> resistencia ;
	
	voltaje = resistencia * intensidad ;
	
	cout << "\nEl voltaje vale: " << voltaje << "\n\n" ;
	
	system("pause") ;
}

