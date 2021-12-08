#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan Nilai Anda : ";
    cin >> nilai;
    if(nilai>=85 && nilai<=100){
        cout << "A";
    }
    if(nilai>=70 && nilai<85){
        cout << "B";
    }
    if(nilai>=60 && nilai<70){
        cout << "C";
    }
    if(nilai>=50 && nilai<60){
        cout << "D";
    }
    if(nilai<50 && nilai>=0) {
        cout << "E";
    }
    return 0;
}
