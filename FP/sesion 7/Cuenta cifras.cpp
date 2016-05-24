/* Programa para calculara cuantas veces aparece la cifra 9 entre un minimo y un maximo 
	Hecho por Adrián de la Torre Rodriguez 1ºA grupo A1
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	int min,min_copia,max,i,i_copia,nueves,cifra,digitos;   //Declaracion de las variables. Hago copias para no perder el valor de algunas variables
	
	
	cout<< "Introduce el minimo: ";
	cin>> min;
	cout<< "Introduce el maximo: ";
	cin>> max;
	
	nueves=0;															//El numero de nueves que tenemos empieza en 0
	digitos=1;
	
	for(i=min; i<=max; i++){										//Bucle que aumenta uno el numero que vamos a contarle los nueves cada vez
		
		min_copia=i;													//coppiamos estos valores para no perderlos
		i_copia=i;
		
		
		while(min_copia!=0){											//A cada numero le contamos los digitos con este bucle y el numero de digitos lo usamos para el bucle siguietne
			
			min_copia=min_copia/10;
			digitos++;
			
		}
		
		
		while(i_copia >0){											//A cada numero lo separamos en sus digitos con este bucle y si una cifra es 9 el contador de nueves aumenta 1
			
			cifra = i_copia / pow(10,digitos-1);   
			i_copia = i_copia - cifra * pow(10,digitos-1);  
			digitos--;
			
			if(cifra==9)
				nueves++;
		}
		
		digitos=1;														//Restauamos el valor del numero de digitos para el siguiente numero
	}
	
	 
	cout<<"\nEntre " <<min<< " y " << max << " hay " <<nueves<<" nueves.";
	
	system("pause");
	
}
		
				
			
			        
