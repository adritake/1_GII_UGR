/* Ejercicio 7 b)
Hecho por Adrián de la Torre Rodriguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;


class Recta{
	public:
		double A,B,C,x,y;
	
	double Pendiente(double A,double B){
		double pendiente;
		pendiente = -A/(B*1.0);
		return pendiente;
	}
	
	double Ordenada(double A,double B,double C,double x){
		double ordenada;
		ordenada=(-C - x*A)/(1.0*B);
		return ordenada;
	}
	
	double Abscisa(double A,double B,double C, double y){
		double abscisa;
		abscisa=(-C - y*B)/(1.0*A);
		return abscisa;
	}
	
};

int main () {
	
	Recta una_recta;
	cout<<"Coeficiente A: ";
	cin>>una_recta.A;
	cout<<"Coeficiente B: ";
	cin>>una_recta.B;
	cout<<"Coeficiente C: ";
	cin>>una_recta.C;
	cout<<"Valor de x: ";
	cin>>una_recta.x;
	cout<<"Valor de y: ";
	cin>>una_recta.y;
	
	cout<<"\nLa pendiente de la recta es: "<< una_recta.Pendiente(una_recta.A,una_recta.B);
	cout<<"\nEl valor de 'y' en x="<<una_recta.x<<" es ";
	cout<< una_recta.Ordenada(una_recta.A,una_recta.B,una_recta.C,una_recta.x);
	cout<<"\nEl valor de 'x' en y="<<una_recta.y<<" es ";
	cout<< una_recta.Abscisa(una_recta.A,una_recta.B,una_recta.C,una_recta.y);
}
