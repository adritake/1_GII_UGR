/* Programa para pasar de mayuscula a minuscula obligando al usuario a introducir una mayuscula
*/

#include <iostream>

using namespace std;

int main () {
	char letra_mayuscula, letra_minuscula;
	bool es_minuscula;
	
	do{
		cout<< "Introduce una letra mayuscula: ";
		cin>> letra_mayuscula;
		letra_minuscula = letra_mayuscula - ('A'-'a');
		es_minuscula= ((letra_mayuscula >= 'a') && (letra_mayuscula <= 'z'));
	}while ( es_minuscula );
	
	cout<< "\nLa letra minuscula es: " << letra_minuscula;
	
	system("pause");
	
}
