#include <iostream>

using namespace std;

int main()
{
    int arrNilai[10] = {12, 3, 4, 1, 2, 3, 4, 20, 10, 11};
    int i = 0, terbesar, terkecil;

    // Mencari Nilai Terbesar
    terbesar = arrNilai[0];
    terkecil = arrNilai[0];
    for(i; i < 10; i++){
        if(arrNilai[i] > terbesar){
            terbesar = arrNilai[i];
        }
        if(arrNilai[i] < terkecil){
            terkecil = arrNilai[i];
        }
    }
    cout << "Nilai Terbesar: " << terbesar << endl;

    cout << "Nilai Terkecil: " << terkecil << endl;

    return 0;
}
