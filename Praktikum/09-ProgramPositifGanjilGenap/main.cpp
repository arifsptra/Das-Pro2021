#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Masukkan Nilai X = ";
    cin >> x;
    cout << "Masukkan Nilai Y = ";
    cin >> y;

    if(x>0){
        if(x%2==0){
            cout << x << " Bilangan Positif Genap" << endl;
        }
        else{
            cout << x << " Bilangan Positif Ganjil" << endl;
        }
    }
    else{
        cout << x << " Bukan Bilangan Positif" << endl;
    }
    if(y>0){
        if(y%2==0){
            cout << y << " Bilangan Positif Genap" << endl;
        }
        else{
            cout << y << " Bilangan Positif Ganjil" << endl;
        }
    }
    else{
        cout << y << " Bukan Bilangan Positif" << endl;
    }
    cout << "Finish";
    return 0;
}
