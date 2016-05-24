#include<iostream>

using namespace std;

class Matriz{
private:

	int filas;
	int columnas;
	int **matriz;
	void Inicializar(int n){

		for(int i=0; i<filas; i++){
		
			for(int j=0; j<columnas; j++){

				matriz[i][j]=n;
			}
		}
	}

public:

	Matriz(){

		matriz=0;
		filas=0;
		columnas=0;
	}
	
	Matriz(int fil, int col, int valor){
		
		matriz=new int*[fil];

		for(int i=0; i<fil; i++){

			matriz[i]=new int[col];

			for(int j=0; j<col; j++)
				matriz[i][j]=valor;
		}

		filas=fil;
		columnas=col;
	}


	Matriz(int fil, int col){

		Matriz(fil,col,0);
	}
	
	~Matriz(){

		for(int i=0; i<filas; i++)
			delete [] matriz[i];

		delete  [] matriz;
		
		matriz=0;
	}

	int Elemento(int fil, int col){

		if(fil>=0 && fil<filas && col>=0 && col<columnas)
			return matriz[fil][col];
	}

	void Modifica(int fil, int col,int valor){
 		
		if(fil>=0 && fil<filas && col>=0 && col<columnas)
			matriz[fil][col]=valor;
	}

	int Filas(){
		return filas;
	}

	int Columnas(){
		return columnas;
	}

};

int main(){

	Matriz mi_matriz(3,3,6);
/*
	for(int i=0; i< mi_matriz.Filas(); i++){

		for(int j=0; j<mi_matriz.Columnas(); i++){

			cout<<mi_matriz.Elemento(i,j);
		}

		cout<<"\n";
	}

	cout<<"\n";

	mi_matriz.Modifica(2,2,5);

	
	for(int i=0; i< mi_matriz.Filas(); i++){

		for(int j=0; j<mi_matriz.Columnas(); i++){

			cout<<mi_matriz.Elemento(i,j);
		}

		cout<<"\n";
	}
*/
/*	
	cout<<mi_matriz.Filas();
	cout<<mi_matriz.Columnas();
*/

	cout<<mi_matriz.Elemento(1,1);
	cout<<mi_matriz.Elemento(1,2);

}	
	
