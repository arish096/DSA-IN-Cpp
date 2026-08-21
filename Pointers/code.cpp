#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* ptr = &a; 

    int** parPtr = &ptr; 

    cout << &ptr << endl;
    cout << parPtr << endl;
    return 0;
}