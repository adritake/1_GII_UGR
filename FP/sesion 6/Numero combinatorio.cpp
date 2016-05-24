/* Programa para calcular el combinatorio de dos numeros
Hecho por Adrián de la Torre Rodriguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;

int main () {
	
	int m,n,factorial_m,factorial_n,factorial_resta,resta,i;
	double combinatorio;
	
	
	cout<< "Introduzca el primer numero del combinatorio: ";
	cin>> n;
	cout<<"\nIntroduzca el segundo numero del combinatorio: ";
	cin>> m;
	
	factorial_n=1;	           //valor inicial para todos los factoriales para que no afecte a la primera operacion
	factorial_m=1;
	factorial_resta=1;
		
	for(i=n-1; i>=0; i--){    //Factoriales para cada uno de los elementos (n,m n-m)
		factorial_n=factorial_n*(n-i);
	
	}
	
	for(i=m-1; i>=0; i--){
		factorial_m=factorial_m*(m-i);
	
	}

	resta=n-m;
	
	for(i=resta-1; i>=0; i--){
		factorial_resta=factorial_resta*(resta-i);
	
	}
	
	combinatorio= factorial_n / (factorial_m * factorial_resta);    //Operacion del combinatorio con los factorials obtenidos
	
	cout<<"\nEl combinatorio de " <<n<<" sobre " <<m<< " es: "<< combinatorio;
	

	system("pause");
}
	
