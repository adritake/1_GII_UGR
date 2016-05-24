/* Programa para codificar el nombre de una persona
Hecho por Adrián de la Torre Rodríguez 1ºA grupo A1
*/

#include<iostream>
#include<string>


using namespace std;

class Login{

private:
	int num_caracteres_a_coger;

public:
	void SetCaracteres(int numero){
		num_caracteres_a_coger=numero;
	}
	string Codifica(string nombre_completo){
		
		string usuario;
		int tope=nombre_completo.size();
		for(int i=0;i<tope; ){
			
			for(int j=i;j<=num_caracteres_a_coger;j++){
				
				usuario.push_back(nombre_completo[j]);
			}
			
			while(nombre_completo[i] != ' '){
				i++;
			}
		}
	
	return usuario;
	}
	
};

int main(){
	
	Login mi_usuario;
	string nombre;
	string usuario;
	
	mi_usuario.SetCaracteres(3);
	
	getline(cin,nombre);
	
	
	cout<<mi_usuario.Codifica(nombre);
	system("pause");
}
			
