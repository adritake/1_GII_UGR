/*Programa para calcular el capital obtenido en un banco segun el tipo de interes un numero de años
Hecho por Adrián de la Torre Rodríguez 1ºA grupo Aº
*/

#include <iostream>

using namespace std;

int main() {
	
	double capital,capital_inicial;
	int interes,anios,i,j;
	
	cout<<"Introduce el capital a introducir en el banco: ";									//Introduccion de las variables que necesitamos
	cin>>capital_inicial;
	cout<<"\nIntroduce el interes: ";
	cin>>interes;
	cout<<"\nIntroduce el numero de anios: ";
	cin>>anios;
	
	for(i=interes; i>0; i--){																			//Bucle que se repite para cada porcentaje de interes
		
		cout<<"\nCalculos realizados al " << i<< " % ";
		capital=capital_inicial;
		
		for(j=1; j<=anios; j++){																		//Bucle que realiza los calculos en un porcentaje para cada año
			
			capital = capital + ( capital * (i * 1.0/100) );
			cout<<"\nDinero obtenido en el anio numero "<< j << " : " << capital;
		}
	}
	
	system("pause");
	
}
