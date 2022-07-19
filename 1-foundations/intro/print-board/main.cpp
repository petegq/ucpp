#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// TODO: Add PrintBoard function here.
void PrintBoard(vector<vector<int>> b) {
	for (auto i = 0; i < b.size(); i++) {
    	for (auto y = 0; y < b[i].size(); y++) {
        	cout << b[i][y] << " ";
        }
      	cout << "\n";
    }
}

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  // TODO: Call PrintBoard function here.
  PrintBoard(board);
}