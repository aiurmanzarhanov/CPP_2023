#include <iostream>
#include <string>
using namespace std;
int main(){
    setlocale(0,"Russian");
    int b;
    string a;
    cout<<"Введите строку:";
    cin>>a;
    for (b=a.size()-1;b>=0;b--){
        cout<<a[b];
    }
    return 0;
}
