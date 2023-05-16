#include <iostream>
#include <cstring>

using namespace std;

int main(){
    setlocale(0,"Russian");
    cout<<"Введите слово:";
    char *pointer;
    cin>>pointer;
    int a;
    a=strlen(pointer);
    for (int i=0; i<a; i++){
        pointer[i]++;
    }
    cout<<pointer<<endl;
    return 0;
}
