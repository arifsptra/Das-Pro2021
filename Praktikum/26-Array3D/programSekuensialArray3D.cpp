#include <iostream>

using namespace std;

int main(){
    // Kamus
    int arrNilai[3][3][3];
    int i, j, k;
    // Algoritma
    // Input
    cout << "Masukkan Nilai: " << endl;
    for (i = 0; i < 2; i++){
        for(j=0; j < 3; j++){
            for(k=0; k < 3; k++){
                cin >> arrNilai[i][j][k];
            }
        }
    }
    // Output
    cout << "Nilai Yang Anda Masukkan: " << endl;
    for(i=0; i < 2; i++){
        for(j=0; j < 3; j++){
            for(k=0;k<3;k++){
                cout << arrNilai[i][j][k] << " " ;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}