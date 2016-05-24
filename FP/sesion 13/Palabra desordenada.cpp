/* Clase palabra en la cual podemos saber si dos palabras son iguales
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>

using namespace std;

class Palabra{
private:
	static  const  int  TAMANIO  =  50;
	char  vector_palabra[TAMANIO];
	int  total_utilizados;
public:
	Palabra():total_utilizados(0)        
	{    
	}

	int  TotalUtilizados(){
		return  total_utilizados;
	}

	void  Aniade(char  nuevo){
		if (total_utilizados  <  TAMANIO){
			vector_palabra[total_utilizados]  =  nuevo;
			total_utilizados++;
		}
	}
	char Elemento(int  indice){
		return  vector_palabra[indice];
	}
	bool EsIgual(Palabra otra_palabra){
		
		bool igual;
		int i,j;
		bool esta = true;
		
		if(total_utilizados==otra_palabra.TotalUtilizados()){
			
			if(Elemento(0)==otra_palabra.Elemento(0) && Elemento(total_utilizados-1)==otra_palabra.Elemento(otra_palabra.TotalUtilizados()-1 )){
				
				for(i=1;i<total_utilizados - 1&&esta;i++){
					esta=false;
					for(j=1;j<total_utilizados-1 && !esta;j++){
						if(Elemento(i)==otra_palabra.Elemento(j))
							esta=true;
						else
							esta=false;
					}
					if(!esta)
						return false;
					else
						igual=true;
				}
				return igual;
			}
			else
				return false;
		}
		else
			return false;
		}
};
		
		
int main () {
	Palabra mipalabra;
	Palabra otrapalabra;
	
	mipalabra.Aniade('L');
	mipalabra.Aniade('I');
	mipalabra.Aniade('B');
	mipalabra.Aniade('R');
	mipalabra.Aniade('O');
	
	
	otrapalabra.Aniade('L');
	otrapalabra.Aniade('B');
	otrapalabra.Aniade('I');
	otrapalabra.Aniade('R');
	otrapalabra.Aniade('O');
	
	
	if(mipalabra.EsIgual(otrapalabra))
		cout<<"Las palabras son iguales";
	else
		cout<<"Las palabras no son iguales";
		
	system("pause");
	
}
	
