/* Ejercicio 13 d)
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>

using namespace std;

int main () {
	int filas,columnas;
	int matriz_A[50][50];
	int matriz_B[50][50];
	int matriz_producto[50][50];
	int producto,i,j,k,l;
	
	cout<<"Introduce el numero de filas: ";
	cin>>filas;
	cout<<"Introduce el numero de columnas: ";
	cin>>columnas;

	cout<<"\nIntroduce la primera matriz: ";
	for(i=0;i<filas;i++){
		cout<<"fila "<<i+1<<"\n";
		for(j=0;j<columnas;j++){
			cin>>matriz_A[i][j];
		}
	}
	
	for(i=0;i<filas;i++){
	cout<<"\n";
		for(j=0;j<columnas;j++){
			cout<<matriz_A[i][j]<<"  ";
		}
	}
	
	cout<<"\nIntroduce la segunda matriz: ";
	for(i=0;i<filas;i++){
		cout<<"fila "<<i+1<<"\n";
		for(j=0;j<columnas;j++){
			cin>>matriz_B[i][j];
		}
	}
	for(i=0;i<filas;i++){
	cout<<"\n";
		for(j=0;j<columnas;j++){
			cout<<matriz_B[i][j]<<"  ";
		}
	}
	
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			
			for(k=0;k<filas;k++){
				producto=0;
				for(l=0;l<columnas;l++){
						producto=producto+matriz_A[i][l]*matriz_B[k][j];
						k++;
				}
			}
			matriz_producto[i][j]=producto;
		
		
		}
	}
			

	
	for(i=0;i<columnas;i++){
		cout<<"\n";
		for(j=0;j<filas;j++){
			cout<<matriz_producto[i][j]<<"  ";
		}
	}
}
