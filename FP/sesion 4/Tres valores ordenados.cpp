/* Programa para averiguar si tres numeros enteros estan ordenados
*/

#include<iostream>
#include<cmath>

using namespace std;

int main () {
	int numero1;
	int numero2;
	int numero3;
	const string MENSAJE_NUMERO = "\nIntroduce el numero: ";
	const string ORDENADOS = "\nLos numeros estan ordenados";
	const string DESORDENADOS = "\nLos numeros estan desordenados" ;
	
	cout<< MENSAJE_NUMERO;
	cin>> numero1;
	cout<<MENSAJE_NUMERO;
	cin>> numero2;
	cout<<MENSAJE_NUMERO;
	cin>>numero3;
	
	
	if(numero1<=numero2)
		if(numero2<=numero3)
			cout<< ORDENADOS;
		else
			cout<< DESORDENADOS;
	else
		if(numero1>=numero2)
			if(numero2>=3)
				cout<< ORDENADOS;
			else
				cout<< DESORDENADOS;
		else
			cout<< DESORDENADOS;
	
	
	cout<<"\n\n";
	
	
	system ("pause");
}
	
