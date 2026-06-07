#include<iostream>
using namespace std;
int main(){
int target;
int array[8] = {23,19,17,15,12,7,6,2};
int A, K, Z;
cout << "Masukkan nilai yang dicari : ";
cin >> target;
A = 0;
Z = 7;
    while(A <= Z){
        K = (A + Z)/2;
        if(target < array[K])
            { A = K + 1; }
        else if(target > array[K])
            { Z = K - 1; }
        else
            { A = Z + 1; }
    }
    if(target == array[K])
        { cout << "Data ditemukan di index ke :"<< K << endl; }
    else
        { cout << "Data tidak ditemukan." << endl; }
}
