#include <iostream>
using namespace std;

int main (){
	int L[5],i,k,temp;
	
	L[0]=1;
	L[1]=50;
	L[2]=10;
	L[3]=3;
	L[4]=2;
	
	//Proses secara Ascending (naik)
	for(i=0; i<=4; i++){
		for(k=4; k>=0; k--){
			if (L[k]<L[k-1]){
				temp=L[k];
				L[k]=L[k-1];
				L[k-1]=temp;
			}
		}
	}
	cout<<"Hasil urut ascending ;\n";
	for(i=0; i<=4; i++)
	cout<<L[i]<<endl;
	return 0;
}
