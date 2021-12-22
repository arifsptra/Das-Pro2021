#include <iostream>
#include <cstring>

using namespace std;

int main(){
    // Kamus
    int i[5];

    // Algoritma
    cout << sizeof(i) << endl;
    memset(i, 0, sizeof(i));
    cout << i[0] << endl;
    cout << i[1] << endl;
    cout << i[2] << endl;
    cout << i[3] << endl;
    cout << i[4] << endl;

    return 0;
}