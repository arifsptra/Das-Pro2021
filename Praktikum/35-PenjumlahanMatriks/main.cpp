#include <iostream>

using namespace std;

int main() {
    // Deklarasi Tipe Data
    int row, col, i, j;
    // Input Jumlah Baris
    cout << "Masukkan Jumlah Baris : ";
    cin >> row;
    // Input Jumlah Kolom
    cout << "Masukkan Jumlah Kolom : ";
    cin >> col;

    // Deklarasi Tipe Data Matrix (Array)
    int nilai1[row][col], nilai2[row][col], nilaiHasil[row][col];

    // Perulangan Masukkan Nilai 1
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout << "Masukkan Nilai 1 : ";
            cin >> nilai1[i][j]; 
        }
    }

    // Perulangan Masukkan Nilai 2
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout << "Masukkan Nilai 2 : ";
            cin >> nilai2[i][j]; 
        }
    }

    // Perulangan Penjumlahan Nilai1 + Nilai2
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            nilaiHasil[i][j] = nilai1[i][j] + nilai2[i][j];
        }
    }

    // Perulangan Menampilkan Hasil
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout << nilaiHasil[i][j] << " ";
        }
    }
}