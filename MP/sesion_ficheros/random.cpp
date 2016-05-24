#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	
	ofstream outData;
	const int MY_MAX_RAND = 1000;
	time_t t;
	
	if(argc < 2)
		cout<<"Uso: <fichero>";

	else{
		srand ((int) time(&t));
	
		outData.open(argv[1]);	

		for (int i=0; i<1000; i++){
			outData << (int)(1.0*(MY_MAX_RAND+MY_MAX_RAND+1)*rand()/(RAND_MAX+1.0) - MY_MAX_RAND )<<endl;
		
		}

		outData.close();
	}
}
