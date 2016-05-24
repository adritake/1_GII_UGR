/* Metodos para saber que cuadrado tiene mayor area y para saber si un cuadrado contiene a otro
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>
#include<cmath>

using namespace std;

class Punto2D{
private:
	double abscisa;
	double ordenada;
public:
	void SetPunto(double nueva_abscisa,double nueva_ordenada){
		abscisa=nueva_abscisa;
		ordenada=nueva_ordenada;
	}
	
	double Abscisa(){
		return abscisa;
	}
	double Ordenada(){
		return ordenada;
	}
		

};

class Circunferencia{
private:
	double centro_x;
	double centro_y;
	double radio;
	bool EsCorrectoRadio(double valor_radio){
		return valor_radio > 0;
	}
public:
	
	void SetCentro(double abscisa, double ordenada){
		centro_x = abscisa;
		centro_y = ordenada;
	}
	void SetRadio(double el_radio){
		if (EsCorrectoRadio(el_radio))
			radio = el_radio;
	}
	double GetAbscisaCentro(){
		return centro_x;
	}
	double GetOrdenadaCentro(){
		return centro_y;
	}
	double GetRadio(){
		return radio;
	}
	double Longitud(){
		return 2*3.1416*radio;
	}
	double Area(){
		return 3.1416*radio*radio;
	}
	void Traslada(double en_horizontal, double en_vertical){
		centro_x = centro_x + en_horizontal;
		centro_y = centro_y + en_vertical;
	}
};
	

class SegmentoDirigido{
private:
	double x_1, y_1, x_2, y_2;

public:
	void SetCoordenadas(double origen_abscisa, double origen_ordenada,
							  double final_abscisa, double final_ordenada){
							  	
	x_1=origen_abscisa;
	y_1=origen_ordenada;
	x_2=final_abscisa;
	y_2=final_ordenada;
	
	}
	void SetOrigen(double origen_abscisa, double origen_ordenada){
		x_1=origen_abscisa;
		y_1=origen_ordenada;
	}
	void SetFinal(double final_abscisa, double final_ordenada){
		x_2=final_abscisa;
		y_2=final_ordenada;
	}
	double OrigenAbscisa(){
		return x_1;
	}
	double OrigenOrdenada(){
		return y_1;
	}
	double FinalAbscisa(){
		return x_2;
	}
	double FinalOrdenada(){
		return y_2;
	}
	
	double Longitud(){
		double longitud;
		longitud=sqrt(pow(x_2-x_1,2)+pow(y_2-y_1,2));
		return longitud;
	}
	
	void TrasladaHorizontal(double unidades){
		x_1=x_1+unidades;
		x_2=x_2+unidades;
	}
	
	void TrasladaVertical(double unidades){
		y_1=y_1+unidades;
		y_2=y_2+unidades;
	}
	void Traslada(double en_horizontal, double en_vertical){
		x_1=x_1+en_horizontal;
		x_2=x_2+en_horizontal;
		y_1=y_1+en_vertical;
		y_2=y_2+en_vertical;
	}

};

class Cuadrado{
private:
	Punto2D esquina;
	double longitud;
public:
	void SetEsquina(Punto2D punto){
		esquina=punto;
	}
	
	void SetLongitud(double nueva_longitud){
		longitud=nueva_longitud;
	}
	
	Punto2D Esquina(){
		return esquina;
	}
	
	double Longitud(){
		return longitud;
	}
	
	double Area(){
		double area;
		area=pow(longitud,2);
		return area;
	}
	
	double Perimetro(){
		double perimetro;
		perimetro=4*longitud;
		return perimetro;
	}
	
	SegmentoDirigido Lado1(){
		SegmentoDirigido lado1;
		
		lado1.SetOrigen(esquina.Abscisa(),esquina.Ordenada() );
		lado1.SetFinal(esquina.Abscisa()+longitud,esquina.Ordenada());
		
		return lado1;
	}
	
	SegmentoDirigido Lado2(){
		SegmentoDirigido lado2;
		
		lado2.SetOrigen(esquina.Abscisa(),esquina.Ordenada());
		lado2.SetFinal(esquina.Abscisa(),esquina.Ordenada()+longitud);
		
		return lado2;
	}

	SegmentoDirigido Lado3(){
		SegmentoDirigido lado3;
		
		lado3.SetCoordenadas(esquina.Abscisa(),esquina.Ordenada()+longitud,esquina.Abscisa()+longitud,esquina.Ordenada()+longitud);
		return lado3;
	}
	
	SegmentoDirigido Lado4(){
		SegmentoDirigido lado4;
		
		lado4.SetCoordenadas(esquina.Abscisa()+longitud,esquina.Ordenada(),esquina.Abscisa()+longitud,esquina.Ordenada()+longitud);
		return lado4;
	}
	
	Punto2D Centro(){
		Punto2D centro;
		centro.SetPunto(esquina.Abscisa()+longitud/2.0,esquina.Ordenada()+longitud/2.0);
		return centro;
	}

	Circunferencia CircuferenciaInscrita(){
		Circunferencia circunferencia_ins;
		
		circunferencia_ins.SetCentro(Centro().Abscisa(),Centro().Ordenada());
		circunferencia_ins.SetRadio(longitud/2.0);
	
		return circunferencia_ins;
	}
	
	Circunferencia CircunferenciaCircunscrita(){
		Circunferencia circunferencia_cir;
		SegmentoDirigido radio;
		
		
		circunferencia_cir.SetCentro(Centro().Abscisa(),Centro().Ordenada());
		radio.SetOrigen(Centro().Abscisa(),Centro().Ordenada());
		radio.SetFinal(esquina.Abscisa(),esquina.Ordenada());
		
		circunferencia_cir.SetRadio(radio.Longitud());
		
		return circunferencia_cir;
	}
	
	
	bool Mayor(Cuadrado cuadrado_introducido){
		
		bool mayor;
		if(cuadrado_introducido.Area() >= Cuadrado().Area() )
			mayor=true;
		else
			mayor=false;
			
		return mayor;
	}
	
	
	bool Contiene(Cuadrado cuadrado_introducido){
	
		bool contiene;
		
		if( cuadrado_introducido.Esquina().Abscisa() >= Esquina().Abscisa()  && 	(cuadrado_introducido.Esquina().Abscisa() + cuadrado_introducido.Longitud()) <= (Esquina().Abscisa() + Longitud())
			&& cuadrado_introducido.Esquina().Ordenada() >= Esquina().Ordenada() && (cuadrado_introducido.Esquina().Ordenada() + cuadrado_introducido.Longitud()) <= (Esquina().Ordenada() + Longitud()))
			
			contiene=true;
		else
			contiene=false;
		
		return contiene;
	}
};

int main(){
	
	Cuadrado cuadrado1,cuadrado2;
	Punto2D esquina1,esquina2;
	
	esquina1.SetPunto(4,4);
	cuadrado1.SetEsquina(esquina1);
	cuadrado1.SetLongitud(5);
	
	esquina2.SetPunto(5,5);
	cuadrado2.SetEsquina(esquina2);
	cuadrado2.SetLongitud(2);
	
	if(cuadrado1.Contiene(cuadrado2))
		cout<<"El cuadrado 1 contiene al cuadrado 2";
	else
		cout<<"El cuadrado1 no contiene al cuadrado 2";
		
	system("pause");
}
