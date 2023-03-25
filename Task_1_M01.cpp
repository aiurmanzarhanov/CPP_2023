#include <iostream>
using namespace std;
int main(){
    int a,b,c[10][10];
    for(a=1;a<10;a++){
        for(b=1;b<10;b++){
            c[a][b]=a*b;
            cout<<c[a][b]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
