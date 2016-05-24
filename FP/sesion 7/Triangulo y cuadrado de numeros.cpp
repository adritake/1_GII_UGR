/* Programa para escribir numeros de maneras determinadas
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;

int main () {
	int i,j,k,n;
	int valor_inicial, numero_filas;
	
	/*Ejercicio 30 */
	
	for (i=1; i<=6; i++){								//bucle para cada fila
	
	cout<<"\n";
		
		for(j=i; j<=6; j++){								//bucle para cada elemento de una fila, cada vez que se repite empieza por el numero correspondiente a la fila que esta
			cout<<j;
		}
	}
	
	cout<<"\n\n";
	
	/* Ejercicio 31 */
	
	k=1;														//valores inicial y final de la primera fila
	n=6;
	
	for (i=1; i<=6; i++){								//bucle para cada fila
	
	cout<<"\n";
		
		for(j=k; j<=n; j++){								//bucle para cada elemento de la fila
			cout<<j;
		
		}
	
	k++;														//En cada repeticion de fila el valor inicial y el final aumentan uno
	n++;
	
	}
	
	cout<<"\n\n";
	
	/* Ejercicio 32 a) */
	
	cout<<"\nIntroduce el valor inicial: ";		//Peticion de las variables final e inicial de las filas
	cin>>valor_inicial;
	cout<<"\nIntroduce el numero de filas: ";
	cin>>numero_filas;
	
	for (i=valor_inicial; i<=numero_filas; i++){	//Los bucles son identicos a los otros ejercicios solo que en lugar de poner numeros ponemos el nombre de la variable que hemos introducido
	
	cout<<"\n";
		
		for(j=i; j<=numero_filas; j++){
			cout<<j;
		}
	}
	
	cout<<"\n\n";
	
	
	/* Ejercicio 32 b) */
	
	cout<<"\nIntroduce el valor inicial: ";
	cin>>valor_inicial;
	cout<<"\nIntroduce el numero de filas: ";
	cin>>numero_filas;
	
	
	k=valor_inicial;
	n=numero_filas;
	
	for (i=1; i<=6; i++){
	
	cout<<"\n";
		
		for(j=k; j<=n; j++){
			cout<<j;
		
		}
	
	k++;
	n++;
	
	}
	
	
	
	
	system("pause");
}
	
