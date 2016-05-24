/* Metodo para la clase secuencia de caracteres llamado counting sort
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>
using namespace std;

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
	
	
	SecuenciaCaracteres CountingSort(){
		
		SecuenciaCaracteres Ordenados;
		char minimo,maximo,letra_actual;
		int i,j,apariciones;
		int frecuencia[TAMANIO];
		int utilizados_frecuencia;
		minimo=vector_privado[0];
		
		for(i=1;i<total_utilizados;i++){
			if(vector_privado[i]<minimo)
				minimo=vector_privado[i];
				
		}
		
		maximo=vector_privado[0];
		
		for(i=1;i<total_utilizados;i++){
			if(vector_privado[i]>maximo)
				maximo=vector_privado[i];
		}
		
		utilizados_frecuencia=maximo-minimo+1;
		letra_actual=minimo;	
		
		for(i=0;i<utilizados_frecuencia;i++){
			apariciones=0;
			for(j=0;j<total_utilizados;j++){
				if(vector_privado[j]==letra_actual)
					apariciones++;
				
			}
			frecuencia[i]=apariciones;
			letra_actual++;
		}
		
		letra_actual=minimo;
		for(i=0;i<utilizados_frecuencia;i++){
			for(j=0;j<frecuencia[i];j++)
				Ordenados.Aniade(letra_actual);
			letra_actual++;
		}
		return Ordenados;
	}
	
	
	SecuenciaCaracteres CountingSort_Limites(char inicio,char fin){
		
		SecuenciaCaracteres Ordenados;
		char minimo,maximo,letra_actual;
		int i,j,apariciones;
		int frecuencia[TAMANIO];
		int utilizados_frecuencia;
		minimo=vector_privado[0];
		
		for(i=1;i<total_utilizados;i++){
			if(vector_privado[i]<minimo)
				minimo=vector_privado[i];
				
		}
		
		maximo=vector_privado[0];
		
		for(i=1;i<total_utilizados;i++){
			if(vector_privado[i]>maximo)
				maximo=vector_privado[i];
		}
		
		utilizados_frecuencia=maximo-minimo+1;
		letra_actual=minimo;	
		
		for(i=0;i<utilizados_frecuencia;i++){
			apariciones=0;
			for(j=0;j<total_utilizados;j++){
				if(vector_privado[j]==letra_actual)
					apariciones++;
				
			}
			frecuencia[i]=apariciones;
			letra_actual++;
		}
		
		letra_actual=minimo;
		for(i=0;i<utilizados_frecuencia;i++){
			for(j=0;j<frecuencia[i];j++){
				if(letra_actual>=inicio && letra_actual<=fin)
					Ordenados.Aniade(letra_actual);
			}
			letra_actual++;
		}
		return Ordenados;
	}
	
};
		
int main(){
	SecuenciaCaracteres frase;
	int tope;

	frase.Aniade('c');
	frase.Aniade('b');
	frase.Aniade('b');
	frase.Aniade('a');
	frase.Aniade('b');
	frase.Aniade('c');
	frase.Aniade('c');
	frase.Aniade('a');
	frase.Aniade('g');
	frase.Aniade('c');
	frase.Aniade('b');
	frase.Aniade('g');
	frase.Aniade('c');
	
	tope = frase.TotalUtilizados();

	for (int i = 0; i < tope; i++)
		cout  << frase.Elemento(i) << " ";


	tope = frase.TotalUtilizados();          

	cout << "\n";

	for (int i = 0; i < tope; i++)
		cout  << frase.CountingSort().Elemento(i) << " ";

	
	tope=frase.CountingSort_Limites('b','g').TotalUtilizados();
	cout << "\n";
	for (int i = 0; i < tope; i++)
		cout  << frase.CountingSort_Limites('b','g').Elemento(i) << " ";
	
	
	system ("pause");
}
