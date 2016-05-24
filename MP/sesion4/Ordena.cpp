#include<iostream>

using namespace std;

void Ordena(const int *vp[], int Util){

	int *min=*vp[0],pos_min;

	if( Util != 0){

		for( int i =0; i<Util; i++){

			
			for( int j = i+1; j<Util; j++)
				if(*vp[j] < min){
					*min=*vp[j];
					pos_min=j;
				}

			int tmp = *vp[i];
			*vp[i] = *min;
			*vp[pos_min]= tmp;
		}
	}
}	

void OrdenaProfe(const int *v[], int Util_v){

			
