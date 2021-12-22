#include <iostream>
#include <cstring>

using namespace std;

int main(){
    // Cara 1
    int a[3][2];
    a[0][0] = 1;
    a[0][1] = 2;
    a[1][0] = 3;
    a[1][1] = 4;
    a[2][0] = 5;
    a[2][1] = 6;

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << a[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;

    // Cara 2
    int b[3][2] = {1,2,3,4,5,6};

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << b[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;


    // Cara 3
    int c[][2] = {1,2,3,4,5,6};

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << c[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;

    // Cara 4
    int d[3][2];
    memset(d, 0, 6*sizeof(int));

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << d[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;

    // Cara 5
    int e[3][2] = {
        {1,2},{3,4},{5,6}
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << e[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}