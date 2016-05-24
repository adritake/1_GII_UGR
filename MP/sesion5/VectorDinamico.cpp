#include<iostream>



using namespace std;

class VectorDinamico{
private:
	
	int *mi_vector;
	int tamanio;
	void Inicializar(int n){
		for(int i=0; i<tamanio; i++){
			mi_vector[i]=n;
		}
	}	
	
public:

	VectorDinamico(){
		mi_vector=0;
		tamanio=0;
	}
	
	VectorDinamico(int tam){
		mi_vector=new int[tam];
		tamanio=tam;
		Inicializar(0);

			
	}

	VectorDinamico(int tam, int valor){
	
		mi_vector=new int[tam];
		tamanio=tam;
		Inicializar(valor);
	}
	
	~VectorDinamico(){

		delete mi_vector;
		mi_vector=0;					
		tamanio=0;
	}
	
	int Tamanio(){

		return tamanio;
	}

	int Elemento( int pos){

		if(mi_vector != 0)
			return mi_vector[pos];
		else
			return 0;
	}

	void ModificaElemento(int pos, int elemento){

		if(pos>=0 && pos < tamanio && mi_vector != 0)
			mi_vector[pos]=elemento;
	}

	void Aumenta(int n){

		int  *aux;
		
		if(n>=0){
			
			aux=new int [tamanio + n];

			for(int i=0; i<tamanio; i++){
				aux[i]=mi_vector[i];
			}
			
			for(int i=tamanio; i<tamanio+n; i++)
				aux[i]=0;

			delete mi_vector;
			
			tamanio=tamanio+n;
			mi_vector=aux;
		}
	}

};	

int main(){

	VectorDinamico mi_vector(8,3);
	
	for(int i=0; i<mi_vector.Tamanio(); i++)
		cout<<mi_vector.Elemento(i)<<" ";

	mi_vector.Aumenta(2);

	cout<<"\n";
	for(int i=0; i<mi_vector.Tamanio(); i++)
		cout<<mi_vector.Elemento(i)<<" ";
}
	
			
		

		

