#include <iostream>

using namespace std;

int main()
{
    int a,b,nilai;

    cout << "Masukkan Nilai A = ";
    cin >> a;
    cout << "Masukkan Nilai B = ";
    cin >> b;
    nilai = (a>=b)?a:b;
    cout << nilai;
    return 0;
}
