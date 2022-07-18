#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    vector<int> a = {0, 1, 2, 3, 4};
    // Add some code here to access and print elements of a.
    cout << a[0] << "\n";
    cout << a[1] << "\n";
    cout << a[2] << "\n";
    cout << a[3] << "\n";
    cout << a[4] << "\n";  // end of range
    cout << a[5] << "\n";  // 0
    cout << a[6] << "\n";  // 1041
    cout << a[7] << "\n";  // 0
    cout << a[8] << "\n";  // 825494064
    cout << a[9] << "\n";  // 909128761
    cout << a[10] << "\n"; // 2609
    // from a[5] which is out of range, what output are we recieving?
}