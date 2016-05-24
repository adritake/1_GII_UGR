/* Programa para eliminar repetidos de una serie de caracteres
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>
#include <cctype>

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
		if (total_utilizados < TAMANIO){
			vector_privado[total_utilizados] = nuevo;
			total_utilizados++;
		}
	}
	char Elemento(int indice){
		return vector_privado[indice];
	}

	void Modifica (int indice_componente, char nuevo){
      if (indice_componente >= 0  &&  indice_componente < total_utilizados)
         vector_privado[indice_componente] = nuevo;
   }


	void EliminaRepetidos(){
		
		int posicion_lectura,posicion_escritura,i;
		bool repetido;
		posicion_lectura=0;
		
		for(posicion_escritura=0;posicion_escritura<total_utilizados;     ){
			
			repetido=false;
			
			
			
			for(i=posicion_escritura;i<total_utilizados && !repetido;i++){
					if(vector_privado[posicion_escritura]==vector_privado[i]){
						repetido=true;
						posicion_lectura++;
					}
					
			}
			
			if(!repetido){
				Modifica(posicion_escritura,vector_privado[posicion_lectura]);
				posicion_escritura++;
				posicion_lectura++;
			}
		}
		
	}
	
};


int main () {
	
	SecuenciaCaracteres cadena;
	int tope,i;
	char caracter;
	
	cin>>caracter;
	
	while(caracter!='#'){
		cadena.Aniade(caracter);
		cin>>caracter;
	}
	
	
	
	tope=cadena.TotalUtilizados();
	for (i = 0; i < tope; i++)
      cout  << cadena.Elemento(i);
      
   cadena.EliminaRepetidos();
      
   tope=cadena.TotalUtilizados();
	for (i = 0; i < tope; i++)
      cout  << cadena.Elemento(i);
      
      
   system("pause");
   
}
