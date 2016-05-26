#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc,char *argv[]){
	
	ifstream entrada(argv[1]);
	ofstream salida(argv[2]);
	int parametro=(int)*argv[3]-'0';
	string modo=argv[4];
	char c;
	

	if(argc<=4){
		
		cout<<"Uso: codifica <ficheroE> <ficheroS> <p> <tipo>.";
		return 1;
	}
	
	if(!entrada){ 
		cout<<"Imposible abrir "<<argv[1]<<endl;
 		return 1;
	 }
	
	
	if(!salida){ 
		cout<<"Imposible abrir "<<argv[2]<<endl;
		return 1;
	}
	
	
	if(modo=="desenc"){
		cout<<"Desncriptando...";
		parametro=parametro -2*parametro;
	}
	
	while(entrada.get(c)){
			
		if(c>='a' && c<='z' || c>='A' && c<='Z'){
				
			
			salida.put(c + parametro);
		}
		else
			salida.put(c);
	}
	
	entrada.close();
	salida.close();
}
		
		
	
	
	

