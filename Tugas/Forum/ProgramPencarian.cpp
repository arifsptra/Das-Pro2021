#include <iostream>

using namespace std;

int main()
{
    cout << "NIM    : A11.2021.13480 \n";
    cout << "Nama   : Arif Saputra \n";
    cout << "Kelas  : 4105 \n\n";

    // Deklarasi
    int arrNilai[10] = {12,55,4,2,2,3,4,20,10,11};
    int i, j, cariData, jumlahData, indexData[jumlahData], nilaiTerbesar, nilaiTerkecil;
    j = 0;
    jumlahData = 0;

    // Menampilkan Array
    for(i=0;i<10;i++){
        cout << arrNilai[i] << " " ;
    }

    // Input Cari Data
    cout << "\n\nCari Data: ";
    cin >> cariData;

    // Program Mencari Jumlah Data
    for(i=0;i<10;i++){
        if(cariData == arrNilai[i]){
            jumlahData++;
        }
        // Program Mencari Index Data
        if(cariData == arrNilai[i]){
            for(j;j<jumlahData;j++){
                indexData[j] = i;
            }
        }
    }
    // Menampilakan Nilai Data yang dicari dan Jumlah Data yang Sama dari Nilai Data
    cout << cariData << " Ketemu Sejumlah: " << jumlahData << ", Pada index: ";
    // Menampilan Index Data
    for(i=0; i<jumlahData; i++){
        cout << indexData[i] << " ";
    }

    // Program Mencari Nilai Terbesar dan Terkecil
    nilaiTerbesar = arrNilai[0];
    nilaiTerkecil = arrNilai[0];
    for(i=0;i<10;i++){
        if(arrNilai[i] > nilaiTerbesar){
            nilaiTerbesar = arrNilai[i];
        }
        if(arrNilai[i] < nilaiTerkecil){
            nilaiTerkecil = arrNilai[i];
        }
    }
    // Menampilan Nilai Terbesar dan Terkecil
    cout << "\nNilai Terbesar: " << nilaiTerbesar << endl;
    cout << "NIlai Terkecil: " << nilaiTerkecil << endl;

    return 0;
}
