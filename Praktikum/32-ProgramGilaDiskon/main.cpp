#include <iostream>

using namespace std;

int main(){
    // Deklarasi Tipe Data
    int totalBelanja, totalBayar, totalDiskon;
    string diskon;

    // Input Total Belanja
    printf("Masukkan Jumlah Belanja: ");
    scanf("%d", &totalBelanja);

    // Jika Belanja Lebih dari 1000000 Mendapat Diskon 10%
    if(totalBelanja > 1000000){
        totalDiskon = totalBelanja * 10 / 100;
        totalBayar = totalBelanja - totalDiskon;
        printf("Selamat Anda Mendapat Diskon Sebesar 10 Persen ");
    }else if(totalBelanja > 500000 && totalBelanja <= 1000000){
        totalDiskon = totalBelanja * 5 / 100;
        totalBayar = totalBelanja - totalDiskon;
        printf("Selamat Anda Mendapat Diskon Sebesar 5 Persen ");
    }else {
        totalBayar = totalBelanja;
    }

    // Menampilakan Jumlah Yang Harus Dibayar
    printf("\nTotal Belanja Yang Harus Anda Bayar: %d \n", totalBayar);
}