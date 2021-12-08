#include <iostream>

using namespace std;

int main()
{
    float s;

    cout << "Masukkan Suhu = ";
    cin >> s;

    if(s<0){
        cout << "Beku";
    }
    else if(s==0){
        cout << "Beku-Cair";
    }
    else if(s>100){
        cout << "Uap";
    }
    else if(s==100){
        cout << "Cair-Uap";
    }
    else{
        cout << "Uap";
    }
    return 0;
}
