#include <iostream>
using namespace std;

int main(){
    int *intPtr;
    intPtr = new int[4];
    *intPtr = 10;
    *(intPtr + 1) = 20;
    intPtr[2] = 30;
    intPtr[3] = 40;
    for (int *p = intPtr, i = 0; i < 4; i++){
        cout << *p << " ";
        p++;
    }
    cout << endl;
    delete[] intPtr;
    return 0;
}