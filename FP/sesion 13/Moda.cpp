/* Programa para calcular la moda de una secuencia de caracteres
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>
using namespace std;


struct FrecuenciaCaracter{
	char caracter;
	int frecuencia;
};



class  SecuenciaCaracteres{
private:
	static  const  int  TAMANIO  =  50;
	char  vector_privado[TAMANIO];
	int  total_utilizados;
public:
	SecuenciaCaracteres()
		:total_utilizados(0)        
	{    
	}

	int  TotalUtilizados(){
		return  total_utilizados;
	}

	void  Aniade(char  nuevo){
		if (total_utilizados  <  TAMANIO){
			vector_privado[total_utilizados]  =  nuevo;
			total_utilizados++;
		}
	}
	char Elemento(int  indice){
		return  vector_privado[indice];
	}
	
	struct Moda{
		char moda;
		int frecuencia,frecuencia_moda,i,j;
		frecuencia_moda=0;
		
		for(i=0;i<total_utilizados;i++){
			
			frecuencia=0;
			for(j=0;j<total_utilizados;j++){
				if(vector_privado[i]==vector_privado[j])
					frecuencia++;
			}
			
			if(frecuencia>frecuencia_moda){
				frecuencia_moda=frecuencia;
				moda=vector_privado[i];
			}
		}
		
		FrecuenciaCaracter.caracter=moda;
		FrecuenciaCaracter.frecuencia=frecuencia_moda;
		
		return FrecuenciaCaracter;
	}
	
};

int main(){
	SecuenciaCaracteres frase;
	int tope;

	frase.Aniade('l');
	frase.Aniade('o');
	frase.Aniade('s');
	frase.Aniade(' ');
	frase.Aniade('d');
	frase.Aniade('o');
	frase.Aniade('s');
	frase.Aniade(' ');
	frase.Aniade('c');
	frase.Aniade('o');
	frase.Aniade('f');
	frase.Aniade('r');
	frase.Aniade('e');
	frase.Aniade('s');
	
	cout<<"El caracter que mas veces aparece es: "<<frase.Moda().caracter; << " y aparece "<<frase.Moda().frecuencia<<" veces.";
	
	system("pause");
	
}
				
			
