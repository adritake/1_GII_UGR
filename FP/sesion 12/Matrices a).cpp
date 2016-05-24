/* Ejercicio 13 a)
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>

using namespace std;

int main () {
	
	int util_filas,util_columnas;
	int i,j,k,l;
	
	cout<<"\nIntroduce el numero de filas: ";
	cin>>util_filas;
	cout<<"\nIntroduce el numero de columnas: ";
	cin>>util_columnas;
	int matriz[util_filas][util_columnas];
	
	for(i=0;i<util_filas;i++){
		cout<<"fila "<<i+1<<"\n";
		for(j=0;j<util_columnas;j++){
			cin>>matriz[i][j];
		}
	}
	int traspuesta[util_columnas][util_filas];
	
	cout<<"\nSu matriz es: \n\n";
	for(i=0;i<util_filas;i++){
	cout<<"\n";
		for(j=0;j<util_columnas;j++){
			cout<<matriz[i][j]<<"  ";
		}
	}
		
	for(i=0;i<util_filas;i++){
		
		for(j=0;j<util_columnas;j++){
			traspuesta[i][j]=matriz[j][i];
		}
	}
	
	cout<<"\nSu traspuesta es: \n\n";
	for(i=0;i<util_columnas;i++){
	cout<<"\n";
		for(j=0;j<util_filas;j++){
			cout<<traspuesta[i][j]<<"  ";
		}
	}
	
}
	
	
	
