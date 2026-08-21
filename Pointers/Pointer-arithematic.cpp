#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int a = 10; 
    int* ptr = &a;

    cout << ptr << endl;
    ptr--;
    cout << ptr << endl;

    return 0;
}