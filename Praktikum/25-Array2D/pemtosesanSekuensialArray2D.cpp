#include <iostream>

using namespace std;

int main(){
    // Kamus
    int arrNilai[2][3];
    int i, j;
    // Algoritma
    // Input
    cout << "Masukkan Nilai: " << endl;
    for (i = 0; i < 2; i++){
        for(j=0; j < 3; j++){
            cin >> arrNilai[i][j];
        }
    }
    // Output
    cout << "Nilai Yang Anda Masukkan: " << endl;
    for(i=0; i < 2; i++){
        for(j=0; j < 3; j++){
            cout << arrNilai[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}