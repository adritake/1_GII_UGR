#include <iostream>
using namespace std;

struct Celda
{
     int info;
     Celda *sig;
};

class MiLista
{
  private:
    Celda *l;
    bool Vacia();

  public:
     MiLista();
     ~MiLista();
     void Push_first (int x);
     void Pop_first();
     void InsertaFinal(int valor);
     void BorraFinal();
     void Ordena();
     void OrdenaProfe()

     friend istream &operator>>(istream &is, MiLista &lista);
     friend ostream &operator<<(ostream &os, MiLista &lista);
};

////////////////////////////////////////////////////////////////////////////////

int main ()
{
     MiLista lista;
     int dato;

     cout << "Introducir elementos (x1, ..., xi, ... 0): ";
     cin >> lista;

     cout << "La lista es: " << lista << endl;

     lista.BorraFinal();
     cout<<"La lista sin el ultimo elemento es: " << lista << endl;

     cout<<"Introduce un elemento para insertar al final de la lista: ";
     cin>> dato;

     lista.InsertaFinal(dato);
     cout << "La lista es: " << lista << endl;

     lista.OrdenaProfe();
     cout << "La lista ordenada es: " << lista << endl;


}

///////////////////////////////////////////////////////////////
MiLista::MiLista() : l(0) {}

MiLista::~MiLista()
{
    while ( !Vacia() )
          Pop_first ();

}

bool MiLista::Vacia()
{
     return l == 0;
}

void MiLista::Push_first (int x)
{
     Celda *nuevo;

     nuevo = new Celda;
     nuevo->info = x;
     nuevo->sig = l;
     l = nuevo;
}

void MiLista::Pop_first()
{
     Celda *p;

     if (l != 0)
     {
	      p = l;
	      l = l->sig;
	      delete p;
     }
}

void MiLista::InsertaFinal(int valor)
{
	
	Celda *p;	

	if(l==0){
		l=new Celda;
		l->sig=0;
		l->info=valor;
	}
	else{
		p=l;
		while(p->sig != 0){
			p=p->sig;
		}
		
		p->sig=new Celda;
		p=p->sig;
		p->info=valor;
		p->sig=0;
		
	}
}

void MiLista::BorraFinal()
{

	Celda *p,*p_ant;

	if(l != 0){
		
		p=l;
		
		while(p->sig != 0){
			p_ant=p;
			p=p->sig;
		}
		if ( p==l){
			delete l;
			l=0;
		}
		else{
			delete p;
			p_ant->sig=0;
		}

	}
}

void MiLista::Ordena()
{

	Celda *escritura = l, *lectura = l->sig, *punt_minimo=0, *intercambio;
	int minimo = l->info,aux;
	bool ordenado = false;

	if(l != 0){
		
		
		while(escritura->sig !=0){

			lectura=escritura->sig;
			punt_minimo=escritura;

			while(lectura->sig != 0){
			
				if(lectura->info < minimo){
					minimo=lectura->info;
					punt_minimo=lectura;
				}
				lectura=lectura->sig;
			}
		

			aux=escritura->info;
			escritura->info=minimo;
		
			intercambio=escritura->sig;

			while(intercambio!=punt_minimo){
				intercambio=intercambio->sig;
			}
		
			intercambio->info=aux;

			escritura=escritura->sig;
		}
	}
}

void MiLista::OrdenaProfe()
{

	Celda *pmin;

	if( l != 0){

		for( Celda *p =l; p->sig !=0; p=p->sig){

			pmin=p;
			for( Celda *q = p->sig; q->sig !=0; q= q->sig)
				if(pmin->info > q->info)
					pmin=q;

			int tmp = pmin->info;
			pmin->info = p->info;
			p->info = tmp;
		}
	}
}			
		
		




// Sobrecarga de cin ...
istream &operator>>(istream &is, MiLista &lista)
{
     int x;

     is >> x;
     while (x != 0)
     {
         lista.Push_first(x);
         is >> x;
     }

     return is;
}

// Sobrecarga de cout ...
// ¡ Podemos acceder a los datos privados de MiLista porque es friend !
ostream &operator<<(ostream &os, MiLista &lista)
{
     Celda *p=lista.l;
     while (p != 0)
     {
	    os << p->info << ' ';
	    p = p->sig;
     }

      return os;
}
 
