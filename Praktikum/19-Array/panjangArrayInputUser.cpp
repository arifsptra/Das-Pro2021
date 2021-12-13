#include <iostream>
using namespace std;

int main(){
    // Kamus
    int i, n;
    cout << "Masukkan Panjang Array: ";
    cin >> n;
    int arr[n];
    // Algoritma
    // Setelah input langsung ditampilkan nilainya
    for(i = 0; i < n; i++){
        cout << "Masukkan Nilai Array: ";
        cin >> arr[i];
        cout << arr[i] << endl;
    }
    return 0;
}