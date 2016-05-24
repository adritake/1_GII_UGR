/* Prgrama para calcular progresiones geometricas usando clases
Hecho por Adrián de la Torre Rodriguez 1ºA grupo A1
*/

#include <iostream>
#include <cmath>

using namespace std;

class Progresion{
	private:
		double a1,ak,r,k;
		
	public:
		
		Progresion(){
			k=1;
			r=1;
			a1=1;
			ak=1;
		}
		
		
		void setValores(double valor_a1,double valor_ak,double valor_r,double valor_k){
			
			a1=valor_a1;
			ak=valor_ak;
			r=valor_r;
			k=valor_k;
			
		
		}
		
		
		double getk(){
			return k;
		}
		
		double SumaHasta(){
			double sumahasta;
			
			sumahasta= a1 * ( pow (r,k)-1 )/  ( (r-1)*1.0 );
			
			return sumahasta;
		}
		
		double SumaHastaInfinito(){
			double suma_infinito;
			
			suma_infinito= (a1 * 1.0) / (1-r);
			
			return suma_infinito;
		}
		
		double MultiplicaHasta(){
			double multiplica;
			
			multiplica= sqrt( pow(a1*ak,k) );
			
			return multiplica;
		}
		
	};
	
	
	int main () {
		
		Progresion una_progresion;
		double valor_a1,valor_ak,valor_r,valor_k;
		
		cout<<"Introduzca el primer valor de la progresion: ";
		cin>>valor_a1;
		cout<<"Introduzca el ultimo valor de la progresion: ";
		cin>>valor_ak;
		cout<<"Introduzca el valor r: ";
		cin>>valor_r;
		cout<<"Introduzca el valor k: ";
		cin>>valor_k;
		
		una_progresion.setValores(valor_a1,valor_ak,valor_r,valor_k);
		
		cout<<"\nLa suma hasta el valor "<<valor_ak<<" es: "<< una_progresion.SumaHasta();
		
	}
		
		
		
		
			
