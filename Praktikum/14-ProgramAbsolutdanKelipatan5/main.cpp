#include <iostream>

using namespace std;

int main()
{
    // Kamus
    int a;

    // Algoritma
    cout << "Masukkan Nilai A : ";
    cin >> a;
    if(a<0){
        a = a*-1; // Jika nilai a kurang dari 0 maka akan dikalikan -1
    }
    if(a%5==0){
        cout << "Hore ketemu bilangan kelipatan 5";
    }else{
        cout << "Yah... bukan bilangan kelipatan 5";
    }

    return 0;
}
