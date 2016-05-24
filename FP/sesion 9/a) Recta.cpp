/* Ejercicio 7 a)
Hecho por Adrián de la Torre Rodriguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;

class Recta {
public:
	double A,B,C;
	
	
	

};

int main () {
	Recta recta_1,recta_2;
	double pendiente;
	
	cout<<"Introduce el coeficiente A de la primera recta: ";
	cin>> recta_1.A;
	cout<<"Introduce el coeficiente B de la primera recta: ";
	cin>> recta_1.B;
	cout<<"Introduce el coeficiente C de la primera recta: ";
	cin>> recta_1.C;
	cout<<"\n\nIntroduce el coeficiente A de la segunda recta: ";
	cin>> recta_2.A;
	cout<<"Introduce el coeficiente B de la segunda recta: ";
	cin>> recta_2.B;
	cout<<"Introduce el coeficiente C de la segunda recta: ";
	cin>> recta_2.C;

	pendiente= -recta_1.A/(1.0*recta_1.B);
	cout<<"\n\nLa pendiente de la primera recta es: "<< pendiente;
	
   pendiente= -recta_2.A/(1.0*recta_2.B);
	cout<<"\nLa pendiente de la segunda recta es: "<< pendiente;
	
	system("pause");
	
}

