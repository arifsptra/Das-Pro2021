#include <iostream>

using namespace std;

int main(){
    // FPB Menggunakan Algoritma Euclidean
    // Deklarasi Tipe Data
    int nilaiA, nilaiB, nilaiSisa;

    // Input Nilai A
    printf("Masukkan Nilai A: ");
    scanf("%d", &nilaiA);

    // Input Nilai B
    printf("Masukkan Nilai B: ");
    scanf("%d", &nilaiB);   

    // Perulangan Mencari FPB
    while(nilaiB != 0){
        nilaiSisa = nilaiA % nilaiB;
        printf("%d Modulus %d: %d\n", nilaiA, nilaiB, nilaiSisa);
        nilaiA = nilaiB;
        nilaiB = nilaiSisa;
    }
    return 0;
}