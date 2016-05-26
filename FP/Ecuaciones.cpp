/* Programa para resolver una serie de ecuaciones dadas las variable x,y,h
*/

#include<iostream>
#include<cmath>

using namespace std;

int main () {
	double x;
	double y;
	double h;
	double resultado_a;
	double resultado_b;
	double resultado_c;
	
	cout<< "Introduzca el valor de x: ";
	cin>> x;
	cout<< "Introduzca el valor de y: ";
	cin>> y;
	cout<< "Introduzca el valor de h: ";
	cin>> h;
	
	resultado_a = ( 1 + x*x / y ) / ( x*x*x / (1 + y) );
	resultado_b = ( 1 + (1/3) * sin(h) - (1/7) * cos(h) ) / (2/h); 
	resultado_c = sqrt( 1 + pow(exp(x)/ (x*x),2) );
	
	cout<< "\n\nEl resultado de la ecuacion a) es: " << resultado_a;
	cout<< "\nEl resultado de la ecuacion b) es: " << resultado_b;
	cout<< "\nEl resultado de la ecuacion c) es: " << resultado_c << "\n\n";
	
	system("pause");
	
}
	
