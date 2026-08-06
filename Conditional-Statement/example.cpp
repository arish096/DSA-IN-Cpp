#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if(n%2 == 0) {
        cout << "It is even number \n";
    } else {
        cout << "It is odd number \n";
    }
    return 0;
}