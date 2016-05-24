/* Programa para ver cuantas secuencias ascendentes tiene un vector de numeros enteros
Hecho por Adrián de la Torre Rodríiguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;


class SecuenciaEnteros{
private:
	static const int TAMANIO = 50;
	int vector[TAMANIO];
	int total_utilizados;
	
public:
	SecuenciaEnteros()
		:total_utilizados(0){
	}
	int TotalUtilizados(){
		return total_utilizados;
	}
	int Capacidad(){
		return TAMANIO;
	}
	void Aniade(int nuevo){
		if (total_utilizados < TAMANIO && nuevo != -1){
			vector[total_utilizados] = nuevo;
			total_utilizados++;
		}
	}
	int Elemento(int indice){
		return vector[indice];
	}

	int SecuenciaAscendente(){
		int numero_secuencias=0;
		for(int i=0; i<total_utilizados; i++){
			if(!(vector[i]<=vector[i+1]))
				numero_secuencias++;
		}
		
		return numero_secuencias;
	
	}
			
};

int main () {
	
	SecuenciaEnteros mi_secuencia;
	int numero;
	
	while( numero != -1){	
	cout<<"\nIntroduce un numero entero: ";
	cin>>numero;
	mi_secuencia.Aniade(numero);
	}
	
	cout<<"\n\nLa secuencia de numeros tiene " << mi_secuencia.SecuenciaAscendente() << " secuencias ascendentes.";
	
	system("pause");
	
}
