/* Programa para calcular los divisores de un numero y el capital de un banco usando for
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>
#include <cmath>

using namespace std;


/* ejercicio 12 */
int main () {
	
	int tope,divisor;
	
	do{                                                        //Bucle para obligar al usuario a introducir un entero positivo
		
		cout<< "\nIntroduzca un numero entero positivo: ";
		cin>> tope;
	
	}while (tope<1);
	
	cout<<"\nSus divisores son: ";
	
	
	
	for(divisor=1;  divisor <= tope; divisor++){
		
		if( tope%divisor==00 )                                   //Si encuentra un divisor lo imprime y aumenta uno la variable divisor
			cout<<"\n\n"<< divisor;
		
	}
	
	/* ejercicio 15 */
	
	double capital, interes;
	int anios,contador;                                              //la variable contador sirve para ver cuantas veces se repite el bucle y ademas sirve para ver cuanto aumentan los años
	
	cout<< "\nIntroduce el capital: ";                                 //introducimos los datos requeridos
	cin>> capital;
	cout<< "\nIntroduce el interes: ";
	cin>> interes;
	cout<< "\nIntroduce el numero de anios: ";
	cin>> anios;
	
	
	
	for(contador=1; contador<=anios; contador++){                 // Bucle que imprime en cada año el capital obtenido mientras el contador sea menor o igual que los años
		
		capital=capital+capital*(interes/100);
		cout<<"\nTotal en el anio " <<contador << " : " <<capital;
	
	}
	
	cout<<"\n\n";
		
	system("pause");
	
}
		
