#include <iostream>

using namespace std;

int main()
{
    // Nama : Arif Saputra
    // NIM  : A11.2021.13480

    // Tampilan Awal Program
    masukanpin:
    cout << "-----------------------------------------------" << endl;
    cout << "|>>>>>>>>>>Selamat Datang di ATM 'C'<<<<<<<<<<|" << endl;
    cout << "-----------------------------------------------" << endl;

    // Program
    int pin, saldo, menu, tarik;
    bool i=true;
    char konfirmasi;
    pin = 123456;
    saldo = 1000000;
    cout << "Masukan PIN Anda       : ";
    cin >> pin;

    while(i==true) {
        if(pin == 123456){
            cout << "===============================================" << endl;
            cout << "----------------------MENU---------------------" << endl;
            cout << "===============================================" << endl;
            cout << "|1. 100000                 5. 1000000         |" << endl;
            cout << "|2. 200000                 6. jumlah lain     |" << endl;
            cout << "|3. 500000                 7. informasi saldo |" << endl;
            cout << "|4. 800000                 8. keluar          |" << endl;
            cout << "|---------------------------------------------|" << endl;
            cout << "Masukan Pilihan = ";
            cin >> menu;
            switch(menu){
                case 1: saldo = saldo - 100000;
                    cout << "anda melakukan penarikan 100000\n";
                    cout << "Sisa saldo Anda = "<< saldo << endl;
                    cout << "Terima kasih atas kunjungan Anda\n";
                    cout << "Apakah anda ingin menarik uang lagi (y/n) ";
                    cin >> konfirmasi ;
                    break;
                case 2: saldo = saldo - 200000;
                    cout << "anda melakukan penarikan 200000\n";
                    cout << "Sisa saldo Anda = "<< saldo << endl;
                    cout << "Terima kasih atas kunjungan Anda\n";
                    cout << "Apakah anda ingin menarik uang lagi (y/n) ";
                    cin >> konfirmasi ;
                    break;
                case 3: saldo = saldo - 500000;
                    cout << "anda melakukan penarikan 500000\n";
                    cout << "Sisa saldo Anda = "<< saldo << endl;
                    cout << "Terima kasih atas kunjungan Anda\n";
                    cout << "Apakah anda ingin menarik uang lagi (y/n) ";
                    cin >> konfirmasi ;
                    break;
                case 4: saldo = saldo - 800000;
                    cout << "anda melakukan penarikan 800000\n";
                    cout << "Sisa saldo Anda = "<< saldo << endl;
                    cout << "Terima kasih atas kunjungan Anda\n";
                    cout << "Apakah anda ingin menarik uang lagi (y/n) ";
                    cin >> konfirmasi ;
                    break;
                case 5: saldo = saldo - 1000000;
                    cout << "anda melakukan penarikan 1000000\n";
                    cout << "Sisa saldo Anda = "<< saldo << endl;
                    cout << "Terima kasih atas kunjungan Anda\n";
                    cout << "Apakah anda ingin menarik uang lagi (y/n) ";
                    cin >> konfirmasi ;
                    break;
                case 6: saldo;
                    cout << "Maksimal Tarik Tunai 1250000\n";
                    cout << "Jumlah uang yang Anda Ambil\n";
                    cin >> tarik ;
                    if(tarik>=saldo){
                        cout << "Saldo Anda tidak mencukupi, silahkan ulangi kembali\n";
                        cout << "Terima kasih atas kunjungan Anda\n";
                        cout << "Apakah anda ingin menarik uang lagi (y/n) ";
                        cin >> konfirmasi ;
                    }else if(tarik<=saldo && tarik%50000==0){
                        saldo = saldo - tarik;
                        cout << "anda melakukan penarikan " << tarik << endl;
                        cout << "Sisa saldo Anda = "<< saldo << endl;
                        cout << "Terima kasih atas kunjungan Anda\n";
                        cout << "Apakah anda ingin menarik uang lagi (y/n) ";
                        cin >> konfirmasi ;
                    }else {
                        cout << "Tarik Tunai harus kelipatan 50000\n";
                    }
                    break;
                case 7: saldo;
                    i=false;
                    cout << "Sisa saldo Anda = " << saldo << endl;
                    cout << "Terima kasih atas kunjungan Anda\n";
                    break;
                case 8: i=false;
                    cout << "Anda keluar dari sistem\n";
                    cout << "Terima kasih atas kunjungan Anda\n";
            }
            // Jika pengunjung tidak ingin mengambil uang lagi
            if(konfirmasi == 'n'){
                i=false;
                cout << "\nAnda keluar dari sistem\n";
                cout << "Terima kasih atas kunjungan Anda\n";
            }
        }else {
            cout << "\nPIN Anda salah, silahkan ulangi kembali\n\n";
            goto masukanpin;
        }
    }



    return 0;
}
