#include <iostream>

using namespace std;

int main()
{
    // Program Validasi
    cout << "- Program Validasi - \n";
    // Kamus
    int a;

    // Algoritma
    cout << "Masukkan Nilai a : ";
    cin >> a;
    if(a>0){
        cout << "Valid";
    }
    else {
        cout << "Selesai Cek";
    }
    cout << endl;

    return 0;
}
