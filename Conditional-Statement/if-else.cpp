#include <iostream>
using namespace std;

int main () {
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if(age >= 18){
        cout << " You can vote \n";
    } else {
        cout << "You cannot vote \n";
    }

    return 0;
}