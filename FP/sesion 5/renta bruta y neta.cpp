/* programa que lee los datos fiscales da una persona, reajusta su renta bruta
según un criterio
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main () {
	
	bool autonomo, pensionista, casado;
	double renta_bruta, renta_neta, retencion;
	char respuesta;
	
	cout<< "Introduzca su renta bruta: ";
	cin>> renta_bruta;
	cout<<"\nIntroduzca la retencion inicial: ";
	cin>> retencion;
	cout<< "\nEs usted autonomo?(S/N): ";
	cin>> respuesta;
	
	if(respuesta == 'S')
		autonomo = true;
	else
		autonomo = false;
		
	cout<< "\nEs usted pensionista?(S/N): ";
	cin>> respuesta;
	
	if(respuesta == 'S')
		pensionista = true;
	else
		pensionista = false;
		
	cout<<"\nEsta usted casado?(S/N): ";
	cin>> respuesta;
	
	if(respuesta == 'S')
		casado = true;
	else
		casado = false;
		
	cout<< "\nSu renta neta es: ";
	
	if(autonomo){
		retencion = retencion - retencion * 0.03;
		renta_neta = renta_bruta - renta_bruta * (retencion/100);
		cout<< renta_neta ;
	}
	
	
	if(pensionista){
		retencion = retencion + retencion * 0.01;
		renta_neta = renta_bruta - renta_bruta * (retencion/100);
		cout<< renta_neta;
	}
	
	if( !autonomo && !pensionista){
		retencion = retencion + retencion * 0.02;
		
		if (renta_bruta<20000){
			retencion = retencion + retencion * 0.06;
			renta_neta = renta_bruta - renta_bruta * (retencion/100);
			cout<< renta_neta;
		}
		if(casado && renta_bruta > 2000){
			retencion = retencion + retencion * 0.08;
			renta_neta = renta_bruta - renta_bruta * (retencion/100);
			cout<< renta_neta;
		}
		if(!casado && renta_bruta > 2000){
			retencion = retencion + retencion * 0.1;
			renta_neta = renta_bruta - renta_bruta * (retencion/100);
			cout<< renta_neta;
		}
		
	}
	
	
	system("pause");
}
