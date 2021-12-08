#include <iostream>

using namespace std;

int main()
{
    int x;
    string nilai;
    cout << "Masukkan Nilai X = ";
    cin >> x;

    nilai =((x==2 || x==3)||(x%2!=0 && x%3!=0))?"Bilangan Prima":"Bukan Bilangan Prima";
    cout << nilai;
    return 0;
}
