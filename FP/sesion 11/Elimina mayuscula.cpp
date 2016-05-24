/* Programa para eliminar todas las mayusculas de una serie de caracteres
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;

class SecuenciaCaracteres{
private:
	static const int TAMANIO = 50;
	char vector_privado[TAMANIO];
	int total_utilizados;
	int util;
	
public:
	SecuenciaCaracteres()
		:total_utilizados(0){
	}
	int TotalUtilizados(){
		return total_utilizados;
	}
	int Capacidad(){
		return TAMANIO;
	}
	void Aniade(char nuevo){
		if (total_utilizados < TAMANIO && nuevo !='#'){
		vector_privado[total_utilizados] = nuevo;
		total_utilizados++;
	}
	}
	char Elemento(int indice){
		return vector_privado[indice];
	}

	bool EsPalindromo(){
	
	bool es_palindromo;
	int i,j;
	i=0;
	j=total_utilizados-1;
	es_palindromo=true;
	
	while(i <= j && es_palindromo==true){
		
		if(vector_privado[i] == vector_privado[j])
			es_palindromo=true;
		else
			es_palindromo=false;
		
		i++;
		j--;
	}
	
	return es_palindromo;
	}


	void Modifica(char caracter_nuevo,int posicion){
		
		if(posicion<total_utilizados)
			vector_privado[posicion]=caracter_nuevo;
		}
	
	void IntercambiaComponentes(int primer_componente,int segundo_componente){
		char componente_auxiliar;
		
		componente_auxiliar = vector_privado[primer_componente];
		vector_privado[primer_componente] = vector_privado[segundo_componente];
		vector_privado[segundo_componente] = componente_auxiliar;
	}
	
	
	void Invierte(){
		int i,j;
		i=0;
		j=total_utilizados-1;
		
		while(i<=j){
			IntercambiaComponentes(i,j);
			i++;
			j--;
		}
	}
	
	void Elimina(int posicion){
		
		if(posicion<=total_utilizados){
			
			int i;
			
			for(i=posicion; i <=total_utilizados; i++){
				vector_privado[i]=vector_privado[i+1];
			}
			total_utilizados--;
		
		}
	}
			
	void EliminaMayuscula(){
		int i,j,k;
		j=0;
		k=total_utilizados;
		
		for(i=0; i<k; i++){	
			if(vector_privado[j] >='A' && vector_privado[j]<='Z'){
				Elimina(j);
			}
			else	
				j++;
			}
		}
	
};



int main () {
	
	SecuenciaCaracteres Secuencia;
	char caracter;
	int i;
	
	while(caracter != '#'){
		cout<<"\nIntroduce un caracter: ";
		cin>> caracter;
		Secuencia.Aniade(caracter);
	}
	
	
	for(i=0;i<Secuencia.TotalUtilizados();i++){
		cout<<Secuencia.Elemento(i);
	}
	
	cout<<"\nEsa secuencia de caracteres sin mayusculas es: ";
	Secuencia.EliminaMayuscula();
	
	for(i=0;i<Secuencia.TotalUtilizados();i++){
		cout<<Secuencia.Elemento(i);
	}
	
	system("pause");
	
}

	
