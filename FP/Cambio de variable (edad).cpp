/* Programa para intercambiar dos variables
*/

#include <iostream>
#include  <cmath>

using namespace std;

int main () {
	
	int edadJuan;
	int edadPedro;
	int aux;
	
	cout << "Edad Juan: ";
	cin >> edadJuan ;
	cout << "Edad Pedro: " ;
	cin >> edadPedro;
	
	aux = edadJuan;
	edadJuan = edadPedro;
	edadPedro = aux;
	
	cout << "\n\nNueva edad de Juan: " << edadJuan;
	cout << "\nNueva edad de Pedro: " << edadPedro << "\n\n\n" ;
	
	system("pause");
}
	
   

