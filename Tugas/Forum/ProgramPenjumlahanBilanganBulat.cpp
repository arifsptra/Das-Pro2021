#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "Nama   : Arif Saputra" << endl;
    cout << "NIM    : A11.2021.13480" << endl;

    int bilanganBulat, i, digit, total=0;

    // Input bilangan bulat
    cout << "\nMasukkan Bilangan Bulat: ";
    cin >> bilanganBulat;

    // Mencari Panjang Bilangan Bulat
    stringstream ss;
    ss << bilanganBulat;
    string str = ss.str();

    for(i=0;i<str.length();i++){
        // digit = modulo 10 dari bilangan bulat
        digit = bilanganBulat % 10;
        // Cetak digit angka
        cout << digit;
        // Cetak Tanda +
        if(i>=0 && i < str.length()-1){
            cout << " + ";
        }
        // total ditambah dengan digit
        total += digit;
        // bilangan bulat dibagi 10
        bilanganBulat /= 10;
    }
    // Menampilkan total penjumlahan bilanganBulat
    cout << " = " << total << endl;

    return 0;
}
