#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(0,"Russian");
    ifstream input_file("output.txt");
    int a;
    int b = 1;
    while (input_file >> a) {
        cout <<b<<". "<<a<<endl;
        b++;
    }
    return 0;
}
