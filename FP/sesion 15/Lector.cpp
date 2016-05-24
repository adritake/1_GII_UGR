/* Programa para implementar las clases de imprimir y leer 
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
};
class Texto{
private:
	static const int TAMANIO=50;
	char matriz_privada[TAMANIO][TAMANIO];
	int vector_columnas_utilizadas[TAMANIO];
	int filas_utilizadas;
public:

	Texto(){
		filas_utilizadas=0;
		for(int i=0;i<=TAMANIO;i++)
			vector_columnas_utilizadas[i]=0;
	
	}
	
	int UtilizadosFila(int indice){
		if(indice<filas_utilizadas)
			return vector_columnas_utilizadas[indice];
			
	}
	
	int FilasTotales(){
		return filas_utilizadas;
	}
	
	char Elemento(int i,int j){
		return matriz_privada[i][j];
	}
	void Aniade(int fila,char caracter){
			
		matriz_privada[fila][vector_columnas_utilizadas[fila]]=caracter;
		vector_columnas_utilizadas[fila]++;
	}
	
	void TextoNuevo(SecuenciaCaracteres mi_texto){
		
		int i,j;
		j=0;
		for(i=0;i<mi_texto.TotalUtilizados();i++){
			
			if(mi_texto.Elemento(i)=='.'){
				Aniade(j,mi_texto.Elemento(i));
				j++;
				filas_utilizadas++;
			}
			else
				Aniade(j,mi_texto.Elemento(i));
				
		}
	}
};
class ImpresorSecuenciaCaracteres{
public:
	
	void ImprimeSecuenciaCaracteres(SecuenciaCaracteres secuencia){
		
		for(int i=0; i<secuencia.TotalUtilizados(); i++){
			cout<<secuencia.Elemento(i);
		}
	}
	
	void ImprimeTexto(Texto mi_texto){
		
		int i,j;
		
		for(i=0;i<mi_texto.FilasTotales(); i++){
			
			for(j=0; j<mi_texto.UtilizadosFila(i);j++){
				
				if(mi_texto.Elemento(i,j)=='.'){
					cout<<mi_texto.Elemento(i,j);
					cout<<"\n";
				}
				else
					cout<<mi_texto.Elemento(i,j);
					
			}
		}
	}
			
	
};

class LectorSecuenciaCaracteres{
public:
	
	SecuenciaCaracteres Lee(){
		
		char caracter;
		int numero_filas,numero_puntos;
		SecuenciaCaracteres fila;
		
		cin>>numero_filas;
		numero_puntos=0;
		while(numero_puntos<numero_filas){
			cin>>caracter;
			if(caracter=='.'){
				fila.Aniade(caracter);
				numero_puntos++;
			}
			else
				fila.Aniade(caracter);
		}
			
		
		
		return fila;
	}
};



int main(){
	
	Texto el_texto;
	ImpresorSecuenciaCaracteres imprime;
	LectorSecuenciaCaracteres lee;
	
	el_texto.TextoNuevo(lee.Lee());
	
	imprime.ImprimeTexto(el_texto);
	
	system("pause");
}
			
	
