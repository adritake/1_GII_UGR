/* Programa para calcular el salario de una persona segun su edad y la cantidad de dinero que cobra
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main () {
	
	int edad;
	double salario_inicial;
	double salario_final1, salario_final2, salario_final3;
	const string MENSAJE_SALARIO= "Introduce el salario: ";
	
	cout<< MENSAJE_SALARIO;
	cin>> salario_inicial;
	cout<< "\nIntroduce la edad: ";
	cin>> edad;
	
	salario_final1 = salario_inicial * 1.05;
	salario_final2 = salario_inicial * 1.04;
	salario_final3 = salario_inicial * 1.07; 
	
	
	if (salario_inicial < 300 && edad > 65)
		cout<<"\n\nEl sueldo final es: " << salario_final1;
	else
		cout<<"\n\nNo es aplicable la subida, su sueldo es: " << salario_inicial;
		
	
	if(edad>65 || edad<35) {
		if (salario_inicial < 300){
			cout<< "\n\nSu salario es: " << salario_final3;
	   }
		else{
		   cout<< "\n\nSu salario es: " << salario_final2;
	   }
   }
	else{
		cout<<"\n\nNo es aplicable la subida, su sueldo es: " << salario_inicial;
	}
	
	cout<<"\n\n";
	
	system("pause");
	
}
		
