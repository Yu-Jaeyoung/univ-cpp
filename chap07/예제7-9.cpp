/*
#include <iostream>

using namespace std;

class Power {
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this->kick = kick;
        this->punch = punch;
    }

    void show();

    bool operator!();
};

void Power::show() {
    cout << "kick = " << kick << ',' << "punch = " << punch << endl;
};

bool Power::operator!() {
    if ((this->kick == 0) & (this->punch == 0))
        return true;
    else
        return false;
}

int main() {
    Power a(0, 0), b(5, 5);
    a.show();
    b.show();

    if (!a)
        cout << "a의 파워가 0이다." << endl;
    else
        cout << "a의 파워가 0이 아니다." << endl;

    if (!b)
        cout << "a의 파워가 0이다." << endl;
    else
        cout << "a의 파워가 0이 아니다." << endl;
}
*/
