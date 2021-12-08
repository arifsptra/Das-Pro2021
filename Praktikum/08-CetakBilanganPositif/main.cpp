#include <iostream>

using namespace std;

int main()
{
    // Kamus
    int n;
    int i=1;

    // Algoritma
    cin >> n;

    // Version 1
    /*for(i;n>0;n--,i++){
        cout << i << endl;
    }*/

    // Version 2
    do{
        cout << i << endl;
        i++;
    }while(i<=n);
    return 0;
}
