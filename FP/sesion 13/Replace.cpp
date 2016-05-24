/* Programa para simular la funcion replace de la clase string
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
	
	void Elimina(int posicion){
		if (posicion >= 0 && posicion < total_utilizados){
			int tope = total_utilizados-1;

			for (int i=posicion ; i<tope ; i++)
				vector_privado[i] = vector_privado[i+1];

			total_utilizados--;    
		}
	}
	
	void Inserta(int posicion,char caracter){
		int i;
		
		for(i=total_utilizados-1; i>=posicion; i--){
			vector_privado[i+1]=vector_privado[i];
		}
		
		vector_privado[posicion]=caracter;
		total_utilizados++;
	}
		
	
	void Remplaza( int pos, int n, SecuenciaCaracteres cadena){
		
		int i,j;
		j=pos;
		for( i=pos; i<n+pos; i++){
			Elimina(j);
		}
		j=0;
		for( i=pos; i< cadena.TotalUtilizados()+pos; i++ ){
			Inserta(i,cadena.Elemento(j));
			j++;
		}
	}
	
};

int main (){
	
	SecuenciaCaracteres cadena,cadena_insertar;
	int tope;
	
	cadena.Aniade('f');
	cadena.Aniade('u');
	cadena.Aniade('n');
	cadena.Aniade('d');
	cadena.Aniade('a');
	cadena.Aniade('m');
	cadena.Aniade('e');
	cadena.Aniade('n');
	cadena.Aniade('t');
	cadena.Aniade('a');
	cadena.Aniade('l');
	cadena.Aniade(' ');
	cadena.Aniade('p');
	cadena.Aniade('r');
	cadena.Aniade('o');
	cadena.Aniade('g');
	cadena.Aniade('r');
	cadena.Aniade('a');
	cadena.Aniade('m');
	cadena.Aniade('a');
	cadena.Aniade('c');
	cadena.Aniade('i');
	cadena.Aniade('o');
	cadena.Aniade('n');
	
	
	
	
	
	cadena_insertar.Aniade('o');
	cadena_insertar.Aniade('s');
	cadena_insertar.Aniade(' ');
	cadena_insertar.Aniade('d');
	cadena_insertar.Aniade('e');
	cadena_insertar.Aniade(' ');
	cadena_insertar.Aniade('l');
	cadena_insertar.Aniade('a');
	
	
	tope = cadena.TotalUtilizados();

	for (int i = 0; i < tope; i++)
		cout  << cadena.Elemento(i) << " ";
		
	cadena.Remplaza(9,2,cadena_insertar);
	
	cout<<"\n\n";
	
	tope = cadena.TotalUtilizados();

	for (int i = 0; i < tope; i++)
		cout  << cadena.Elemento(i) << " ";
	
	cout<<"\n\n";
	
	system("pause");
	
}
	
	
	

	
	
		
