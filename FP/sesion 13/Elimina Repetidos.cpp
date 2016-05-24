/* Modificacion del programa de Elimina Repetidos
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

	void AniadeCadena(string nuevo){
		int tope = nuevo.size();

		for (int i = 0; i < tope; i++)
			Aniade(nuevo[i]);
	}

	char Elemento(int  indice){
		return  vector_privado[indice];
	}

	void Modifica(int indice_componente, char nuevo){
		if (indice_componente >= 0  &&  indice_componente < total_utilizados)
			vector_privado[indice_componente] = nuevo;
	}	

	
	void Elimina(int posicion){
		if (posicion >= 0 && posicion < total_utilizados){
			int tope = total_utilizados-1;

			for (int i=posicion ; i<tope ; i++)
				vector_privado[i] = vector_privado[i+1];

			total_utilizados--;    
		}
	}

	

   void EliminaRepetidos_con_ObjetoLocal(){
      
		SecuenciaCaracteres sin_repetidos;     
		
		bool encontrado_en_repetidos;
		int utilizados_en_repetidos;
		
		for(int i=0;i<total_utilizados;i++)
			sin_repetidos.Aniade(Elemento(i));
		
		if (total_utilizados > 0){
			sin_repetidos.Aniade(Elemento(0));
			utilizados_en_repetidos = 1;

			for (int actual = 1; actual < total_utilizados; actual++){
				encontrado_en_repetidos = false;

				for (int j = 0; j < utilizados_en_repetidos && !encontrado_en_repetidos; j++){
					if (Elemento(actual)== sin_repetidos.Elemento(j))
						encontrado_en_repetidos = true;
				}

				if (!encontrado_en_repetidos){
					sin_repetidos.Modifica(utilizados_en_repetidos,Elemento(actual));
					utilizados_en_repetidos++;
				}
			}

			for (int i=0; i<utilizados_en_repetidos; i++)
				Modifica(i,sin_repetidos.Elemento(i));

			total_utilizados = utilizados_en_repetidos;
		}
	}



	
};

int main(){
	SecuenciaCaracteres frase;
	int tope;

	frase.Aniade('H');
	frase.Aniade('H');
	frase.Aniade('o');
	frase.Aniade('l');
	frase.Aniade('a');
	frase.Aniade('a');
	frase.Aniade('a');
	frase.Aniade('H');
	
	tope = frase.TotalUtilizados();

	for (int i = 0; i < tope; i++)
		cout  << frase.Elemento(i) << " ";

	frase.EliminaRepetidos_con_ObjetoLocal();
	tope = frase.TotalUtilizados();          // Hay que recalcular tope ya que el número de componentes utilizadas ha cambiado

	cout << "\n";

	for (int i = 0; i < tope; i++)
		cout  << frase.Elemento(i) << " ";

	system ("pause");
}

