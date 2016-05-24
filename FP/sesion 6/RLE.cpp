/* Programa para codificar una serie de numeros por el metodo RLE
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>
#include<cmath>

using namespace std;

int main () {
	
	long int serie,primer_digito,num_digitos,digito,dato,cantidad,i;
	bool primera_vez;
	
	cout<<"Introduce una serie de numeros, para acabar introduzca un numero negativo: ";
	cin>> serie;
		
	dato=serie;
		
	do{ 															//Bucle para saber cuantos digitos tiene la serie de numeros
		dato = dato/10;
		num_digitos++;
	}while(dato!=0);
	
	
	primera_vez=true;                               //Esta variable sirve para arreglar un problema que me surgia
																	//La primera cantidad de numeros me la ponia bien pero las siguientes ponia uno menos
	do{
	
	primer_digito = serie / pow(10,num_digitos-1); // Estas operaciones sirven para poner fin al bucle de mas abajo
	digito = primer_digito;
	
	if(primera_vez)											//Este condicional sirve para arreglar el problema que he dicho antes
		cantidad=-1;
	else
		cantidad=0;
		
		while(primer_digito==digito){						//Bucle que va repitiendose hasta que el digito actual es distinto al anterior
		
		digito = serie / pow(10,num_digitos-1);           
		serie = serie - digito * pow(10,num_digitos-1);  
		num_digitos--;                                 
		cantidad++;
		
		}
	
	primera_vez=false;										//Esto hace que el condicional del problema mencionado sea false
	cout<<cantidad<<primer_digito;	        			//Cadavez que se repite el bucle principal imprime la cantidad de numeros y el numero
	
	}while (num_digitos>=1);
	
	
		
	
	
	
	
	
	system("pause");

}
