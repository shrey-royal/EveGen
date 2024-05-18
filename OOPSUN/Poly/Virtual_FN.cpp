#include<iostream>
using namespace std;

class A {
    int x = 5;
public:
    virtual void display() {
        cout << "Value of x is " << x << endl;
    }
};

class B : public A {
public:
    int y = 10;
    void display() override {
        cout << "Value of y is " << y << endl;
    }
};

int main() {
    A *a;
    B b, b1, b2;

    a = &b;
    a->display();

    b1.y = 1;
    b2.y = 2;

    a = &b1;
    a->display();

    a = &b2;
    a->display();

    return 0;
}