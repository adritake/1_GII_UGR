#include <iostream>
using namespace std;

int main(){
   int entero;
   char caracter1, caracter2;
   
   cout << "\nVoy a leer un entero y dos char y los voy a imprimir en pantalla\n";
	cout << "\nSi vas a introducir los datos desde teclado, sepáralos con un espacio en blanco\n";
   cin >> entero;
   cin >> caracter1;
   cin >> caracter2;
   
   cout << "\n\nEntero   -> " << entero << " <-" ;
   cout << "\nCaracter -> " << caracter1 << " <-";
   cout << "\nCaracter -> " << caracter2 << " <-";
   cout << "\n\n";
   system("pause");
}
 
