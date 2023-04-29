#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(0,"Russian");
    int A, B;
    cout<<"Введите два числа A и B (B > A): ";
    cin>>A>>B;
    ofstream output("output.txt");
    for (int i = A; i <= B; i++) {
        output<<i*3<<endl;
    }
    cout<<"Значения можно посмотреть в файле'output.txt'"<<endl;

    return 0;
}
