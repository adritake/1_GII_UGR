#ifndef CLASES
#define CLASES

class Conjunto{
private:

	int *C;
	static const int TAM=50;
	int cardinal;

	
/* Método que convierte un vector en un conjunto */

	void Setify(){								// Este es uno de los métodos más importantes ya que ordena el vector y elimina los repetidos.
		
		int minimo,maximo;						// La mayor parte de la clase Conjunto se basa en que se ha usado previamente este método, lo
		int *aux=0;							// que simplifica bastante los demás algoritmos.
		int util_aux=0;
		
			
		if( cardinal > 0){						// Partimos de que el cardinal es mayor que 0.
			
			aux=new int[TAM];					// Creamos un vector auxiliar donde va a ir el vector transformado.
			minimo=C[0];
			maximo=C[0];
			
			for( int i=0; i< cardinal; i++ ){			// Primero encontramos el mayor y el menor del vector.
				
				if( C[i] < minimo)
					minimo=C[i];
					
				if(C[i]>maximo)
					maximo=C[i];
					
			}
			
			aux[0]=minimo;						// Añadimos el menor al vector aux.
			util_aux++;
			
			for( int i=0; aux[util_aux-1] != maximo; i++ ){		// Este bucle para cuando se está operando con el mayor valor ( encontrado en el bucle anterior ).
				
				minimo=maximo;					// Al principio se inicializa minimo al mayor elemento del vector.
				
				for(int j=0; j < cardinal; j++){		
					
					if( C[j] > aux[i] && C[j] < minimo ){	// Se recorre el vector y si el elemento es mayor ESTRICTO que el elemento que ya hay en aux
										// y menor que el mínimo se etiqueta como mínimo. Esto evita añadir repetidos al vector aux.
						minimo=C[j];
					}
				}						
				
				
						
				aux[util_aux]=minimo;				// Cuando se tiene el mínimo se añade
				util_aux++;
				
				
				
			}
			
			delete C;						// Finalmente eliminamos el conjunto actual
			C=aux;							// lo iniciamos a aux
			cardinal=util_aux;					// y actualizamos el cardinal.
			
		}
	}

	


/* Método que añade al final del conjunto un elemento */

	void PushBack(int dato){						// Este método se usa cuando se sabe que los conjuntos están ordenados.						
		
		if( cardinal < TAM ){
		
			C[cardinal]=dato;
		    cardinal++;	
		}

	
	}

public:

	Conjunto();
	Conjunto( Conjunto& conj );
	~Conjunto();

	void Clear();
	void Aniade( const int &dato );
	void Copiar( Conjunto conj );
	void Interseccion( Conjunto conj1, Conjunto conj2 );
	
	int Elemento( int indice );
	int Cardinal();
	
	void Lee();
	void Escribe();

	Conjunto& operator = ( Conjunto &conj);

};


struct Celda_Conjunto{

	Conjunto conj;
	Celda_Conjunto *sig;

};


class Grupo_Conjuntos{
private:

	Celda_Conjunto *inicio;
	int total;

public:

	Grupo_Conjuntos();
	~Grupo_Conjuntos();

	void Aniade( Conjunto nuevo_conj );
	void Elimina( int indice );

	int Total();
	
	Conjunto *Devuelve( int posicion );
	void Escribe();

};


#endif
