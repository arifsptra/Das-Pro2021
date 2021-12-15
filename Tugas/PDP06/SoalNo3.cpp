#include <iostream>

using namespace std;

int main()
{
    int i, n, f1, f2;
    f1 = 0;
    f2 = 1;
    cout << "Masukkan panjang deret fibonaci : ";
    cin >> n;
    int fa[n];

    for(i=1; i <= n; i++){
        if(i==1){
            fa[i] = f1;
        }
        if(i==2){
            fa[i] = f2;
        }
        else if(i>2){
            fa[i] = f1 + f2;
            f1 = f2;
            f2 = fa[i];
        }
    }
    for(i=1; i <= n; i++){
        cout << fa[i] << " ";
    }
    return 0;
}
