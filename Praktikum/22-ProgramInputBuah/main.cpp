#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // Kamus
    int i;
    string buah[5], confirm;

    // Algoritma
    // Inisialisasi Nilai i
    ulang:
    i = 0;
    // Input Buah
    while(i<5){
        cout << "Masukkan Buah " << i+1 << " : ";
        cin >> buah[i];
        i++;
    }
    // Reset Nilai i
    i = 0;
    // Output Buah
    while(i<5){
        cout << "Buah " << buah[i] << endl;
        i++;
    }
    cout << "Apakah daftar buah sudah benar? (Ya/Tidak) ";
    cin >> confirm;
    if(confirm == "Ya"){
        cout << "Terima kasih sudah melakukan konfirmasi pesanan buah!";
    }else {
        goto ulang;
    }
}