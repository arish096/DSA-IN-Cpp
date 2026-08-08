#include <iostream>
using namespace std;

int MinOfTwo(int a, int b){
    if(a < b){
        return a;
    } else {
        return  b;
    }
}

int main() {
    cout << "Min = " <<MinOfTwo(20,10) << endl;

    return 0;
}