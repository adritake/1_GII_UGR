#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

class Conjunto{
private:
	
	int *C;
	static const int TAM=50;
	int cardinal;
	
	void Setify(){
		
		int minimo,maximo;
		int *aux=0;
		int util_aux=0;
		
			
		if( cardinal > 0){
			
			aux=new int[TAM];
			minimo=C[0];
			maximo=C[0];
			
			for( int i=0; i< cardinal; i++ ){
				
				if( C[i] < minimo)
					minimo=C[i];
					
				if(C[i]>maximo)
					maximo=C[i];
					
			}
			
			aux[0]=minimo;
			util_aux++;
			
			for( int i=0; aux[util_aux-1] != maximo; i++ ){
				
				minimo=maximo;
				
				for(int j=0; j < cardinal; j++){
					
					if( C[j] > aux[i] && C[j] < minimo ){
						
						minimo=C[j];
					}
				}
				
				if( minimo != aux[util_aux-1] ){
					
					
					aux[util_aux]=minimo;
					util_aux++;
				
				}
				
			}
			
			delete C;
			C=aux;
			cardinal=util_aux;
			
		}
	}
	
	void PushBack(int dato){
		
		if( cardinal < TAM ){
		
			C[cardinal]=dato;
		    cardinal++;	
		}

	
	}
				
public:
	
	Conjunto(){
		
		C=new int[TAM];
		cardinal=0;
	
	}
	
	
	Conjunto( Conjunto& conj){
		
		cardinal=0;
		C=new int[TAM];
		
		if( conj.Cardinal() > 0 ){
			
			while( conj.Cardinal() != cardinal ){	
		
				C[cardinal]=conj.Elemento(cardinal);
				cardinal++;
				
			}
	
		}
		
	}
	
	
	~Conjunto(){
		
		cardinal=0;
		delete C;
	
	}
	
	void Clear(){
		
		cardinal=0;
		delete C;
		C=new int[TAM];

	}
	
	void Aniade( const int &dato ){
			
		PushBack(dato);
		Setify();
	
		
	}
	
	
	void Copiar( Conjunto conj ){
		
		delete [] C;
		C = new int[TAM];
		cardinal = 0;
		
		if( conj.Cardinal() > 0 ){
			
			for(int i = 0; i < conj.Cardinal(); i++){
				
				PushBack( conj.Elemento(i) );
					
			}
			
			cardinal = conj.Cardinal();
			
		}
		else if( conj.Cardinal() == 0 ){
			
			cardinal = conj.Cardinal();
		}
		
	}
			
	
	int Elemento( int indice ){
		
		if( indice >= 0 && indice < cardinal ){
			
			return C[indice];
		
		}
	}
	
	
	int Cardinal(){
	
		return cardinal;
		
	}
	
	void Lee(){
		
		int x;
		
		cardinal=0;
		
		cin>> x;
		
		while( x != -1 ){
			
			C[cardinal] = x;
			cardinal++;
			cin>> x;
			
			
		}
		
		Setify();
		
	}
	
	void Escribe(){
		
		for(int i=0; i < cardinal; i++)
		
			cout<< C[i] << " ";
			
	}
		
	
	void Interseccion( Conjunto conj1, Conjunto conj2){
	
		if(cardinal != 0){	
			delete C;
			C = new int[TAM];
			cardinal=0;
		}
		
		for( int i = 0; i < conj1.Cardinal(); i++ ){
			
			for( int j = 0; j < conj2.Cardinal(); j++ ){
				
				if( conj1.Elemento(i) == conj2.Elemento(j) ){
					
					PushBack( conj1.Elemento(i) );
		
				}
			}
		}
		
	}
	
	Conjunto& operator = ( Conjunto &conj){
		
		this->Copiar( conj );
		return *this;
		
	}
	
};


struct Celda_Conjunto {
	
	Conjunto conj;
	Celda_Conjunto *sig;

};


class Grupo_Conjuntos{
private:	
	
	Celda_Conjunto *inicio;
	int total;
	
public:

	Grupo_Conjuntos(){
		
		inicio=0;
		total=0;
		
	}
	
	~Grupo_Conjuntos(){
		
		Celda_Conjunto *indice = inicio;
		Celda_Conjunto *anterior = inicio;
		
		if(inicio != 0){
	
			while( indice->sig != 0 ){
				
				indice = indice->sig;
				delete anterior;
				anterior = anterior->sig;
			
			}
			
			delete indice;
		}
		
	}
	
	void Aniade( Conjunto nuevo_conj ){
		
		if(inicio == 0){
			
			inicio=new Celda_Conjunto;
			inicio->conj = nuevo_conj;
			inicio->sig = 0;
			total++;
		
		}
		else{
			
			Celda_Conjunto *indice = inicio;
			
			while(indice->sig != 0){
				
				indice = indice->sig;
			}
			
			indice->sig=new Celda_Conjunto;
			indice = indice->sig;
			indice->conj = nuevo_conj;
			indice->sig = 0;
			total++;
			
		}
	}
	
	void Elimina( int indice ){
		
		Celda_Conjunto *cel = inicio;
		Celda_Conjunto *cel_ant = inicio;
		Celda_Conjunto *aux;
		
		
		if ( indice == 0){
			
			aux = inicio;
			inicio = cel->sig;
			delete aux;
			total--;

		}
		
		else if ( indice == total-1 ){
			
			cel = cel->sig;
			
			while( cel->sig != 0){
				cel_ant = cel_ant->sig;
				cel = cel->sig;
			}
			
			delete cel;
			cel_ant->sig = 0;
			total--;
		}
		
		else if ( indice > 0 && indice < total-1 ){
		
			cel = cel->sig;
			cel = cel->sig;
			
			
			for( int i = 1; i < indice; i++ ){
				
				cel_ant = cel_ant->sig;
				cel = cel->sig;
				
			}
			
			aux = cel_ant->sig;
			delete aux;
			cel_ant->sig = cel;
		
			total--;
		}
		
	}
	
	int Total(){
		
		return total;
	}
	
	Conjunto *Devuelve( int posicion ){
		
		if(posicion >= 0 && posicion <= total ){
			
			Celda_Conjunto *indice = inicio;
			
			for( int i=0; i< posicion; i++ ){
				
				indice = indice->sig;
				
			}
			
			return &indice->conj;
		}
	}
	
	void Escribe(){
		
		for(int i=0; i < total; i++){
			Devuelve(i)->Escribe();
			cout<<"\n";
		}
	}
	
	
	
	
			
};


int main(int argc, char *argv[]){

	ifstream entrada;
	ofstream salida;
	
	Conjunto conj,max_inter;
	Grupo_Conjuntos grupo,solucion;
	
	char x;
	char cadena[5];
	int cont_cadena = 0;
	
	int max_car ;
	int indice=0;
	
	int valor = *argv[1] - '0';
	
	if( argc < 4 || argc > 4){
		cout<<"Uso: Constructivo <k> <fichero_entrada> <fichero_salida> ";
		exit(1);
	}
	
	else{
		
		entrada.open(argv[2]);
		salida.open(argv[3]);
		
		if( !entrada ){
		
			cout<<"No se pudo abrir el archivo de entrada.";
			exit(1);
		}
		else if ( !salida){
			
			cout<<"No se pudo crear el archivo de salida.";
			exit(1);
		}
		else{
		
			cout<<"Leyendo fichero...\n";
		
			while( entrada.get(x) ){
				
				if( x == '\t' ){
				
					cadena[cont_cadena] = x;
					conj.Aniade( atoi(cadena) );
					cont_cadena = 0;
				
			
				}
				else if( x == '\n' ){
				
					grupo.Aniade( conj );
					conj.Clear();
					cont_cadena = 0;
				}
				
				else{
				
					cadena[cont_cadena] = x;
					cont_cadena++;
				
				}
				
			
			}
			
		}
	}

cout<<"Buscando mayor interseccion...\n";	
	
// 1º paso	
	
	max_car = grupo.Devuelve( 0 )->Cardinal();
	
	for ( int i=0; i < grupo.Total(); i++ ){
		
		if( grupo.Devuelve(i)->Cardinal() > max_car ){
			
			max_car = grupo.Devuelve(i)->Cardinal();
			indice = i;
		}
	}


// 2º paso	
	
	solucion.Aniade	( *grupo.Devuelve( indice )	);
	max_inter = *solucion.Devuelve( 0 );
	grupo.Elimina( indice );
	
//3º paso

	while( solucion.Total() != valor ){
		
		max_car = 0;
		
		for ( int i=0; i < grupo.Total(); i++ ){
			
			conj.Interseccion( max_inter , *grupo.Devuelve(i) );
			
			if( conj.Cardinal() > max_car ){
				
				max_car = conj.Cardinal();
				indice = i;
			}
		}
		
		max_inter.Interseccion( max_inter , *grupo.Devuelve( indice ) );
		
		solucion.Aniade( *grupo.Devuelve( indice ) );
		
		grupo.Elimina( indice );
		
	}
	
//4º paso

	cout<<"Escribiendo fichero...\n\n";

	for(int i=0; i < solucion.Total(); i++){
		
		for(int j=0; j < solucion.Devuelve(i)->Cardinal(); j++){
			
			salida<< solucion.Devuelve(i)->Elemento(j) << " ";
		}
		
		salida<< "\n";
	}
			

	entrada.close();
	salida.close();

	cout<<"Proceso finalizado con exito.";

}
	
	
	
				
			
			
		
		
		
		
