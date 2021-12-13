#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // Kamus
    int i;
    string hari[7];

    // Algoritma
    // Inisialisasi Nilai i
    i = 0;
    // Input Hari
    while(i<7){
        cout << "Hari " << i+1 << " : ";
        cin >> hari[i];
        i++;
    }
    // Reset Nilai i
    i = 0;
    // Output Hari
    while(i<7){
        cout << "Hari " << hari[i] << endl;
        i++;
    }
}