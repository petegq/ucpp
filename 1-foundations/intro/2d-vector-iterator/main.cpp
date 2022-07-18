#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    vector<vector<int>> b{{1, 2}, {3, 4}, {5, 6}};

    // Write your double loop over the above 2d vector here.
    for (int i = 0; i < b.size(); i++) {
        for (int y = 0; y < b[i].size(); y++) {
            cout << b[i][y] << "\n";
        }
    }

    // Solution, using auto and ranges
    // for (auto v : b) {
    //     for (int i : v) {
    //         cout << i << " ";
    //     }
    //     cout << "\n";
    // }
}