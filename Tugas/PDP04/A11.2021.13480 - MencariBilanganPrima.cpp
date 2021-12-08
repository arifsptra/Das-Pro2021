#include <iostream>

using namespace std;

int main()
{
    int i, j, n, m;

    cout << "Masukkan nilai awal : ";
    cin >> n;
    cout << "Masukkan nilai akhir : ";
    cin >> m;

    for(i=n, j=m; i<=j; i++){
        if((i==2 || i==3 || i==5 || i==7)||(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i!=1)){
            cout << i << endl;
        }
    }

    return 0;
}
