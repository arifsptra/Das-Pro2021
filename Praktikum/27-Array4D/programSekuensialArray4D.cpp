#include <iostream>

using namespace std;

int main(){
    // Kamus
    int arrNilai[3][3][3][3];
    int i, j, k, l;
    // Algoritma
    // Input
    cout << "Masukkan Nilai: " << endl;
    for (i = 0; i < 2; i++){
        for(j=0; j < 3; j++){
            for(k=0; k < 3; k++){
                for(l=0; l < 3; l++){
                    cin >> arrNilai[i][j][k][l];
                }
            }
        }
    }
    // Output
    cout << "Nilai Yang Anda Masukkan: " << endl;
    for(i=0; i < 2; i++){
        for(j=0; j < 3; j++){
            for(k=0;k<3;k++){
                for(l=0; l < 3; l++){
                    cout << arrNilai[i][j][k][l] << " " ;
                }
                cout << endl;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}