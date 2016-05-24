/*Clase para saber si esta resuelto un sudoku
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>

using namespace std;

class Sudoku{
private:
	
	static const int TAMANIO=9;
	int matriz_privada[TAMANIO][TAMANIO];
	

public:
	
	
	void Modifica(int fila, int columna, int numero){
		
		if(fila<TAMANIO && columna < TAMANIO)
			matriz_privada[fila][columna]=numero;
	}
	
	int Elemento(int fila,int columna){
		
		if(fila<TAMANIO && columna <TAMANIO)
			return matriz_privada[fila][columna];
	
	}
	
	bool FilaCorrecta(int indice_fila){
		
		bool correcto;
		bool vector_esta[TAMANIO]={0};
		int j;
		int numero_actual;
		
		correcto=true;
		
		
			
		
		for(j=0; j<TAMANIO && correcto; j++){
				
			numero_actual=matriz_privada[indice_fila][j];
				
			if(vector_esta[numero_actual - 1]==1)
				correcto=false;
			else
				vector_esta[numero_actual-1]=1;
		}
		
		return correcto;
	}
	
	bool ColumnaCorrecta(int indice_columna){
		
		bool correcto;
		bool vector_esta[TAMANIO]={0};
		int i;
		int numero_actual;
		
		correcto=true;
		
		
			
		
		for(i=0; i<TAMANIO && correcto; i++){
				
			numero_actual=matriz_privada[i][indice_columna];
				
			if(vector_esta[numero_actual - 1]==1)
				correcto=false;
			else
				vector_esta[numero_actual-1]=1;
		}
		
		return correcto;
	}
		
	bool RegionCorrecta(int indice_region){
		
		bool correcto;
		bool vector_esta[TAMANIO]={0};
		int i,j;
		int numero_actual;
		int posicion_inicio[2];
		
		correcto=true;
		
		if(indice_region==0){
			posicion_inicio[0]=0;
			posicion_inicio[1]=0;
		}
		else if (indice_region==1){
			posicion_inicio[0]=0;
			posicion_inicio[1]=3;
		}
		else if (indice_region==2){
			posicion_inicio[0]=0;
			posicion_inicio[1]=6;
		}
		else if (indice_region==3){
			posicion_inicio[0]=3;
			posicion_inicio[1]=0;
		}
		else if (indice_region==4){
			posicion_inicio[0]=3;
			posicion_inicio[1]=3;
		}
		else if (indice_region==5){
			posicion_inicio[0]=3;
			posicion_inicio[1]=6;
		}
		else if (indice_region==6){
			posicion_inicio[0]=6;
			posicion_inicio[1]=0;
		}
		else if (indice_region==7){
			posicion_inicio[0]=6;
			posicion_inicio[1]=3;
		}
		else if (indice_region==8){
			posicion_inicio[0]=6;
			posicion_inicio[1]=6;
		}
		
		for(i=posicion_inicio[0]; i<3 && correcto; i++){
			
				for(j=posicion_inicio[1]; j<3 && correcto; j++){
				
					numero_actual=matriz_privada[i][j];
					
					if(vector_esta[numero_actual - 1]==1)
						correcto=false;
					else
						vector_esta[numero_actual-1]=1;
				}
		}
		
		return correcto;
		
	}
		
	
			
	
	
	bool Resuelto(){
		
		bool resuelto;
		resuelto=true;
		int i,j;
		
		for(i=0; i<TAMANIO && resuelto; i++){
			
			resuelto=FilaCorrecta(i);
			
		}
		
		
		for(j=0; j<TAMANIO && resuelto; j++){
			
			resuelto=ColumnaCorrecta(j);
			
		}
		
		for(i=0; i<TAMANIO && resuelto; i++){
			
			resuelto=RegionCorrecta(i);
			
		}
		
		return resuelto;
	
	}
	
	
};

int main() {
	
	Sudoku mi_sudoku;
	int i,j;
	int numero;
	
	for(i=0; i<9; i++){
		
		for(j=0; j<9;j++){
			
			cin>>numero;
			mi_sudoku.Modifica(i,j,numero);
		}
	}
		
	for(i=0; i<9; i++){
		cout<<"\n";
			
		for(j=0; j<9;j++){
			
			cout<<mi_sudoku.Elemento(i,j)<<"  ";
		
		}
	}	
	
	
	if(mi_sudoku.Resuelto())
		cout<<"\nEl sudoku esta resuelto.";
	else
		cout<<"\nEl sudoku no esta resuelto.";
	
	
	system("pause");
	
}
		
					
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

