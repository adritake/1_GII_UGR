/* Ejercicio 7f)
Hecho por Adrián de la Torre Rodriguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;


class Recta{
	private:
		double A,B,C;
		
	public:
		
		Recta(){
			A=1;
			B=1;
			C=1;
		}
		
		
		double Pendiente(){
			double pendiente;
			pendiente = -A/(B*1.0);
			return pendiente;
		}
		
		double Ordenada(double x){
			double ordenada;
			ordenada=(-C - x*A)/(1.0*B);
			return ordenada;
		}
		
		double Abscisa( double y){
			double abscisa;
			abscisa=(-C - y*B)/(1.0*A);
			return abscisa;
		}
	
};

int main () {
	
	Recta una_recta;
	double variable_x,variable_y;
	
	
	cout<<"Valor de x: ";
	cin>>variable_x;
	cout<<"Valor de y: ";
	cin>>variable_y;
	
	
	
	
	cout<<"\nLa pendiente de la recta es: "<< una_recta.Pendiente();
	cout<<"\nEl valor de 'y' en x="<<variable_x<<" es ";
	cout<< una_recta.Ordenada(variable_x);
	cout<<"\nEl valor de 'x' en y="<<variable_y<<" es ";
	cout<< una_recta.Abscisa(variable_y);
}
