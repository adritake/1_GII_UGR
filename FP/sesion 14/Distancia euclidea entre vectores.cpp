/*Clase de matriz para calcular la fila de la matriz que más se parezca a una secuencia de enteros
Hecho por Adrián de la Torre Rodriguez 1ºA grupo A1
*/

#include<iostream>
#include<cmath>

using namespace std;


class SecuenciaEnteros{
private:
	static const int TAMANIO = 50;
	int vector_privado[TAMANIO];
	int total_utilizados;
public:
	SecuenciaEnteros(){
		total_utilizados=0;
	}
	
	void Aniade(int nuevo){
		if (total_utilizados  <  TAMANIO){
			vector_privado[total_utilizados]  =  nuevo;
			total_utilizados++;
		}
	}
	
	int  TotalUtilizados(){
		return  total_utilizados;
	}
	
	int Elemento(int  indice){
		return  vector_privado[indice];
	}
};
	
class MatrizRectangularEnteros{
private:
	
	static const int MAXIMO_FILAS = 50;
	static const int MAXIMO_COLUMNAS = 50;
	int matriz_privada[MAXIMO_FILAS][MAXIMO_COLUMNAS];
	int util_filas,util_columnas;

public:
	
	MatrizRectangularEnteros(){
		util_filas=0;
		util_columnas=0;
	}
	void SetUtilizados(int filas,int columnas){
		if(filas>=0 && columnas >=0){
			util_filas=filas;
			util_columnas=columnas;
		}
	}
			
	int FilasUtilizadas(){
		return util_filas;
	}
	
	int ColumnasUtilizadas(){
		return util_columnas;
	}
	
	int Elemento(int fila,int columna){
		int elemento;
		elemento=matriz_privada[fila][columna];
		return elemento;
	}
	
	SecuenciaEnteros Fila(int indice_fila){
		SecuenciaEnteros fila;
		int i;
		
		for(i=0;i<util_columnas;i++)
			fila.Aniade(matriz_privada[indice_fila][i]);
			
		return fila;
	}
	
	void AniadeFila(SecuenciaEnteros fila_nueva){
		util_filas++;
		int i;
		if(fila_nueva.TotalUtilizados() == util_columnas){
			
			for(i=0;i<util_columnas;i++){
				matriz_privada[util_filas][i]=fila_nueva.Elemento(i);
			}
			
			util_filas++;
		}
	}
	
	void Modifica(int fila,int columna,int numero){
		if(fila<util_filas && columna < util_columnas)
			matriz_privada[fila][columna]=numero;
	}
	
	bool EsIgual(MatrizRectangularEnteros otra_matriz){
		bool igual=true;
		int i,j;
		
			for(i=0;i<util_filas && igual;i++){
				
				for(j=0;j<util_columnas && igual;j++){
					if(matriz_privada[i][j]!=otra_matriz.Elemento(i,j)){
						igual=false;
					}
				}
			}
		
		return igual;
	}

	MatrizRectangularEnteros Traspuesta (){
		
		MatrizRectangularEnteros traspuesta;
		int util_fil_traspuesta, util_col_traspuesta;
   
   	util_fil_traspuesta = util_columnas;
   	util_col_traspuesta = util_filas;
   	
   	traspuesta.SetUtilizados(util_fil_traspuesta,util_col_traspuesta);
	   
		
		for (int i=0; i<util_fil_traspuesta; i++){
	      for (int j=0; j<util_col_traspuesta; j++){
	         traspuesta.Modifica(i,j,matriz_privada[j][i]);
	      }
	   }
		
		return traspuesta;
	
	}


	bool Simetrica(){
		bool simetrica;
		
		if( EsIgual(Traspuesta()))
			simetrica=true;
		else
			simetrica=false;
			
		return simetrica;
	}
	
	MatrizRectangularEnteros Multiplicacion(	MatrizRectangularEnteros  otra_matriz){
		
	
		MatrizRectangularEnteros matriz_producto;
	
		matriz_producto.SetUtilizados(util_filas,otra_matriz.ColumnasUtilizadas());
		
		int util_filas_producto, util_columnas_producto;
	
	 	if(util_columnas==otra_matriz.FilasUtilizadas()){
		   
		   util_filas_producto = util_filas;
		   util_columnas_producto = otra_matriz.ColumnasUtilizadas();
		   
		   for (int i=0; i<util_filas_producto; i++)
				for (int j=0; j<util_columnas_producto; j++){
		         matriz_producto.Modifica(i,j,0);
		         
		         for (int k=0; k<util_columnas_producto; k++)
		            matriz_producto.Modifica(i,j,  matriz_producto.Elemento(i,j) + matriz_privada[i][k] * otra_matriz.Elemento(k,j)  );
						
		            
		      }  
		   
		   return matriz_producto;
		}
	}
	
	SecuenciaEnteros FilaParecida ( SecuenciaEnteros referencia, SecuenciaEnteros filas_a_comparar) {
		
		double distancia,distancia_minima;
		int radicando;
		int fila_mas_parecida;
		int i,j,k;
		
		i=0;
		for(i= filas_a_comparar.Elemento(k); k< filas_a_comparar.TotalUtilizados(); k++){
		
			radicando=0;
			for(j=0; j<util_columnas; j++){
				
				radicando= radicando + pow(Fila(i).Elemento(j)-referencia.Elemento(j), 2);
			}
			
			distancia=sqrt(radicando);
			
			if(distancia<distancia_minima){
				distancia_minima=distancia;
				fila_mas_parecida=i;
			}
		}
		
		return Fila(fila_mas_parecida);
	}
		
};
