#include <iostream>
#include <vector>
#include <numeric>
using std::cout;
using std::vector;
using std::accumulate;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.

int AdditionFunction(vector<int> v) {
    int total = 0;
    for(int i = 0; i < v.size(); i++) {
        total += v[i];
    }
    return total;
}

// Solution, using ranges and += addition, passing vector as a reference + use constants
// int AdditionFunction(const vector<int> &v) {
//     int sum = 0;
//     for(const int &i : v)
//         sum += i;
//     return sum;
// }

//solution, using begin and end
// int AdditionFunction(vector<int> v) {
//     int sum = 0;
//     for(auto i = v.begin(); i != v.end(); ++i)
//         sum += *i;
//     return sum;
// }

// Solution, using <numeric> std::accumulate
// int AdditionFunction(vector<int> v) {
//     return accumulate(v.begin(), v.end(), 0);
// }

int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";
}