#include <iostream>

using namespace std;

int main(){
    // Deklarasi Tipe Data
    int n, i;
    // Input Jumlah Nilai Yang Ingin Diinput
    cout << "Masukkan Jumlah Angka: ";
    cin >> n;
    // Deklarasi Tipe Data
    int arrNilai[n], arrHasil[n];

    // Perulangan Masukkan Nilai
    for(i=0;i<n;i++){
        cout << "Masukkan Nilai Ke-1 index " << i+1 << " : ";
        cin >> arrNilai[i];
    }

    // Perulangan Perkalian
    for(i=0;i<n;i++){
        arrHasil[i] = arrNilai[i] * 2;
    }

    // Menampilkan Hasil Penjumlahan Nilai1 + Nilai2
    for(i=0;i<n;i++){
        cout << "Hasil Perkalian Nilai * 2 index ke " << i+1 << " : " << arrHasil[i] << endl;
    }

    return 0;
}