/* Programa para calcular si un numero es feliz, dando el valor del numero y el grado maximo de calculos (k)
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	int numero,numero_copia,numero_copia2,digitos,copia_digitos,grado,k,cifra,suma; //Declaracion de las variables que necesito y sus copias para no perder informacion
	bool feliz;
	
	cout<<"Introduce el numero: ";
	cin>>numero;
	cout<<"Introduce el grado: ";
	cin>>grado;
	
	numero_copia=numero;												//Hago dos copias del numero introducido
	numero_copia2=numero;
	
	while(numero_copia!=0){											//Bucle para saber cuantos digitos tiene el numero
			
			numero_copia=numero_copia/10;
			digitos++;
			
	}
	copia_digitos=digitos;											//Tambien copio el resultado
	
	suma=numero;
	
	for(k=0; k < grado && !feliz ; k++){ 						//Bucle que se repite como maximo el numero del grado que hemos puesto o hasta que encontremos que el numero es feliz
	
	
		if(suma!=1){													//Si la suma anterior no es igual a 1(no es feliz) 
			
			
			numero_copia2=suma;										//Al valor del numero le asignamos la suma anterior para poder realizar operaciones sobre el
			suma=0;														//Se le asigna cero para que la primera suma que realicemos no se vea afectada
			while( numero_copia2 >0 ){								//Bucle que separa el numero actual en cifras y cada cifra que tiene la eleva al cuadrado y la suma a la anterior
				
				
				
				cifra = numero_copia2 / pow(10,digitos-1);   
				numero_copia2 =numero_copia2 - cifra * pow(10,digitos-1);  
				digitos--;
				
				
				suma=suma+pow(cifra,2);
				
			}
			digitos=copia_digitos-1;	
		}
		
		else{																//Si encontramos una suma cuyo resultado es 1, el numero es feliz y indico el grado a partir del que es feliz
			cout<<"\nEl numero es feliz en grado " <<k;
			feliz=true;
		}
	}
	
	if(!feliz)															//Condicional para cuando salgamos del bucle sin encontrar que es feliz
		cout<<"\nEl numero no es feliz.";
	
	system("pause");
	
}
	
