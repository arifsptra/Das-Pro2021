#include <iostream>

using namespace std;

int main()
{
    // Kata Kata Instruksi
    cout << "-------------------- Selamat Datang di Restoran Kami --------------------\n";
    // Loncatan Goto
    menu:
    cout << "--------------- Ini adalah Menu yang ada di Restoran Kami ---------------\n";
    cout << "-------------------------------------------------------------------------\n";
    cout << " Makanan                             |   Minuman\n";
    cout << "  1. Bakso          = Rp.15000       |    1. Kopi Item      = Rp.5000\n";
    cout << "  2. Soto           = Rp.8000        |    2. Teh            = Rp.3500\n";
    cout << "  3. Mie Ayam       = Rp.11000       |    3. Soju           = Rp.50000\n";
    cout << "  4. Pecel          = Rp.8000        |    4. Bir Pletok     = Rp.10000\n";
    cout << "  5. Sate           = Rp.20000       |    5. Air Mineral    = Rp.2500\n";
    cout << "-------------------------------------------------------------------------\n";
    cout << "--- Silahkan Pilih Makanan & Minuman Sesuai Nomor Urut di Menu ya Kak ---\n\n";

    // Variabel
    int makanan;
    int minuman;
    string namamakanan;
    string namaminuman;
    int total;

    // Program Input Untuk User
    cout << "Makanan Dipilih = ";
    cin >> makanan;
    cout << "Minuman Dipilih = ";
    cin >> minuman;

    // Program makanan dan minuman
    if(makanan<=5 && minuman<=5){
        switch(makanan){
            case 1: makanan=15000;
                namamakanan="Bakso      ";
                break;
            case 2: makanan=8000;
                namamakanan="Soto       ";
                break;
            case 3: makanan=11000;
                namamakanan="Mie Ayam   ";
                break;
            case 4: makanan=8000;
                namamakanan="Pecel      ";
                break;
            case 5: makanan=20000;
                namamakanan="Sate       ";
                break;
            }
        switch(minuman){
            case 1: minuman=5000;
                namaminuman="Kopi Item  ";
                break;
            case 2: minuman=3500;
                namaminuman="Teh        ";
                break;
            case 3: minuman=50000;
                namaminuman="Soju       ";
                break;
            case 4: minuman=10000;
                namaminuman="Bir Pletok ";
                break;
            case 5: minuman=2500;
                namaminuman="Air Mineral";
                break;
            }
        total = makanan + minuman;
        cout << "Total Bayar     = Rp."<< total << endl << endl;

        // Variabel
        char pesanan;
        // Program y/n
        cout << "Pesanan Sudah Benar? (y/n) ";
        cin >> pesanan;
        if(pesanan=='y'){
            cout << "Pesanan : \n" << namamakanan << " = Rp." << makanan << endl << namaminuman << " = Rp." << minuman << "\nTotal       = Rp." << total <<endl;
        }else{
            goto menu;
        }
    }else{
        cout << "\nMaaf Kak, Nomor yang kakak pilih tidak ada di Menu\n";
        cout << "Tolong Perhatikan Nomor Menu dengan Baik ya Kak.\n\n";
        goto menu;
    }

    return 0;
}
