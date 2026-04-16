#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    int getB1() {
        return B1;
    }

    void setB1(int valor) {
        B1 = valor;
    }

    float getB2() {
        return B2;
    }

    void setB2(float valor) {
        B2 = valor;
    }

    void MB1() {
        cout << "MB1" << endl;
    }

    void MB2() {
        cout << "MB2" << endl;
    }
};