#include "clases.h"
#include<iostream>

using namespace std;


/* Constructor por defecto */
	
Conjunto::Conjunto(){							
		
	C=new int[TAM];
	cardinal=0;

}



/* Constructor de copia */

Conjunto::Conjunto( Conjunto& conj){					
		
	cardinal=0;
	C=new int[TAM];
	
	if( conj.Cardinal() > 0 ){
		
		while( conj.Cardinal() != cardinal ){	
	
			C[cardinal]=conj.Elemento(cardinal);
			cardinal++;
			
		}

	}

}


/* Destructor */	
	
Conjunto::~Conjunto(){							
		
	cardinal=0;
	delete C;
	
}


/* Método que vacia el conjunto */
	
void Conjunto::Clear(){							
		
	cardinal=0;
	delete C;
	C=new int[TAM];

}



/* Método para añadir un dato al conjunto */

void Conjunto::Aniade( const int &dato ){				
			
	PushBack(dato);							//  Lo añade al final y luego lo ordena.
	Setify();
	
}
	


/* Método para copiar otro conjunto en el conjunto actual */
	
void Conjunto::Copiar( Conjunto conj ){					// Este método es útil para la sobrecarga del " = " y por si fuera necesario				
									// para otros programas
	Clear();							
	
	if( conj.Cardinal() > 0 ){					// Se comprueba si el cardinal del nuevo conjunto es mayor de 0.
			
		for(int i = 0; i < conj.Cardinal(); i++){		
				
			PushBack( conj.Elemento(i) );			// Como el otro conjunto esta ordenado por la funcion Setify(), basta con hacer solo un PushBack().
					
		}
			
		cardinal = conj.Cardinal();
			
	}
	else if( conj.Cardinal() == 0 ){				// Si el cardinal es 0, simplemente actualizamos el valor del cardinal actual a 0.
			
		cardinal = conj.Cardinal();
	}
		
}
			

/* Método que devuelve un elemento del conjunto dado su indice */
	
int Conjunto::Elemento( int indice ){					
		
	if( indice >= 0 && indice < cardinal ){
			
		return C[indice];
		
	}

}
	

/* Método que devuelve el cardinal del conjunto */
	
int Conjunto::Cardinal(){						
	
	return cardinal;
		
}
	

/* Método para leer el conjunto desde entrada standard */

void Conjunto::Lee(){							
		
	int x;
		
	cardinal=0;
		
	cin>> x;
		
	while( x != -1 ){
			
		C[cardinal] = x;
		cardinal++;
		cin>> x;
			
			
	}
		
	Setify();
		
}



/* Método que escribe el conjunto por salida standard */
	
void Conjunto::Escribe(){
		
	for(int i=0; i < cardinal; i++)
		
		cout<< C[i] << " ";
			
}
		
	
/* Método que hace una intersección */

void Conjunto::Interseccion( Conjunto conj1, Conjunto conj2){			// Dados dos conjuntos se crea su intersección en el conjunto actual.
	
	if(cardinal != 0){							// Si el cardinal es mayor que 0 se vacía el conjunto actual.
		
		Clear();		
		
	}
		
	for( int i = 0; i < conj1.Cardinal(); i++ ){
			
		for( int j = 0; j < conj2.Cardinal(); j++ ){
				
			if( conj1.Elemento(i) == conj2.Elemento(j) ){		// Se recorre dato a dato cada conjunto y si son iguales se añade al conjunto actual.
					
				PushBack( conj1.Elemento(i) );			// Como los conjuntos están ordenados solo es necesario hacer PushBack();
		
			}
		}
	}
		
}


/* Sobrecarga del operador de asignación */
	
Conjunto& Conjunto::operator = ( Conjunto &conj){				
		
	this->Copiar( conj );
	return *this;
		
}
	


/* Constructor por defecto de la clase Grupo_Conjuntos */

Grupo_Conjuntos::Grupo_Conjuntos(){
		
	inicio=0;
	total=0;
		
}
	

/* Destructor */

Grupo_Conjuntos::~Grupo_Conjuntos(){
		
	Celda_Conjunto *indice = inicio;
	Celda_Conjunto *anterior = inicio;
		
	if(inicio != 0){
	
		while( indice->sig != 0 ){					// Se va recorriendo la lista y liberando el elemento anterior hasta llegar al puntero nulo.
				
			indice = indice->sig;
			delete anterior;
			anterior = anterior->sig;
		
		}
		
		delete indice;							// Por último se libera el indice actual que no se libera en el bucle anterior.
	}
		
}
	


/* Método que añade un conjunto al final de la lista de conjuntos */

void Grupo_Conjuntos::Aniade( Conjunto nuevo_conj ){				// El algoritmo es distinto si la lista esta vacía.
		
	if(inicio == 0){							// Si esta vacía se crea una celda en el inicio y se pone 0 en el puntero siguiente.
			
		inicio=new Celda_Conjunto;
		inicio->conj = nuevo_conj;
		inicio->sig = 0;
		total++;
	
	}
	else{									// Si no esta vacía, vamos avanzando hasta encontrar el puntero nulo, creamos una celda y ponemos el valor 0 en el puntero.
		
		Celda_Conjunto *indice = inicio;
		
		while(indice->sig != 0){
			
			indice = indice->sig;
		}
		
		indice->sig=new Celda_Conjunto;
		indice = indice->sig;
		indice->conj = nuevo_conj;
		indice->sig = 0;
		total++;
		
	}
}



/* Método que elimina un conjunto dado un índice */
	
void Grupo_Conjuntos::Elimina( int indice ){					// Este algoritmo cambia si hay que eliminar el primero, el útimo o cualquier otro.
		
	Celda_Conjunto *cel = inicio;
	Celda_Conjunto *cel_ant = inicio;
	Celda_Conjunto *aux;
	
	
	if ( indice == 0){							// Si es la primera celda, se guarda en aux la primera celda, inicio se actualiza a la segunda y se borra aux.
		
		aux = inicio;
		inicio = cel->sig;
		delete aux;
		total--;
		
	}
		
	else if ( indice == total-1 ){						// Si es la última celda, se avanza hasta encontrar el puntero 0.
		
		cel = cel->sig;
		
		while( cel->sig != 0){
			cel_ant = cel_ant->sig;
			cel = cel->sig;
		}
		
		delete cel;							// Se libera la última y se pone el puntero de la anterior a 0.
		cel_ant->sig = 0;
		total--;
	}
		
	else if ( indice > 0 && indice < total-1 ){				// Si es una celda interior hay que tener dos punteros apuntando antes y despues del elemento a borrar.
		
		cel = cel->sig;							// Se avanza dos veces el puntero actual.
		cel = cel->sig;
		
		
		for( int i = 1; i < indice; i++ ){				// Se van avanzando los dos punteros con una celda de separación hasta llegar al elemento que se quedará en medio.
				
			cel_ant = cel_ant->sig;
			cel = cel->sig;
			
		}
			
		aux = cel_ant->sig;
		delete aux;
		cel_ant->sig = cel;
		
		total--;
		
	}
		
}


/* Método que devuelve el tota de conjuntos que hay */
	
int Grupo_Conjuntos::Total(){
		
	return total;
}



/* Método que devuelve un puntero a un conjunto del grupo de conjuntos */
	
Conjunto *Grupo_Conjuntos::Devuelve( int posicion ){
		
	if(posicion >= 0 && posicion <= total ){
			
		Celda_Conjunto *indice = inicio;
		
		for( int i=0; i< posicion; i++ ){
			
			indice = indice->sig;
			
		}
		
		return &indice->conj;
	}
}


/* Método que escribe por salida standar los conjuntos, uno en cada línea */
	
void Grupo_Conjuntos::Escribe(){
		
	for(int i=0; i < total; i++){
		Devuelve(i)->Escribe();
		cout<<"\n";
	}
}
	
	
	
	
			



