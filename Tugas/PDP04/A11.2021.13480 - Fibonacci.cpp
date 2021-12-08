#include <iostream>

using namespace std;

int main()
{
    int i, n, f1, f2, fn;
    f1 = 0;
    f2 = 1;
    fn = 0;
    cout << "Masukkan panjang deret fibonaci : ";
    cin >> n;

    for(i=1; i <= n; i++){
        if(i==1){
            cout << " " << f1 << " ";
            continue;
        }
        if(i==2){
            cout << f2 << " ";
            continue;
        }
        fn = f1+f2;
        f1 = f2;
        f2 = fn;
        cout << fn << " ";
    }
    return 0;

}
