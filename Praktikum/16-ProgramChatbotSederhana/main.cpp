#include <iostream>

using namespace std;

int main()
{
    // Kamus
    char belokKiri;

    // Algoritma
    do {
        cout << "Apa mau belok kiri? (y/n)" << endl;
        cin >> belokKiri;
    }while(belokKiri != 'y');
    cout << "Finish";
    return 0;
}
