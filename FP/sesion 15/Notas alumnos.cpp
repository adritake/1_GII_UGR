/* Clase para almacenar datos de alumnos y sus notas
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>

using namespace std;

class SecuenciaEnteros{
private:
	static  const  int  TAMANIO  =  50;
	int  vector_privado[TAMANIO];
	int  total_utilizados;
public:
	SecuenciaEnteros()
		:total_utilizados(0)        
	{    
	}

	int  TotalUtilizados(){
		return  total_utilizados;
	}

	void  Aniade(int  nuevo){
		if (total_utilizados  <  TAMANIO){
			vector_privado[total_utilizados]  =  nuevo;
			total_utilizados++;
		}
	}

	int Elemento(int  indice){
		return  vector_privado[indice];
	}
	
};

class SecuenciaCaracteres{
private:
	static  const  int  TAMANIO  =  50;
	char  vector_privado[TAMANIO];
	int  total_utilizados;
public:
	SecuenciaCaracteres()
		:total_utilizados(0)        
	{    
	}

	int  TotalUtilizados(){
		return  total_utilizados;
	}

	void  Aniade(char  nuevo){
		if (total_utilizados  <  TAMANIO){
			vector_privado[total_utilizados]  =  nuevo;
			total_utilizados++;
		}
	}
	
	char Elemento(int  indice){
		return  vector_privado[indice];
	}
	
	bool EstaSecuencia(SecuenciaCaracteres buscar){
		bool esta;
		int i;
		int j=0;
		
		
		
			for(i=0;i<buscar.TotalUtilizados() && j<total_utilizados;  ){
				if(buscar.Elemento(i)==vector_privado[j]){
					j++;
					i++;
				}
				else{
					j++;
					i=0;
				}
					
					
			}
			
			if(i==buscar.TotalUtilizados())
				esta=true;
			else
				esta=false;
				
			return esta;
		
	}
				
	
};

class Alumnos{
private:
	
	static const int ALUMNOS=50;
	SecuenciaCaracteres Nombre[ALUMNOS];
	SecuenciaEnteros Notas[ALUMNOS];
	int total_alumnos;
	
public:
	
	Alumnos()
		:total_alumnos(0)
	{
	}
	
	int TotalAlumnos(){
		return total_alumnos;
	}
	
	void AniadeAlumno(SecuenciaCaracteres alumno_nuevo){
		int i;
		for(i=0;i<alumno_nuevo.TotalUtilizados();i++)
			Nombre[total_alumnos].Aniade(alumno_nuevo.Elemento(i));
		total_alumnos++;
	}
	
	void ModificaNotas(SecuenciaEnteros notas_nuevas, int indice){
		
		if(indice<total_alumnos){
			int i;
			for(i=0;i<notas_nuevas.TotalUtilizados();i++)
				Notas[indice].Aniade(notas_nuevas.Elemento(i));
		}
	}
	
	SecuenciaCaracteres Alumno(int indice){
		if(indice<total_alumnos)
			return Nombre[indice];
		
	}
	
	SecuenciaEnteros NotasAlumno(int indice){
		if(indice<total_alumnos)
			return Notas[indice];
	}
	
	
					
	
	SecuenciaEnteros BuscaCaracteres( SecuenciaCaracteres caracteres){
		
		SecuenciaEnteros encontrados;
		int i;
		
		
		for(i=0;i<total_alumnos;i++){
			if(Nombre[i].EstaSecuencia(caracteres) ){
				encontrados.Aniade(i);
			}
			
		}
		
		return encontrados;
		
	}
	
	double Media(int indice){
		
		double media,suma;
		int i;
		
		if(Notas[indice].TotalUtilizados()!=0 && indice < total_alumnos){
			
			suma=0;
			for(i=0; i<Notas[indice].TotalUtilizados(); i++){
				suma=suma + Notas[indice].Elemento(i);
			}
			
			media= suma / (Notas[indice].TotalUtilizados() * 1.0);
		}
		else
			media=0;
			
		return media;
		
	}
			
	void IntercambiaAlumnos(int uno, int otro){
		
		SecuenciaCaracteres nombre_aux;
		SecuenciaEnteros notas_aux;
		
		if(uno<total_alumnos && otro<total_alumnos){
		
			nombre_aux=Nombre[uno];
			notas_aux=Notas[uno];
			
			Nombre[uno]=Nombre[otro];
			Notas[uno]=Notas[otro];
			
			Nombre[otro]=nombre_aux;
			Notas[otro]=notas_aux;
			
		}
		
	}
		
		
	void OrdenaAlumnos(){
		
			
		int izquierda,i;
		bool cambio;
		
		cambio=true;
		
		for(izquierda=0; izquierda<total_alumnos && cambio; izquierda++){
			
			cambio=false;
			
			for(i=total_alumnos-1; i>izquierda; i--){
				
				if(Media(i)<Media(i-1) ){
					IntercambiaAlumnos(i,i-1);
					cambio=true;
				}
			}
		}
	}

};

int main () {
	
	Alumnos mi_clase;
	SecuenciaCaracteres alumno1,alumno2,alumno3;
	SecuenciaEnteros notas1,notas2,notas3;
	
	
	alumno1.Aniade('A');
	alumno1.Aniade('n');
	alumno1.Aniade('a');
	alumno1.Aniade(' ');
	alumno1.Aniade('d');
	alumno1.Aniade('e');
	alumno1.Aniade(' ');
	alumno1.Aniade('G');
	alumno1.Aniade('o');
	alumno1.Aniade('b');
	alumno1.Aniade('e');
	alumno1.Aniade('r');
	
	notas1.Aniade(9);
	notas1.Aniade(7);
	notas1.Aniade(8);
	notas1.Aniade(9);
	
	
	alumno2.Aniade('S');
	alumno2.Aniade('e');
	alumno2.Aniade('r');
	alumno2.Aniade('g');
	alumno2.Aniade('i');
	alumno2.Aniade('o');
	alumno2.Aniade(' ');
	alumno2.Aniade('G');
	alumno2.Aniade('a');
	alumno2.Aniade('r');
	alumno2.Aniade('c');
	alumno2.Aniade('i');
	alumno2.Aniade('a');
	
	notas2.Aniade(3);
	notas2.Aniade(4);
	notas2.Aniade(2);
	
	
	alumno3.Aniade('D');
	alumno3.Aniade('a');
	alumno3.Aniade('v');
	alumno3.Aniade('i');
	alumno3.Aniade('d');
	alumno3.Aniade(' ');
	alumno3.Aniade('R');
	alumno3.Aniade('o');
	alumno3.Aniade('d');
	alumno3.Aniade('r');
	alumno3.Aniade('i');
	alumno3.Aniade('g');
	alumno3.Aniade('u');
	alumno3.Aniade('e');
	alumno3.Aniade('z');
	
	notas3.Aniade(5);
	notas3.Aniade(4);
	
	mi_clase.AniadeAlumno(alumno1);
	mi_clase.AniadeAlumno(alumno2);
	mi_clase.AniadeAlumno(alumno3);
	
	mi_clase.ModificaNotas(notas1, 0);
	mi_clase.ModificaNotas(notas2, 1);
	mi_clase.ModificaNotas(notas3, 2);
	
	cout<<"En la clase hay "<<mi_clase.TotalAlumnos()<<" alumnos.";
	
	cout<<"\n\nEl segundo alumno es:   ";
	
	for(int i=0;i<mi_clase.Alumno(1).TotalUtilizados(); i++){
		cout<<mi_clase.Alumno(1).Elemento(i);
	}
	
	cout<<"\nY sus notas son:   ";
	
	for(int i=0;i<mi_clase.NotasAlumno(1).TotalUtilizados(); i++){
		cout<<mi_clase.NotasAlumno(1).Elemento(i)<< "  ";
	}
	
	cout<<"\n\nLas posiciones de los alumnos cuyo nombre contiene 'er' son: ";
	
	SecuenciaCaracteres busca;
	
	busca.Aniade('e');
	busca.Aniade('r');
	
	for(int i=0; i<mi_clase.BuscaCaracteres(busca).TotalUtilizados();i++){
		cout<<mi_clase.BuscaCaracteres(busca).Elemento(i)<<"  ";
	}
	
	cout<<"\n\nSegun su media aritmetica, los alumnos son: ";
	
	mi_clase.OrdenaAlumnos();
	
	cout<<"\n";
	for(int i=0; i<mi_clase.Alumno(0).TotalUtilizados();i++){
		cout<<mi_clase.Alumno(0).Elemento(i);
	}
	cout<<"    media: "<<mi_clase.Media(0);
	cout<<"\n";
	
	for(int i=0; i<mi_clase.Alumno(1).TotalUtilizados();i++){
		cout<<mi_clase.Alumno(1).Elemento(i);
	}
	cout<<"    media: "<<mi_clase.Media(1);
	
	cout<<"\n";
	
	for(int i=0; i<mi_clase.Alumno(2).TotalUtilizados();i++){
		cout<<mi_clase.Alumno(2).Elemento(i);
	}
	cout<<"    media: "<<mi_clase.Media(2);
	
	system("pause");

}
	
	
	
	
	
	

			
