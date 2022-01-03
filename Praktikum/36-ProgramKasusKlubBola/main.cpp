// • Deskripsi: Pada kasus ini, diberikan suatu permasalahan terkait dengan club 
// Bola Semarang Chester (SC). SC merupakan klub bola yang unik, pasalnya dia 
// selalu menang di tahun-tahun ganjil. Pertanyaan: Buat program dengan 
// inputan tahun-tahun (bisa tahun genap atau ganjil) dan hitung berapa banyak 
// kemenangan yang didapatkan oleh club SC. 
// • Penjelasan Input: Batas tahun yang akan diinputkan dan sejumlah input array 
// dari integer yang di pisah oleh spasi yang merepresentasikan tahun.
// • Penjelasan Output: integer jumlah kemenangan club SC dari sejumlah input 
// tahun yang masukkan oleh user.

#include <iostream>

using namespace std;

int main() {
    // Deklarasi Tipe Data
    int i, n, sum;
    // Input Panjang Array
    cout << "Masukkan Panjang Input: ";
    cin >> n;
    // Deklarasi Tipe Data Array
    int arrClub[n];

    // Perulangan Memasukkan Tahun
    i = 0;
    sum = 0;
    while(n--){
        cout << "Masukkan Tahun: ";
        cin >> arrClub[i];
        if(arrClub[i]%2 == 1){
            sum++;
        }
        i++;
    }
    cout << "Jumlah : " << sum ;
}