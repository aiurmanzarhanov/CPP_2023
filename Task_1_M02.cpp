#include <iostream>
#include <cmath>
using namespace std;
int main(){
    setlocale(0,"Russian");
    int N;
    float A,S;
    const float pi=3.1416;
    cout<<"Введитее длину стороны:";
    cin>>A;
    cout<<"Введите количество сторон:";
    cin>>N;
    if(N==3){
        S=(A*A*sqrt(3))/4;
        cout<<"Площадь треугольника:"<<S;
    }
    else if (N==4){
        S=A*A;
        cout<<"Площадь квадрата:"<<S;
    }
    else if (N>4) {
        S=(A*A*N)/(4*tan(pi/N));
        cout<<"Площадь многоугольника:"<<S;
    }
    else {
        cout<<"Площадь посчитать невозможно:";
    }
    return 0;
}
