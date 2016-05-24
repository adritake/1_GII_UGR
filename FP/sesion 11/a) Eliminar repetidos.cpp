/* ejercicio 7 a)
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>

using namespace std;


class SecuenciaCaracteres {
private:
	static const int TAMANIO = 50;
	char vector_privado[TAMANIO];
	int total_utilizados;
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
		if (total_utilizados < TAMANIO && nuevo!='#'){
			vector_privado[total_utilizados] = nuevo;
			total_utilizados++;
		}
	}
	char Elemento(int indice){
		return vector_privado[indice];
	}

	void EliminaRepetidos(){
		char sin_repetidos[TAMANIO];
		int total_no_repetidos=0;
		bool repetido;
		for(int i=0;i<total_utilizados;i++){
			repetido=false;
			for(int j=0; j<=total_no_repetidos;j++){
				
					if(sin_repetidos[j]!=vector_privado[i]&&!repetido){
						sin_repetidos[total_no_repetidos]=vector_privado[i];
					 	total_no_repetidos++;
					 	repetido=true;
					}
			}
		}

		

	}
	
	
};

int main () {
	SecuenciaCaracteres mi_secuencia;
	char caracter;
	
	while(caracter!='#'){
		cout<<"\nIntroduce un caracter: ";
		cin>>caracter;
		mi_secuencia.Aniade(caracter);
	}
	
	mi_secuencia.EliminaRepetidos();
	
	
	system("pause");
}
	
	
	
