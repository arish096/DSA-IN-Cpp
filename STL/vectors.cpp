#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(4);

    cout << "Size = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;

    cout << "Elements: ";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    cout << "Element at index 2 (using at): " << vec.at(2) << endl;
    cout << "Front element: " << vec.front() << endl;
    cout << "Back element: " << vec.back() << endl;

    vec.insert(vec.begin() + 1, 100);
    cout << "After insert: ";
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    vec.erase(vec.begin() + 1);
    cout << "After erase: ";
    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    vec.pop_back();
    cout << "After pop_back: ";
    for(auto rit = vec.rbegin(); rit != vec.rend(); rit++) {
        cout << *rit << " ";
    }
    cout << endl;

    cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    vec.clear();
    cout << "Size after clear = " << vec.size() << endl;
    cout << "Capacity after clear = " << vec.capacity() << endl;

    return 0;
}