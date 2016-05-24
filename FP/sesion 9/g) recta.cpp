/* Ejercicio 7 g)
Hecho por Adrián de la Torre Rodriguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;


class Recta{
	private:
		double A,B,C;
		
	bool CoeficientesCorrectos(double coeff_A,double coeff_B){
		
		bool correcto;
		
		if(coeff_A!=0 || coeff_B!=0)
			correcto=true;
		else
			correcto=false;
	
		return correcto;
	}
	
	
	
	public:
		
		Recta(){
			A=1;
			B=1;
			C=1;
		}
		
		
		
		void setCoeficientes(double coeff_A,double coeff_B,double coeff_C){
			
			if(	CoeficientesCorrectos(coeff_A,coeff_B) ){
			
				A=coeff_A;
				B=coeff_B;
				C=coeff_C;
			}
				
		
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
	
	una_recta.setCoeficientes(coeff_A,coeff_B,coeff_C);

	
	
	
	
	cout<<"\nLa pendiente de la recta es: "<< una_recta.Pendiente();
	cout<<"\nEl valor de 'y' en x="<<variable_x<<" es ";
	cout<< una_recta.Ordenada(variable_x);
	cout<<"\nEl valor de 'x' en y="<<variable_y<<" es ";
	cout<< una_recta.Abscisa(variable_y);
}
