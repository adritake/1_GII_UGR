#include<iostream>

using namespace std;

class Vector_Din{
private:

	int *vector;
	int tamanio;
	
public:

	Vector_Din(){

		vector=0;
		tamanio=0;
	}

	Vector_Din(int tam){
		
		vector=new int[tam-1];
		tamanio=tam;
	}
/*
	Vector_Din(const  Vector_Din nuevo){

		int tam=nuevo.Tamanio();		
		vector=new int[tam-1];		

		for(int i=0; i< tam; i++){
			vector[i]=nuevo.Elemento(i);
		}
	}
*/
	int Elemento(int indice){

		if(indice>=0 && indice < tamanio)
			return vector[indice];
	}

	void Modifica(int indice, int dato){

		if(indice>=0 && indice < tamanio)
			vector[indice]=dato;
	}
	
	int Tamanio(){

		return tamanio;
	}

	void EliminaTodos(){

		delete[] vector;
		tamanio=0;
	}

	void operator=( const Vector_Din &vec){

		delete[] this->vector;
		
		this->tamanio=vec.tamanio;

		this->vector=new int[vec.tamanio];
		
		for(int i=0; i<vec.tamanio; i++){
			this->vector[i]=vec.vector[i];
		}
	}
	

	friend istream &operator>>(istream &is, Vector_Din &v);
	friend ostream &operator<<(ostream &os, Vector_Din &v);
	
};
	ostream &operator<<(ostream &os, Vector_Din &v){
	      for (int i=0; i<v.Tamanio(); i++)
		   os << v.Elemento(i) << " ";

	      return os;
	}
	
	

	istream &operator>>(istream &is, Vector_Din &v){
	      
	     int x;

	      

	      
	      for (int i=0; i<v.Tamanio(); i++)
	      {
		   is >> x;
		   v.Modifica(i,x);
	      }

	      return is;
	}
int main(){

	Vector_Din vector1(5),vector2(5);

	cout<<"Introduce vector 1: ";
	cin>>vector1;
	cout<<"Introduce vector 2: ";
	cin>>vector2;
	cout<<"El vector 1 es: ";
	cout<<vector1;
	cout<<"El vector 2 es: ";
	cout<<vector2;

	cout<<"\n\n";
	cout<<"Asignando..."<<endl;
	
	vector1=vector2;

	cout<<"El vector 1 ahora vale: "<<vector1;
}
			

		
