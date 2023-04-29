#include <iostream>

using namespace std;

void print(int x) {
    cout<<x<<endl;
}

void print(float x) {
    cout<<x<<endl;
}

void print(char x) {
    cout<<x<<endl;
}

void print(int x, int y) {
    cout<<x<<", "<<y<<endl;
}

int main() {
    int a=1;
    float b=1.23;
    char c='A';
    int d=2, e=3;
    print(a);
    print(b);
    print(c);
    print(d, e);

    return 0;
}
