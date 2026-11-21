#include <iostream>
using namespace std;

int main(){
	int HargaBarang [5] = {2000, 30000, 50000, 35000, 22000};
	int temp = HargaBarang[4];
	
	for (int i = 0 ; i < 5 ; i++){
		if(temp > HargaBarang[i]){
			temp = HargaBarang[i];
		}
	} cout<<"Nilai:"<< temp;
}
