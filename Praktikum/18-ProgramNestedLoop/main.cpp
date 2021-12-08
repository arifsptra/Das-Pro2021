#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
             n++;
            if(n%2==0){
                cout << n ;
            }
            else {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}
