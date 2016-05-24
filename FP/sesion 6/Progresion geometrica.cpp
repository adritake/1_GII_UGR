/* Programa para calcular los valores de una progresion geometrica hasta un tope k
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	long int a1,ai,k,r,i;
	
	cout<<"Introduce el primer elemento de la progresion: ";
	cin>>ai;
	cout<<"Introduce el valor r de la progresion: ";
	cin>>r;
	cout<<"Introduce el ultimo elemento de la progresion: ";
	cin>>k;
	
	a1=ai;                                                           //Esta igualdad es para volver a darle el valor inicial a ai
	
	/* Primera forma */
	cout<<"\nDe la primera forma obtenemos: ";
	
	for(i=1; i<=k; i++){
		
		ai =  ai * pow( r*1.0, i-1 ) ;
		cout<<"\n\n" <<ai;
	}
	
	/* Segunda forma */	
	cout<<"\nDe la segunda forma obtenemos: ";
	
	ai=a1;                                                           //Se le da el valor inicial a ai
	i=1;
	for(i=1; i<=k; i++){
		
		ai=ai* r;
		cout<<"\n\n" <<ai;
	}
	
	cout<<"\n\n";
	
	system("pause");
}
