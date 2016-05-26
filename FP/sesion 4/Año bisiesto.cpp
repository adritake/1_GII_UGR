/* Programa para saber si un año es bisiesto
*/

#include<iostream>
#include<cmath>

using namespace std;

int main (){
	
	int anio;
	
	cout<<"Introduce el anio: ";
	cin>> anio;
	
	if( (anio%4==0 && anio%100!=0) || (anio%400==0) )
		cout<<"El anio es bisiesto";
	else
	 cout<<"El anio no es bisiesto";
	 
	cout<<"\n\n";
	
	system("pause");
	
}
