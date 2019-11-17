#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    // 1. initialize
    vector<int> v1(5, 0);
    // 2. make a copy
    vector<int> v2(v1.begin(), v1.end());
    vector<int> v3(v2);
    // 2. cast an array to a vector

    // 3. get length
    cout << "The size of v1 is: " << v1.size() << endl;
    // 4. access element
    cout << "The first element in v1 is: " << v1[0] << endl;
    // 5. iterate the vector
    cout << "[Version 1] The contents of v1 are:";
    for (int i = 0; i < v1.size(); ++i) {
        cout << " " << v1[i];
    }
    cout << endl;
    return 0;
}