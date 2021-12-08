#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int p;
    masukkanpin:
    cout << "Masukkan Pin = ";
    cin >> p;
    if(p==123456){
        cout << "Login Berhasil\n";
    }else if(p!=123456){
        if(a<2){
            a++;
            goto masukkanpin;
        }else{
            cout << "Nomor anda Terblokir\n";
        }
    }
    cout << "Finish";
    return 0;
}
