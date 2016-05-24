/* Programa para calcular todos los numero triangulares que hay hasta un numero tope
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;

int main () {
	
	int i;
	int numero,suma;
	
	
	
	cout<<"Introduce el numero maximo: ";       	 //Peticion de la variable que vamos a comprobar todos los numero triangulares hasta ella
	cin>>numero;
	
	suma=0;
	
	for(i=1; i<numero && suma < numero ; i++){ 	//Bucle que cada vez que se repite suma al numero anterior el siguiente numero entero
		
			cout<<suma<<"  ";
			suma=suma+i;
		
	}
	
	system ("pause");
	
}
			
	
	
	
