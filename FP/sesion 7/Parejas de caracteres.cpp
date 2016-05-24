/*Programa para hacer para hacer parejas con caracteres
Hecho por Adrián de la Torre Rodríguez 1ºA grupo Aº
*/

#include <iostream>

using namespace std;

int main () {
	
	char min1, min2, max1 ,max2, elemento1, elemento2;          //Declaracion de las variables de tipo caracter
	int i,j;																		//Variables enteras para los bucles
	
	cout<<"\nIntroducel el minimo del primer conjunto: "; 		//Peticion de introduccion de los valores minimo y maximo de ambos conjuntos
	cin>> min1;
	cout<<"\nIntroducel el maximo del primer conjunto: ";
	cin>> max1;
	cout<<"\nIntroducel el minimo del segundo conjunto: ";
	cin>> min2;
	cout<<"\nIntroducel el maximo del segundo conjunto: ";
	cin>> max2;
	
	cout<<"\nEl conjunto es: " << "\n";
	
	elemento1=min1;															//copiamos el valor de min1 en elemento 1 para poder asignar el valor inicial del siguiente bucle y que no varie
	
	for(i=min1; i<=max1; i++){												//Bucle que se repite para cada letra del primer conjunto
	
	elemento2=min2;															//Hacemos lo mismo que para el bucle anterior pero esta vez cada vez que se inicie el segundo bucle la segunda letra sera la primera del conjunto 2
		
		for(j=min2; j<=max2; j++){											//Bucle que se repite para cada letra del segundo conjunto, imprime la letra del primer conjunto con el que esta trabajando y con esa letra imprime todas las demas del segundo conjunto
			cout<<elemento1<<elemento2<<", ";
			elemento2++;														//sirve para pasar a la siguiente letra del conjunto 2
		}
	
	elemento1++;																//sirve para avanzar a la siguiente letra del primer conjunto
	
	}
	
	system("pause");
	
}
