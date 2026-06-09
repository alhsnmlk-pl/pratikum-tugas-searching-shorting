#include <iostream>
using namespace std;

int main (){
    int array[12] = {0, 8, 1, 2, 5, 2, 8, 7, 8, 3, 5, 0};
    int i, k, temp;
    int target, A, K, Z;
    
    cout << "nomor HP (Belum diurutkan) : ";
    for(i=0; i<=11; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
    
    for(i=0; i<=11; i++){
        for(k=11; k>=i+1; k--){
            if (array[k] < array[k-1]){
                temp = array[k];
                array[k] = array[k-1];
                array[k-1] = temp;
            }
        }
    }
    
    cout << "hasil urut ascending : ";
    for(i=0; i<=11; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
    
    cout << "masukkan nilai angka yang dicari : ";
    cin >> target;
    
    A = 0;
    Z = 11;
    
    while(A <= Z){
        K = (A + Z)/2;
        
        if(target > array[K])
            { A = K + 1; }
        else if(target < array[K])
            { Z = K - 1; }
        else
            { A = Z + 1; }
    }
    
    if(target == array[K])
        { cout << "data ditemukan di index ke : " << K << endl; }
    else
        { cout << "data tidak ditemukan" << endl; }
        
    return 0;
}
