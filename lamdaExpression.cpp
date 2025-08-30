#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> v1, v2;

    // Capture v1 and v2 by reference
    auto byRef = [&] (int m) {
        v1.push_back(m);
        v2.push_back(m);
    };
    
    // Capture v1 and v2 by reference instead of value to modify outer vectors
    // auto byVal = [&] (int m) {
    //     v1.push_back(m);
    //     v2.push_back(m);
    // };
    
    // Capture v1 by reference and v2 by reference
    // auto mixed = [&v1, &v2] (int m) {
    //     v1.push_back(m);
    //     v2.push_back(m);
    // };

    // Push 20 in both v1 and v2
    byRef(20);
    
    // Push 234 in both v1 and v2
    // byVal(234);
    
    // Push 10 in both v1 and v2
    // mixed(10);
    
    print(v1);
    print(v2);
    
    return 0;
}