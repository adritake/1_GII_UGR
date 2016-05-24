#include <iostream>
#include <cmath>
using namespace std;

class Complejo
{
    private:
        double real;
        double imag;
        
    public:
        Complejo();
        
        Complejo(double re, double im);

        void AsignarReal(double re);
        
        void AsignarImag(double im);
        
        double ParteReal();

        double ParteImag();
     
        double Modulo();

        Complejo Suma(const Complejo &c1);
	friend istream &operator>>(istream &is, Complejo &f);
        friend ostream &operator<<(ostream &os, const Complejo &f);

};

istream &operator>>(istream &is, Complejo &c)
   {
      

      is >> c.real >> c.imag;


      return is;
   }

   ostream &operator<<(ostream &os, const Complejo &c)
   {
       os << c.real <<" "<<  c.imag;
       return os;
   }

//..............................................................................
int main ()
{

Complejo comp;

cout<<"Introduce el numero complejo:"<<endl;
cin>> comp;

cout<<"El numero complejo es: "<< comp<< endl;


}

//..............................................................................
        Complejo::Complejo()
            : real(0), imag(0)
        {} 
        
        Complejo::Complejo(double re, double im)
            : real(re), imag(im)
        {}

        void Complejo::AsignarReal(double re)
        {
             real = re;
        }
        
        void Complejo::AsignarImag(double im)
        {
            imag = im;
        }
        
        double Complejo::ParteReal()
        {
            return real;
        }

        double Complejo::ParteImag()
        {
            return imag;
        }
     
        double Complejo::Modulo()
        {
            return sqrt(real*real + imag*imag);
        }

        Complejo Complejo::Suma(const Complejo &c1)
        {
            Complejo salida;
            
            salida.real = real + c1.real;
            salida.imag = imag + c1.imag;
            
            return salida;
        }

 
