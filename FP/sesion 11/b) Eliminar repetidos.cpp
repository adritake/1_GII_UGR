/*Ejercicio 7b
Hecho por Adrián de la Torre Rodriguez 1ºA grupo A1
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
	
	void Elimina (int posicion){
      
      if (posicion >= 0 && posicion < total_utilizados){
         int tope = total_utilizados-1;

         for (int i = posicion ; i < tope ; i++)         
            vector_privado[i] = vector_privado[i+1];

         total_utilizados--;
      }
   }
   
   void EliminaRepetidos(){
   	int j,i;
		bool repetido;
		i=0;
		while(i<total_utilizados){
   		
   		repetido=false;
			j=i+1;
			while(j<total_utilizados && !repetido){
				if(vector_privado[i]!=vector_privado[j])
					j++;
				else{
					repetido=true;
					Elimina(i);
				}
			}
			if(!repetido)
				i++;
		}
	}
					
   			
   		
   		
   
   
};

int main() {
	
	SecuenciaCaracteres cadena;
	
	cadena.Aniade('H');
   cadena.Aniade('O');
   cadena.Aniade('B');
   cadena.Aniade('H');
   cadena.Aniade('B');
   cadena.Aniade('O');
   cadena.Aniade('C');
   cadena.Aniade('D');
   
   cadena.EliminaRepetidos();
   
   for (int i = 0; i < cadena.TotalUtilizados(); i++)
      cout  << cadena.Elemento(i);
      
   system("pause");
   
}
   				
