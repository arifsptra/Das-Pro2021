#include <iostream>

using namespace std;

int main(){

    // Deklarasi Tipe Data Variabel
    int nilai1, nilai2;

    // Input Nilai 1
    printf("Masukkan Nilai 1: ");
    scanf("%d", &nilai1);

    // Input Nilai 2
    printf("Masukkan Nilai 2: ");
    scanf("%d", &nilai2);

    // Cara 1 - Menggunakan Variabel Penampung
    // int nilaiX;
    // nilaiX = nilai1;
    // nilai1 = nilai2;
    // nilai2 = nilaiX;

    // Cara 2 - Menggunakan Operator XOR
    // nilai1 ^= nilai2;
    // nilai2 ^= nilai1;
    // nilai1 ^= nilai2;

    // Cara 3 - Menggunakan Operator Aritmatika
    nilai1 += nilai2;
    nilai2 = nilai1 - nilai2;
    nilai1 -= nilai2;
    // Cetak Hasil
    printf("Nilai 1: %d \nNilai 2: %d", nilai1, nilai2);

    return 0;
}