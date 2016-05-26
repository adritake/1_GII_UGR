#include<iostream>

using namespace std;
class VectorDin{
private:

	int *v;
	int tamanio;
	int util;
	
public:
	
	VectorDin(int tam){

		if(tamanio>0){
			v=new int[50];
			v[]={0}
			tamanio=50;
			util=tam;			
		}
	}

	VectorDin(){
	
		v=new int[50];
		tamanio=50;
		util=0;
	}

	VectorDin(VectorDin copiar){

		v=new int[copiar.Tamanio()];
		tamanio=copiar.Tamanio();
		util=copiar.Util();

		for(int i=0; i<util; i++){
			v[i]=copiar.Elemento(i);
		}
	}

	~VectorDin(){
		delete v[];
		tamanio=0;
		util=0;
	}
		

	int Tamanio(){
		return tamanio;
	}

	int Util(){
		return util;
	}

	void Aniade(int n){
		
		if(util<tamanio){
			v[util]=n;
			util++;
		}
		else{
		
			int *aux=new int[tamanio+20];
			
			for(int i=0;i<tamanio;i++){
				aux[i]=v[i];
			}

			delete v[];
	
			v=aux;
	
			v[util]=n;
			util++;
			tamanio=tamanio+20;
		}
	}

	int Elemento(int indice){
		if(indice>=0 && indice<util){
			return v[indice];
		}
	}

	int Modifica(int indice, int n){

		if(indice>=0 && indice<util){
			v[indice]=n;
		}
	}
	
	void Inicializa(int n){
		if(n>=0 && n<=tamanio){
			VectorDin(n);
		}
	}
	
	void Escribe(){
		for(int i=0; i<util; i++){
			cout<<v[i]<<" "
		}
	}

		

};


class Matriz{
private:

	VectorDin *m;
	int util_fil;	
	
public:

	Matriz(int fil, VectorDin col){

		m=new VectorDin[fil];
		
		for(int i=0; i<col.Util(); i++){
			
			m[i].Inicializa(col.Elemento(i));

		}

		util_fil=fil;
		
		
	}

	Matriz(){

		m=0;
		util_fil=0;
	}

	void AniadeFila(VectorDin fila,int util){
		
		VectorDin *aux;

		aux=new VectorDin[util_fil+1];
		for(int i=0;i<util_fil;i++){
			aux[i]=m[i];
		}
		
		aux[util_fil].Inicializa(util);
		delete m[];
		m=aux;
		util_fil++;
	}

	void AniadeFinal(int fil, int n){

		if(fil>=0 && fil<util_fil){
			m[fil].Aniade(n);
		}
	}

	void Escribe(){

		for(int i=0; i< util_fil; i++){
		
			m[i].Escribe;
			cout<<"\n";
		}
	}
};


















