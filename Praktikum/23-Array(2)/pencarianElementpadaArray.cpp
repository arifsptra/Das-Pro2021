#include <iostream>

using namespace std;

int main(){
    // Kamus
    int arrNilai[10] = {12,3,4,1,2,3,4,20,10,11};
    int i, k;
    char ket;

    // Algoritma
    cout << "Masukkan Nilai yang Anda Cari: ";
    cin >> k;
    ket = 't';
    for(i=0;i < 10; i++){
        if(k == arrNilai[i]){
            ket = 'y';
            break;
        }
    }
    if(ket == 'y'){
        cout << k << " Ditemukan";
    }else{
        cout << k << " Tidak Ditemukan";
    }
    return 0;
}