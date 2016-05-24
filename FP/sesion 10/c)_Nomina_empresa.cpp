/*Ejercicio 13 c)
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include <iostream>

using namespace std;

class Nomina{
private:
	double ingresos_totales,retencion_fabricante,retencion_disenador,parte_disenador,numero_fabricantes;
public:
	
	Nomina(){
		ingresos_totales=0;
		numero_fabricantes=1;
		parte_disenador=2;
	}
	
	
	void SetIngresos(double ingresos){
		ingresos_totales=ingresos;
	}
	void SetFabricantes(double fabricantes){
		numero_fabricantes=fabricantes;
	}
	void Set_Parte_Disenador(double parte_disenador_introducida){
		parte_disenador=parte_disenador_introducida;
	}
	void Set_Retencion_Disenador(double retencion_disenador_introducida){
		retencion_disenador=retencion_disenador_introducida;
	}
	void Set_Retencion_Fabricante(double retencion_fabricante_introducida){
		retencion_fabricante=retencion_fabricante_introducida;
	}
		
	
	
	
	double Disenador(){
		double salario_disenador,salario_neto;
		
		salario_neto= ingresos_totales * (1.0/parte_disenador);
		salario_disenador= salario_neto-salario_neto* retencion_disenador/100.0;
		
		return salario_disenador;
	}
	
	double Fabricante(){
		double salario_fabricante,salario_neto;
		
		salario_neto= ( (1-(1.0/parte_disenador)) * ingresos_totales) / (numero_fabricantes*1.0);
		salario_fabricante= salario_neto-salario_neto* retencion_fabricante/100.0;
		
		return salario_fabricante;
	}
	
};

int main(){
	
	Nomina una_nomina;
	int numero_sucursales,i;
	double ingresos,retencion_fabricante,retencion_disenador,numero_fabricantes,parte_disenador;
	
	cout<<"Leyendo datos del fichero....";
	
	cin>>numero_sucursales;
	
	for(i=1;i<=numero_sucursales;i++){
		
		cin>>ingresos;
		una_nomina.SetIngresos(ingresos);
		
		cin>>numero_fabricantes;
		una_nomina.SetFabricantes(numero_fabricantes);
		
		cin>>parte_disenador;
		una_nomina.Set_Parte_Disenador(parte_disenador);
		
		cin>>retencion_disenador;
		una_nomina.Set_Retencion_Disenador(retencion_disenador);
		
		
		cin>>retencion_fabricante;
		una_nomina.Set_Retencion_Fabricante(retencion_fabricante);
		
		
		cout<<"\nPara la sucursal " << i;
		cout<<"\nEl disenador cobra "<< una_nomina.Disenador();
		cout<<"\nCada fabricante cobra "<< una_nomina.Fabricante();
		
		
	}
	
	
	
	system("pause");
	
}

