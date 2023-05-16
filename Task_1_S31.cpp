#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(0,"Russian");
    string N[10]={"ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    int num;
    cout<<"Введите число:";
    cin>>num;
    if (num >= 0 && num <= 9) {
        cout<<"Название числа:" << N[num]<<endl;
    } else {
        cout<<"Ошибка, нужно ввести число от 0 до 9"<<endl;
    }
    return 0;
}
