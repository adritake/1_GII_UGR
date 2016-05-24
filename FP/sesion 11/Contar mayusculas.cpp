/* Programa que cuenta cada una de las mayusculas que aparaece en una serie de caracteres
Hecho por Adrían de la Torre Rodríguez 1ºA grpo A1
*/

#include<iostream>

using namespace std;

int main () {
	const int NUMERO_LETRAS_ABECEDARIO=26;
	char vector[50];
	char abecedario[NUMERO_LETRAS_ABECEDARIO];
	int contador_mayuscula[NUMERO_LETRAS_ABECEDARIO]; 
	char caracter,letra;
	int total_utilizados,i,j,numero_letras;
	
	numero_letras=0;
	letra='A'-1;
	while(numero_letras <= NUMERO_LETRAS_ABECEDARIO){
		letra=letra+1;
		abecedario[numero_letras]=letra;
		numero_letras++;
	}
		
	for(i=0;i<NUMERO_LETRAS_ABECEDARIO;i++){
		
		contador_mayuscula[i]=0;
		
	}
	
	
	total_utilizados=0;
	caracter='a';
	while(caracter != '.'){
		cout<<"\nIntroduce un caracter: ";
		cin>>caracter;
		vector[total_utilizados]=caracter;
		total_utilizados++;
	}
	
	for(i=0;i<total_utilizados;i++){
		for(j=0;j<NUMERO_LETRAS_ABECEDARIO;j++){
			if(vector[i]==abecedario[j])
				contador_mayuscula[j]++;
		}
	}
	
	j=0;
	for(i=0;i<NUMERO_LETRAS_ABECEDARIO;i++){
		cout<<"\n"<<abecedario[i]<< "  --->  " <<contador_mayuscula[j];
		j++;
	}
	
	cout<<"\n\n";
	system("pause");
	
}
		
	
	
	
	
		
