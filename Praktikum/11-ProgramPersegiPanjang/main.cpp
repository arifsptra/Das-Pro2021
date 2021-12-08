#include <iostream>

using namespace std;

int main()
{
    // Kamus
    float p, l, hasilKeliling, hasilLuas;

    //algoritma
    cout << "Masukkan Nilai Panjang Lingkaran = ";
    cin >> p;

    cout << "Masukkan Nilai Luas Lingkaran = ";
    cin >> l;

    hasilKeliling = 2 * (p + l);
    cout << "Hasil Keliling = " << hasilKeliling << endl;

    hasilLuas = p * l;
    cout << "Hasil Luas = " << hasilLuas << endl;

    return 0;
}
