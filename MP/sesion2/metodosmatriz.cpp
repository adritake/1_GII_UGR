#include<iostream>

using namespace std;

const int MAX_F = 1000, MAX_C = 1000;

void Lee_linea( char c[], int tamano ){
	
	do{
		cin.getline( c[],tamano);
	}
	while(c != /0);
}
	

int Buscar_Mio( const char cad[], const char Matriz_char[][MAX_C], int Util_F ){

	bool esta=false;
	int letras_iguales,tamanio=0,i,j,fila;

	
	while(cad[tamanio] != '\0'){
		tamanio++;
	}
	

	for( i=0; i<Util_F && !esta; i++){
		
		letras_iguales=0;		
		
		for( j=0; Matriz_char[i][j] != '\0'; j++){

			if(cad[j]==Matriz_char[i][j])
				letras_iguales++;
		}
		
		if(letras_iguales==tamanio)
			esta=true;
			fila=i;
	}

	if(esta)
		return fila;
	else
		return -1;

}
				
int Buscar_Profe( const char cad[], const char Matriz_char[][MAX_C], int Util_F ){

	bool iguales, encontrado = false;
	int fila,i;

	fila=0;

	while( fila < Util_F && !encontrado ){

		i=0;
		iguales=true;
		
		while(cad[i] != '\0' && Matriz_char[fila][i] != '\0' && iguales){
			
			if(cad[i] != Matriz_char[fila][i])
				iguales=false;
			else
				i++;
		}
		if( cad[i] == '\0' && Matriz_char[fila][i] =='\0' )
			encontrado=true;
		else
			fila++;

	}
	
	if(encontrado)
		return fila;
	else
		return -1;
}

				


void AsignarFila( const char cad[], int fila, char Matriz_char[][MAX_C] ){
	
	int i;

		

	for(i=0; cad[i]!= '/0'; i++){
		Matriz_char[fila][i] = cad[i];
	}
	
	Matriz_char[fila][i]='\0';
}

	

void EliminarFila( int fila, char Matriz_char[][MAX_C], int &Util_F ){

	
	for(int i=fila+1; i<Util_F; i++)
		AsignarFila(Matriz_char[i],i-1,Matriz_char);

	Util_F--;
}

		

void LeerMatriz( char Matriz_char[][MAX_C], int &Util_F){
	
	cout<< "Introducir numero de filas:";
	cin>>Util_F;

	for(int fila=0; fila < Util_F; fila++){
		cout<<"\nIntroducir cadena "<<fila<< ":";
		Lee_linea( Matriz_char[fila], MAX_C );
	}

	

void MostrarMatriz( char Matriz_char[][MAX_C], int &Util_F){

	for(int fila=0; fila < Util_F; fila++)
		cout<< Matriz_char[fila]<<endl;

int main(){

	

