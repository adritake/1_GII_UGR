/* Clase en la cual se calcula el capital obtenido en un numero de años y los años que tienen que pasar para que se tenga el doble de de capital
Hecho por Adrian de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>

using namespace std;

class DepositoSimulacion{
	private:
		
		double capital;
		int interes,anios;

	public:
		
		DepositoSimulacion(){
			capital=0;
			interes=0;
			anios=1;
		}
		
		
		void SetCapital(double nuevo_capital){
			
			if(nuevo_capital>=0)
				capital=nuevo_capital;
		}
		
		void SetInteres(double nuevo_interes){
		
			if(nuevo_interes>=0 && nuevo_interes<=100)
				interes=nuevo_interes;
		}
		
		void SetAnios(double nuevos_anios){
			anios=nuevos_anios;
		}
		
		
		double CapitalFinal(){
			
			int i;
			for(i=1;i<=anios;i++){
				capital=capital + capital* ( interes/(100*1.0) );
			}
			
			return capital;
		}
		
		double DoblarCapital(){
			
			double tope_capital;
			int j;
			j=0;
			tope_capital = capital *2;
			
			while(capital <= tope_capital ){
				capital=capital+capital*(interes/(100*1.0));
				j++;
				
			}
			
			return j;
		}
		
	};
	
	
	int main() {
		
		DepositoSimulacion mi_capital;
		
		double interes,capital,anios;
		
		cout<<"Introduce el capital: ";
		cin>>capital;
		cout<<"Introduce el interes: ";
		cin>>interes;
	   cout<<"Introduce el numero de anios: ";
	   cin>>anios;
	   
	   mi_capital.SetCapital(capital);
	   mi_capital.SetInteres(interes);
	   mi_capital.SetAnios(anios);
	   
	   
	   cout<<"\nAl cabo de "<<anios<<" anios tendra: "<<mi_capital.CapitalFinal();
	   cout<<"\nTienen que pasar "<< mi_capital.DoblarCapital()<<" anios para doblar el capital.";
	   
	   system("pause");
	   
	}
