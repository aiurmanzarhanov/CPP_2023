#include <iostream>
using namespace std;
int main (){
    int a[11][11];
    int b,c;
    for (b=1;b<=10;b++){
        for (c=1;c<=10;c++){
            a[b][c]=b*c;
            cout<<a[b][c]<<" "<<" "<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
