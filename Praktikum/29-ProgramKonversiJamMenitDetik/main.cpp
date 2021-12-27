#include <iostream>

using namespace std;

int main(){
    // Deklarasi Tipe Data
    int waktu, jam, sisaJam, menit, detik;

    // Cara 1 - Menggunakan Fungsi Standard C++
    // // Memasukkan Waktu
    // cout << "Masukkan Waktu: ";
    // cin >> waktu;

    // // Deklarasi Nilai
    // jam = waktu / (60*60);
    // sisaJam = waktu - ((60*60)*jam);
    // menit = sisaJam / 60;
    // detik = sisaJam - 60*menit;

    // Mencetak Hasil
    // cout << "Waktu " << waktu << " detik sama dengan " << jam << " jam " << menit << " menit " << detik << " detik" << endl;
    
    // Cara 2 - Menggunakan Fungsi Asli C
    // Memasukkan Waktu
    printf("Masukkan Waktu: ");
    scanf("%d", &waktu);

    // Deklarasi Nilai
    jam = waktu / (60*60);
    sisaJam = waktu - ((60*60)*jam);
    menit = sisaJam / 60;
    detik = sisaJam - 60*menit;

    // Mencetak Hasil
    printf("Waktu %d detik sama dengan %d jam %d menit %d detik", waktu, jam, menit, detik);

    return 0;
}