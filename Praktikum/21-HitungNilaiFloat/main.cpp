#include <iostream>
using namespace std;

int main(){
    // Kamus
    int i, n;
    float sum;
    cout << "Masukkan Panjang Nilai: ";
    cin >> n;
    float nilai[n];

    // Algoritma
    // Inisialisasi Nilai i
    i = 0;
    while (i < n) {
        cout << "Masukkan Nilai: ";
        cin >> nilai[i];
        i++;
    }
    // Reset Nilai i
    i = 0;
    // Inisialisasi Nilai sum
    sum = 0.0f;
    // Penjumlahan Nilai 
    while(i < n){
        sum = sum + nilai[i];
        i++;
    }
    // cout << "Hasil: " << sum << endl;
    cout << "Hasil: " << sum/n << endl;
    return 0;
}