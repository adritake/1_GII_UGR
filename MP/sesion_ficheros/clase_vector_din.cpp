#include <iostream>
#include <fstream>

using namespace std;

class MiArrayDin_int
{
   private:
     int *vd;
     int util_vd;

   public:
     MiArrayDin_int ();
     ~MiArrayDin_int ();

     int Size ();

     void Clear ();

     void Push_Back ( int x );
     void Pop_Back ();
   
     int Get ( int indice );
     void Set ( int x, int indice );
};

////////////////////////////////////////////////////
void OrdenacionPorSeleccion( MiArrayDin_int &v )
{
        int pos_min, aux;

        for (int i = 0; i < v.Size(); i++)
        {
             pos_min=i;

             for (int j = i+1; j < v.Size(); j++)
                 if ( v.Get(j) < v.Get(pos_min) )
                      pos_min=j;

             aux = v.Get(i);
             v.Set ( v.Get(pos_min), i );
             v.Set ( aux, pos_min);
        }
}

////////////////////////////////////////////////////
int main()
{
     MiArrayDin_int v;
     int x;
     ifstream inData;

     inData.open("fich_random.txt");
     
     for(int i=0; i<=1000; i++){
	inData >>x;
	v.Push_Back(x);
     }

     for(int i=0; i<=1000; i++){
	cout<< v.Get(i) << endl;
     }
     

	inData.close();
    
     

     
     

}

////////////////////////////////////////////////////
MiArrayDin_int::MiArrayDin_int (): vd(0), util_vd(0) {}

MiArrayDin_int::~MiArrayDin_int ()
{
     if ( util_vd > 0 )
        delete [] vd;
}

int MiArrayDin_int::Size ()
{
     return util_vd;
}

void MiArrayDin_int::Clear ()
{
     if ( util_vd > 0 )
        delete [] vd;

     vd = 0;

     util_vd = 0;
}

void MiArrayDin_int::Push_Back ( int x )
{
    int *vd_ampliado = new int[ util_vd + 1 ];

    for (int i= 0; i<util_vd; i++)
        vd_ampliado[i] = vd[i];

    delete [] vd;

    vd = vd_ampliado;

    vd[util_vd] = x;

    util_vd ++;
}

void MiArrayDin_int::Pop_Back ()
{
    if ( util_vd > 0 )
    {
        int *vd_ampliado = new int[ util_vd - 1 ];

        for (int i= 0; i<util_vd; i++)
            vd_ampliado[i] = vd[i];

        delete [] vd;

        vd = vd_ampliado;

        util_vd --;
    }
}

int  MiArrayDin_int::Get ( int indice )
{
     if ( 0 <= indice && indice < util_vd )
        return vd[indice];
}

void MiArrayDin_int::Set ( int x, int indice )
{
     if ( 0 <= indice && indice < util_vd )
        vd[indice] = x;
}



 
