/* Programa que encuentra la mayor subsecuencia de numeros ordenador en una serie de numeros
Hecho por Adrián de la Torre Rodrígeuez 1ºA grupo A1
*/

#include <iostream>

using namespace std;

int main () {
	
	int numero_actual, numero_anterior, posicion_imprimir, posicion_actual, longitud;
	
	posicion_actual=1;
	longitud=0;
	numero_anterior=0;
	
	do{
		cout<<"\nIntroduzca un numero entero: ";
		cin>>numero_actual;
		
		
	
		
		
		if(numero_actual>=numero_anterior){
			longitud++;
			posicion_imprimir=posicion_actual;
		}
		else
			posicion_actual++;
			
		
	numero_anterior=numero_actual;
		
	} while ( numero_actual >= 0 || numero_actual <= 100);
	
	
	cout<<"\La subserie empieza en la posicion: " <<posicion_imprimir<< " y tiene una longitud de: " <<longitud;
	
	
	
	system("pause");
}
