#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main(int argc, char *argv[]){
	
	ifstream entrada;
	ofstream salida;
	int i=0;
	char c;
	
	
	
	entrada.open(argv[1]);
	if(!entrada){ 
		cout<<"Imposible abrir "<<argv[1]<<endl;
 		return 1;
	 }
	
	
	salida.open(argv[2]);
	
	if(!salida){ 
		cout<<"Imposible abrir "<<argv[2]<<endl;
		return 1;
	}
	
	
	
	while(entrada.get(c)){
		
		salida.put(c);
		
		if(c=='\n'){
			salida<<i<<" ";
			i++;
		
		}
		
		
	}
	
		
	if(!entrada.eof() || !salida){
		cout<<"La copia no ha tenido exito"<<endl;
		return 1;
	}
	
	entrada.close();
	salida.close();
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

