/* Programa para calcular la funcion potencial y la factorial
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>


using namespace std;

int main() {
	
	double base,solucion;
	int exponente,factorial,n;
	
	cout<<"Introduce el valor del exponente de la funcion exponencial: ";
	cin>> exponente;
	
	
	for(base=-10; base <=10; base++){                                          //He acotado la funcion desde -10 a 10
		solucion=base;																				
		
		for(n=2; n<=exponente; n++){															//Bucle para elevar un numero al exponente que sea
			
			solucion= solucion*base;
		
		}
			
			
		cout<<"\nPara x=" << base << " la funcion vale: " << solucion;   			//No necesitamos imprimir los datos del segundo bucle, solo necesitamos el ultimo valor
	}
	
	
	cout<<"\nSoluciones de la funcion factorial";
	
	cout<<"\nPara x= 0 su factorial vale: 1";												//Como el valor de x=0 vale 1, he escrito directamente su valor
	
	for(factorial=1;factorial<=10;factorial++){											//La funcion factorial no tiene imagen en numeros negativos y como el cero ya lo he imprimido pues empiezo desde el 1
		solucion=1;
		
		for(n=factorial-1; n>=0; n--){														//Bucle que multiplica un numero por sus anteriores hasta llegar a cero
			solucion=solucion*(factorial-n);
	
		}
	cout<<"\nPara x= " << factorial << " su factorial vale: " <<solucion;
	}
	
	system ("pause");
	
}
