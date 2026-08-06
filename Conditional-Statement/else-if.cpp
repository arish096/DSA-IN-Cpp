#include <iostream>
using namespace std;

int main () {
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;
    
    if(marks >= 90){
        cout << "grade A\n";
    } else if (marks >= 80 && marks <= 90){
        cout << "Grade B\n";
    } else if (marks >= 70 && marks <= 80){
        cout << "Grade C \n";
    } else{
        cout << "Grade D \n";
    }
    return 0;
}