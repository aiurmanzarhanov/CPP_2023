#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(0,"Russian");
    ifstream input_file("output_S22.txt");
    int a;
    int b = 1;
    while (input_file >> a) {
        cout <<b<<". "<<a<<endl;
        b++;
    }
    input_file.close();
    return 0;
}
