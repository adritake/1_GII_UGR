/* Ejercicio 7 e)
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
		
		
		void setA(double coeff_A){
			A=coeff_A;
		}
		void setB(double coeff_B){
			B=coeff_B;
		}	
		void setC(double coeff_C){
			C=coeff_C;
		}	
		void setCoeficientes(double coeff_A,double coeff_B,double coeff_C){
			A=coeff_A;
			B=coeff_B;
			C=coeff_C;
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
	double coeff_A,coeff_B,coeff_C,variable_x,variable_y;
	
	cout<<"Coeficiente A: ";
	cin>>coeff_A;
	cout<<"Coeficiente B: ";
	cin>>coeff_B;
	cout<<"Coeficiente C: ";
	cin>>coeff_C;
	cout<<"Valor de x: ";
	cin>>variable_x;
	cout<<"Valor de y: ";
	cin>>variable_y;
	
	una_recta.setA(coeff_A);
	una_recta.setB(coeff_B);
	una_recta.setC(coeff_C);
	
	
	
	
	cout<<"\nLa pendiente de la recta es: "<< una_recta.Pendiente();
	cout<<"\nEl valor de 'y' en x="<<variable_x<<" es ";
	cout<< una_recta.Ordenada(variable_x);
	cout<<"\nEl valor de 'x' en y="<<variable_y<<" es ";
	cout<< una_recta.Abscisa(variable_y);
}
