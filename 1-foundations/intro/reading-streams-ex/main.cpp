#include <fstream>
#include <iostream>
#include <string>
using std::ifstream;
using std::cout;
using std::string;

void ReadBoardFile(string path) {
    ifstream my_file(path);
    
    if (my_file) {
        string line;
        while (getline(my_file, line)) {
            cout << line << "\n";
        }
    }
}

int main() {
  ReadBoardFile("1.board");
}