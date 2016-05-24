/* Programa para saber si un numero es desgarrable
Hecho por Adrián de la Torre Rodriguez 1ºA grupo A1
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	long int numero,bucle_digitos, num_izquierda, num_derecha, num_digitos,suma;
	bool desgarrable;
	
	cout<< "Introduzca un numero entero: ";
	cin>> numero;
	
	bucle_digitos=numero;
	num_digitos=0;
	
	while(bucle_digitos!=0){										//Bucle para saber cuantos digitos tiene el numero con una variable temporal que le asignamos el valor del numero introducido
		bucle_digitos = bucle_digitos/10;
		num_digitos++;
	}
		
		
	num_izquierda = numero / pow(10,num_digitos-1);							//Primero asignamos los primeros valores de separar el numero
	num_derecha = numero - num_izquierda * pow(10,num_digitos-1);
	desgarrable = false;
	
	while( num_digitos>1 && !desgarrable){
	
	suma=pow((num_izquierda+num_derecha),2) ;                         //Comprobacion de la igualdad de los numeros desgarrables
	
		if( numero==suma  ){															//Si es desgarrable se imprime eso y se asigna true a desgarrable para que no siga el bucle
			desgarrable=true;
			cout<<"\nEl numero es desgarrable";	
		}
		else{																				//Si no es desgarrable, con este proceso se separa el numero en los siguientes numeros
		
			num_digitos--;
			num_izquierda = numero / pow(10,num_digitos-1);
			num_derecha = numero - num_izquierda * pow(10,num_digitos-1);
		
		
		}
	
	}
	
	if(!desgarrable)																//Si se sale del bucle es que no es desgarrable y se imprime eso
		cout<<"\nNo es desgarrable.";
	
	system("pause");
}
