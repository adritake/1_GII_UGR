/*Programa para calcular la suma de los cien primeros valores de una sucesion
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/
#include <iostream>

using namespace std;

int main () {
	
	double i,a,menos_uno,suma;
	
	
	suma=0;         //valor inicial para suma para que no afecte a la primera operacion
	
	
	for(i=2; i<=100; i++){		//Empezamos en dos porque el primer valor de la progresion vale 0
	menos_uno=-1;              //Siempre se le da ese valor a menos uno para que salga bien el valor de menos uno elevado a algo
	
		for(a=2; a<=i; a++){		//Aqui tambien se empieza en dos porque la cuenta de este bucle solo sirve para exponentes de 2 en adelante
			
			menos_uno= menos_uno*(-1);
			
		}

	suma = suma + (menos_uno*(i*i-1)) / (2*i); //se van sumando los numeros que tenemos al anterior
	}
	
	cout<<"El valor de la suma de todos los elementos es: " << suma ;
	
	cout<<"\n\n";
	
	system("pause");
	
}
