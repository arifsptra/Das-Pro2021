#include <iostream>

using namespace std;

int main()
{
    float ipk;

    cout << "Masukkan IPK = ";
    cin >> ipk;

    if(ipk>=3.5){
        cout << "Lulus";
    }
    else if(ipk<2.5){
        cout << "Tidak Lulus";
    }
    else {
        cout << "Dipertimbangkan";
    }

    return 0;
}
