#include <iostream>

using namespace std;

int main()
{
    // Kamus
    int a;

    // Algoritma
    cout << "Masukkan Nilai a : ";
    cin >> a;

    if((a%2==0)||(a>2)){
        cout << a << " adalah bilangan genap lebih dari 2";
    }
    else {
        cout << "Selesai Cek";
    }

    return 0;
}
