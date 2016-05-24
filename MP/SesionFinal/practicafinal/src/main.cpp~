#include<iostream>
#include<fstream>
#include<stdlib.h>
#include"clases.h"

using namespace std;

int main(int argc, char *argv[]){

	ifstream entrada;										// Declaración de los ficheros.
	ofstream salida;
	
	Conjunto conj,max_inter;									// Declaración de conjuntos auxiliares para hacer comparaciones.
	Grupo_Conjuntos grupo,solucion;
	
	char x;												// Declaración de las variables para leer del fichero.
	char cadena[5];
	int cont_cadena = 0;
	
	int max_car ;											// Declaración de las variables para buscar mayor cardinal.
	int indice=0;
	
	int valor = *argv[1] - '0';									// Transformación del parametro dado a entero.
	
	




	
	if( argc < 4 || argc > 4){									// Se comprueba que se han introducido el nº de parámetros adecuado
		cout<<"\nUso: Constructivo <k> <fichero_entrada> <fichero_salida> "<<endl;
		exit(1);
	}
	
	else{
		
		entrada.open(argv[2]);									// Se abren y se crean los archivos necesarios.
		salida.open(argv[3]);
		
		if( !entrada ){										// Comprobación de que se ha hecho correctamente la operacion anterior.
		
			cout<<"\nNo se pudo abrir el archivo de entrada."<<endl;
			exit(1);
		}
		else if ( !salida){
			
			cout<<"\nNo se pudo crear el archivo de salida."<<endl;
			exit(1);
		}
		else{											// Lectura desde fichero y pasandolo al grupo de conjuntos.
		
			cout<<"\nLeyendo fichero...\n";
		
			while( entrada.get(x) ){							// Se va cogiendo carácter a carácter.
				
				if( x == '\t' ){							// Si es un tabulador quiere decir que el número actual ha terminado.
				
					cadena[cont_cadena] = x;					// Se transforma la cadena char en entero con atoi(). 
					conj.Aniade( atoi(cadena) );					// Y se añade al conjunto.
					cont_cadena = 0;						// Se pone el tamaño de la cadena de char a 0.
				
			
				}
				else if( x == '\n' ){							// Si es un retorno, quiere decir que se ha acabado el conjunto.
				
					grupo.Aniade( conj );						// Se añade el conjunto al grupo.
					conj.Clear();
					cont_cadena = 0;						// Se pone el tamaño de la cadena de char a 0.
				}
				
				else{									// Si es otro carácter se añade a la cadena y se aumenta el contador.
				
					cadena[cont_cadena] = x;					
					cont_cadena++;
				
				}
				
			
			}
			
		}
	}

	cout<<"Buscando mayor interseccion...\n";	
	
// 1º paso: Se busca el conjunto con mayor cardinal.	
	
	if( valor > 0 ){										// Primero se comprueba que el parametro introducido es mayor que 0.
		
		max_car = grupo.Devuelve( 0 )->Cardinal();						// Se toma inicialmente como mayor cardinal el del primer conjunto.
	
		for ( int i=0; i < grupo.Total(); i++ ){						// Vamos recorriendo los conjuntos y viendo cual tiene mayor cardinal.
		
			if( grupo.Devuelve(i)->Cardinal() > max_car ){
			
				max_car = grupo.Devuelve(i)->Cardinal();				// Cuando se encuentra, se guarda el cardinal y la posición en la que esta el conjunto.
				indice = i;
			}
		}




// 2º paso: Se añade a la solución el conjunto con mayor cardinal.	
	
		solucion.Aniade	( *grupo.Devuelve( indice ) );						// Se añade.
		max_inter = *solucion.Devuelve( 0 );							// Se pone como mayor intersección el propio conjunto.					
		grupo.Elimina( indice );								// Se elimina del grupo.
	



//3º paso: Se buscan los conjuntos con mayor intersección entre ellos y con el primer conjunto hasta llegar al parámetro buscado.

	

		while( solucion.Total() != valor ){
		
			max_car = 0;									// Se inicializa el máximo cardinal a 0.
		
			for ( int i=0; i < grupo.Total(); i++ ){
			
				conj.Interseccion( max_inter , *grupo.Devuelve(i) );			// Vamos probando con cada conjunto la interseccion con max_inter.
			
				if( conj.Cardinal() > max_car ){					// Si el cardinal es el mayor, se guarda el cardinal y su posición.
				
					max_car = conj.Cardinal();
					indice = i;
				}
		
			}
		
			max_inter.Interseccion( max_inter , *grupo.Devuelve( indice ) );		// Cuando se tiene la mayor intersección, se actualiza max_inter.
		
			solucion.Aniade( *grupo.Devuelve( indice ) );					// Se añade a solución el conjunto.
			
			grupo.Elimina( indice );							// Y se elimina del grupo.
		
		}

	}

	


//4º paso: Se escribe en el fichero de salida los conjuntos obtenidos.

	cout<<"Escribiendo fichero...\n\n";

	for(int i=0; i < solucion.Total(); i++){
		
		for(int j=0; j < solucion.Devuelve(i)->Cardinal(); j++){
			
			salida<< solucion.Devuelve(i)->Elemento(j) << " ";				// Se escribe en "salida" carácter a carácter.
		
		}
		
		salida<< "\n";
	}


	salida<<"\nEl cardinal de la interseccion es: "<< max_inter.Cardinal();
	
			

	entrada.close();										// Finalmente se cierran los ficheros.
	salida.close();

	cout<<"Proceso finalizado con exito.\n\n";


}
