#include <iostream>

using namespace std;

int main()
{
    int s;

    cout << "Masukkan Suhu = ";
    cin >> s;

    if(s<=0){
        cout << "Beku";
    }
    else if(s>100){
        cout << "Uap";
    }
    else{
        cout << "Cair";
    }
    return 0;
}
