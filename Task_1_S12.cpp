#include <iostream>
using namespace std;
int main(){
    int a=0, sum=0;
    while(a<=1000){
        a=a+4;
        if(a<=1000)
        if(a%7==0){
            sum=sum+a;
        }
        else {
            sum=sum;
        }
    }
    cout<<"Sum:"<<sum;
    return 0;
}
