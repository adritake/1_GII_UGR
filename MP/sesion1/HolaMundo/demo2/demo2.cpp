#include <iostream>

int suma (int a, int b);
int resta (int a, int b);
int multiplica (int a, int b);
int divide (int a, int b);

using namespace std;


int main () {
   int a, b;

   cout <<"Introduce el primer valor: ";
   cin >> a;

   cout <<"Introduce el segundo valor: ";
   cin >> b;

   cout <<"suma("<< a <<", "<< b <<") = "<< suma(a,b) << endl;
   cout <<"resta("<< a <<", "<< b <<") = "<< resta(a,b) << endl;
   cout <<"multiplica("<< a <<", "<< b <<") = "<< multiplica(a,b) << endl;
   cout <<"divide("<< a <<", "<< b <<") = "<< divide(a,b) << endl;
   return 0;
}

int suma (int a, int b) {
   return a + b;
}

int resta (int a, int b) {
   return a - b;
}

int multiplica (int a, int b) {
   return a * b;
}

int divide (int a, int b) {
   return a / b;
}
