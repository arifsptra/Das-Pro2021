#include <iostream>

using namespace std;

int main(){
    // Deklarasi Tipe Data
    int n, i;
    // Input Jumlah Nilai Yang Ingin Diinput
    cout << "Masukkan Jumlah Angka: ";
    cin >> n;
    // Deklarasi Tipe Data
    int arrNilai1[n], arrNilai2[n], arrHasil[n];

    // Perulangan Masukkan Nilai 1
    for(i=0;i<n;i++){
        cout << "Masukkan Nilai Ke-1 index " << i+1 << " : ";
        cin >> arrNilai1[i];
    }
    
    // Perulangan Masukkan Nilai 2
    for(i=0;i<n;i++){
        cout << "Masukkan Nilai Ke-2 index " << i+1 << " : ";
        cin >> arrNilai2[i];
    }

    // Perulangan Penjumlahan Nilai1 + Nilai2
    for(i=0;i<n;i++){
        arrHasil[i] = arrNilai1[i] + arrNilai2[i];
    }

    // Menampilkan Hasil Penjumlahan Nilai1 + Nilai2
    for(i=0;i<n;i++){
        cout << "Hasil Penjumlahan Nilai1 + Nilai2 index ke " << i+1 << " : " << arrHasil[i] << endl;
    }

    return 0;
}