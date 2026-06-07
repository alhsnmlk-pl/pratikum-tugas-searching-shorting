#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int L[12] = {0, 8, 1, 2, 5, 2, 8, 7, 8, 3, 5, 0};
    int n = 12;
    int i, k, temp;
    int target;
    int A, Z, K;
    int ketemu = 0;

    cout << "Data nomor HP sebelum diurutkan : ";
    for(i = 0; i < n; i++){
        cout << setw(4) << L[i];
    }

    cout << endl;

    for(i = 0; i < n; i++){
        for(k = n - 1; k > i; k--){
            if(L[k] < L[k - 1]){
                temp = L[k];
                L[k] = L[k - 1];
                L[k - 1] = temp;
            }
        }
    }

    cout << "Data nomor HP setelah diurutkan : ";
    for(i = 0; i < n; i++){
        cout << setw(4) << L[i];
    }

    cout << endl;
    cout << "Masukkan angka yang dicari : ";
    cin >> target;

    A = 0;
    Z = n - 1;

    while(A <= Z){
        K = (A + Z) / 2;

        if(target == L[K]){
            ketemu = 1;
            break;
        }
        else if(target < L[K]){
            Z = K - 1;
        }
        else{
            A = K + 1;
        }
    }

    if(ketemu == 1){
        cout << "Angka " << target << " ditemukan" << endl;
        cout << "Angka berada di index ke : ";

        for(i = 0; i < n; i++){
            if(L[i] == target){
                cout << i << " ";
            }
        }
    }
    else{
        cout << "Data tidak ditemukan.";
    }

    return 0;
}
