/* Clase que cuenta cuantas mayusculas hay en una secuencia de letras
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>

using namespace std;

class ContadorMayusculas{
private:
	char letra;
	char vector[50];
	int contador_mayusculas[27];
	int total_utilizados;
public:
	
	ContadorMayusculas():total_utilizados(0){
		for(int i=0;i<26;i++){
		
			contador_mayusculas[i]=0;
		}
	}
		
	
	
	void Aniade(char letra){
		
		if(total_utilizados<=50 && letra != '.'){
			vector[total_utilizados]=letra;
			total_utilizados++;
		}
	}
	
	
	int CuantasHay(char mayuscula){
		int contador;
		for(int i=0;i<26;i++){
			if(vector[i]==mayuscula)
				contador++;
		}
		return contador;
	}
	
	void IncrementaConteo(char mayuscula){
		int numero_letras=0;
		char letra='A'-1;
		char abecedario[26];
		int posicion=0;
		
		while(numero_letras < 26){
			letra=letra+1;
			abecedario[numero_letras]=letra;
			numero_letras++;
		}
		
		
		for(int i=0;i<26;i++){
			if(abecedario[i]==mayuscula)
				posicion=i;
		}
		
		
		contador_mayusculas[posicion]=CuantasHay(mayuscula);
	}
	
	
	int Contador(int indice){
		return contador_mayusculas[indice];
	}
	
};
	
	
int main(){
		ContadorMayusculas mi_secuencia;
		char caracter;
		char abecedario[26];
		char letra='A'-1;	
		int numero_letras=0;
		
		while(caracter!='.'){
			cout<<"\nIntroduce un caracter: ";
			cin>> caracter;
			mi_secuencia.Aniade(caracter);
		}
		
		
		
		while(numero_letras < 26){
			letra=letra+1;
			abecedario[numero_letras]=letra;
			numero_letras++;
		}
		
		
		for(int i=0;i<26;i++){
			mi_secuencia.IncrementaConteo(abecedario[i]);
			cout<<"\n"<<abecedario[i]<< "  --->  " << mi_secuencia.Contador(i);
			
		}
		
		system("pause");
	}
	
