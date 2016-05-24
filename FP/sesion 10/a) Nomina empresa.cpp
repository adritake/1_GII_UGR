/*Ejercicio 13 a)
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;

class Nomina{
private:
	double ingresos_totales;
public:
	
	void SetIngresos(double ingresos_introducidos){
		ingresos_totales=ingresos_introducidos;
	}
	
	double Fabricante(){
		double salario_fabricante;
		salario_fabricante=(ingresos_totales/5.0)*2;
		
		return salario_fabricante;
	}
	
	double Disenador(){
		double salario_disenador;
		salario_disenador= ingresos_totales/5.0;
		
		return salario_disenador;
	}
};

int main() {
	
	Nomina una_nomina;
	double ingresos;
	
	cout<<"Introduce los ingresos totales de la empresa: ";
	cin>> ingresos;
	
	una_nomina.SetIngresos(ingresos);
	
	cout<<"\nEl salario del fabricante es: ";
	cout<< una_nomina.Fabricante();
	
	cout<<"\nEl salario de cada disenador es: ";
	cout<< una_nomina.Disenador();
	
	system("pause");
	
}

