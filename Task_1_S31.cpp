#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
setlocale(0, "Russian");
int a = 10, number;
ofstream input("output.txt");
string N[a] {"Ноль", "Один", "Два", "Три", "Четыре", "Пять", "Шесть", "Семь", "Восемь", "Девять"};
for (int i = 0; i < a; i++)
{
    input << N[i] << endl;
}
cout << "Введите число от 0 до 9: ";
cin >> number;
while (number >= a)
{
    cout << "Введите число от 0 до 9: ";
    cin >> number;
}
while (number < 0)
{
    cout << "Введите число от 0 до 9: ";
    cin >> number;
}
    cout << "Вы ввели число: " << N[number] << endl;
return 0;
}
