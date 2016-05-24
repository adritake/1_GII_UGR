/* Programa para saber si una serie de caracteres son un palindromo usando una clase con vectores
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;

class SecuenciaCaracteres{
private:
	static const int TAMANIO = 50;
	char vector_privado[TAMANIO];
	int total_utilizados;
	int util;
	
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
		if (total_utilizados < TAMANIO && nuevo !='#'){
		vector_privado[total_utilizados] = nuevo;
		total_utilizados++;
	}
	}
	char Elemento(int indice){
		return vector_privado[indice];
	}

	bool EsPalindromo(){
	
	bool es_palindromo;
	int i,j;
	i=0;
	j=total_utilizados-1;
	es_palindromo=true;
	
	while(i <= j && es_palindromo==true){
		
		if(vector_privado[i] == vector_privado[j])
			es_palindromo=true;
		else
			es_palindromo=false;
		
		i++;
		j--;
	}
	
	return es_palindromo;
	}

};



int main () {
	
	SecuenciaCaracteres Secuencia;
	char caracter;
	
	while(caracter != '#'){
		cout<<"\nIntroduce un caracter: ";
		cin>> caracter;
		Secuencia.Aniade(caracter);
	}
	
	if(Secuencia.EsPalindromo() )
		cout<<"\nLa secuencia de caracteres es un palindromo.";
	else
		cout<<"\nLa secuencia de caracteres no es un palindromo.";
		
	system("pause");
	
}
	
