#include <iostream>

using namespace std;

class CreditCard {
private:
    int Number;
    float Balance;
public:
    CreditCard(int num, float bal) {
        Number=num;
        Balance=bal;
    }
    void Put(float a) {
        Balance+=a;
    }
    void Take(float a) {
        if (Balance>=a) {
            Balance-=a;
        } else {
            cout<<"Недостаточно средств на карте"<<endl;
        }
    }
    float GetBalance() {
        return Balance;
    }
};

int main() {
    setlocale(0,"Russian");
    CreditCard firstCC(1234, 1000);
    CreditCard*CC=&firstCC;
    CC->Put(1000);
    CC->Take(100);
    cout<<"Текущий баланс:"<<CC->GetBalance()<<endl;
    return 0;
}
