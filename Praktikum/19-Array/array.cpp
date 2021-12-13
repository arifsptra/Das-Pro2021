#include <iostream>
#include <cstring>
using namespace std;

// Array Asignment
int main(){
    // Array Asignment Version 1
    int a[4] = {1,2,3,4};
    cout << a[1] << endl;

    // Array Asignment Version 2
    int b[4] = {1};
    cout << b[3] << endl;

    // Array Asignment Version 3
    int c[] = {1,2,3,4};
    cout << c[11] << endl;

    // Array Asignment Version 4
    int d[4];
    d[0] = 1;
    d[1] = 2;
    d[2] = 3;
    d[3] = 4;
    // d[4] = 5;
    cout << d[3] << endl;

    // Array Asignment Version 5
    int e[4];
    memset(e, 0, 4*sizeof(int));
    cout << e[0] << e[1] << e[2] << e[3] << e[4] << e[5] << endl;
}
