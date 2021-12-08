#include <iostream>

using namespace std;

int main()
{
    char c;
    int u;

    cout << "Apakah Anda Mahasiswa? (y/t) ";
    cin >> c;
    if(c=='y'){
        cout << "Masukkan Uang Saku Perbulan = ";
        cin >> u;
        if(u>100000){
            cout << "Mahasiswa Mampu";
        }
        else{
            cout << "Mahasiswa Kurang Mampu";
        }
    }
    else if(c=='t'){
        cout << "Bukan Mahasiswa";
    }
    return 0;
}
