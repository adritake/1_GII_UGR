/*Programa para calcular el capital obtenido durante un numero de años en un banco
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double capital, interes;
	int anios,contador;
	
	cout<< "Introduce el capital: ";
	cin>> capital;
	cout<< "\nIntroduce el interes: ";
	cin>> interes;
	cout<< "\nIntroduce el numero de anios: ";
	cin>> anios;
	
	contador=0;
	
	do{
		capital = capital + capital*(interes/100);
		contador++ ;
		cout<<"\nTotal en el anio " << contador << " :" << capital;
	}while(contador<anios);
	
	cout<<"\n\n";
	
	system("pause");
	
}
