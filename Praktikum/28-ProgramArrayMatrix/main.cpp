#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    // Deklarasi
    string arrTeks[] = {"Tahun Lulus", "Prodi A", "Prodi B", "Prodi C", "Rata Rata Pertahun"};
    float arrData[5][5]={{2018, 50, 60, 35},{2019, 55, 62, 40},{2020, 52, 65, 37},{2021, 56, 65, 38}};
    int i, j;
    // Menampilkan Teks arrTeks
    for(i=0;i<5;i++){
        cout << arrTeks[i] <<  "            " ;
    }
    cout << endl;
    // Mencari Rata Rata Pertahun
    for(i=0;i<4;i++){
        for(j=1;j<4;j++){
            // Menjumlahkan Semua Nilai Prodi Per Baris
            arrData[i][4] += arrData[i][j];
        }
        // Jumlah Nilai dibagi Jumlah Prodi Per Baris
        arrData[i][4]/=3;
    }
    // Menampilkan Data array
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            cout << "     " << (int)arrData[i][j] << "            " ;
        }
        cout << endl;
    }
    cout << "Rata Rata Perprodi";
    // Mencari Rata Rata Perprodi
    for(i=1;i<5;i++){
        for(j=0;j<4;j++){
            arrData[5][i] += arrData[j][i];;
        }
        arrData[5][i]/=4;
    }
    for(i=1;i<4;i++){
        cout << "        " << (int)arrData[5][i] << "         " ;
    }
    return 0;
}

