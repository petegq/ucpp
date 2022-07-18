#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.

int AdditionFunction(vector<int> v) {
    int total = 0;
    for(int i = 0; i < v.size(); i++) {
        total = total + v[i];
    }
    return total;
}

// Solution, using ranges and += addition, passing vector as a reference
// int AdditionFunction(vector<int> &v) {
//     int sum = 0;
//     for(int i : v)
//         sum += i;
//     return sum;
// }xer

int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";
}