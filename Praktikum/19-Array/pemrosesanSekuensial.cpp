#include <iostream>
using namespace std;

int main(){
    // Kamus
    int i, arr[5]; // Deklarasi
    
    // Nunggu selesai input baru nilai ditampilkan
    // Input
    for(i = 0; i < 5; i++){
        cout << "Masukkan Nilai: ";
        cin >> arr[i];
    }
    // Output
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    // Setelah input langsung ditampilkan nilainya
    for(i = 0; i < 5; i++){
        cout << "Masukkan Nilai: ";
        // Input
        cin >> arr[i];
        // Output
        cout << arr[i] << endl;
    }
    return 0;
}