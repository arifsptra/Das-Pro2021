#include <iostream>

using namespace std;

int main()
{
        int i, j, bilangan1, bilangan2, fpb;

    cout << "Masukan Bilangan 1 : ";
    cin >> bilangan1;

    cout << "Masukan Bilangan 2 : ";
    cin >> bilangan2;

    cout << "Faktor dari " << bilangan1 << " : ";
    for(i=bilangan1;i>0;i--){
        if(bilangan1%i==0){
            cout<< i << " ";
        }
    }

    cout << "\nFaktor dari " << bilangan2 << " : ";
    for(j=bilangan2;j>0;j--){
        if(bilangan2%j==0){
            cout<< j << " ";
        }
    }

    while(bilangan1 != bilangan2){
        if(bilangan1 > bilangan2){
            bilangan1 = bilangan1 - bilangan2;
        }else {
            bilangan2 = bilangan2 - bilangan1;
        }
    }

    cout << "\nFPBnya adalah " << bilangan1;
    return 0;

}
