/* Programa que simula la criba de Eratostenes
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>
#include<cmath>

using namespace std;

class Eratostenes{
private:
	int numero_maximo;
	int criba[100];
	int total_utilizados;
public:
	
	Eratostenes () {
		total_utilizados=0;
		int j=2;
		int i;
		for(i=0;i<100;i++){
			criba[i]=j;
			j++;
			total_utilizados++;
		}
		numero_maximo=10;
	
	}
	
	void SetNumero(int numero){
		numero_maximo=numero;
	}
	
	void Elimina (int posicion){
      
      if (posicion >= 0 && posicion < numero_maximo-2){
         

         for (int i = posicion ; i < numero_maximo-2 ; i++)         
            criba[i] = criba[i+1];

       	total_utilizados--;  
      }
	}
	int Posicion(int numero){
		int i=0;
		while(criba[i]!=numero){
			i++;
		}
		return i;
	}
	
	void CalculaHasta(int n){
		int j=2;
		int i;
		int multiplo;
		int eliminar;
		
		for(i=0;i<n;i++){
			for(j=2;j<sqrt(n);j++){
				multiplo=criba[i]*j;
				eliminar=Posicion(multiplo);
				Elimina(eliminar);
			}
		
		}
		total_utilizados=i;
	
	}
	
	int TotalCalculados(){
	
		return total_utilizados;
	}

	int Elemento(int indice){
		return criba[indice];
	}




};
	
	
int main(){
	Eratostenes mi_criba;
	int numero;
	
	cin>>numero;
	
	mi_criba.SetNumero(numero);
	mi_criba.CalculaHasta(numero);

	for(int i=0;i<mi_criba.TotalCalculados();i++){
		cout<<mi_criba.Elemento(i)<<"    ";
	}


}
			
			
		
		
