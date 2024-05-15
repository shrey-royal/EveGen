#include<iostream>
#include<cmath>
using namespace std;

/*
//operator overloading:

class Complex {
private:
    double real, img;

public:
    Complex(double r, double i) : real(r), img(i) {}

    friend ostream& operator<<(ostream& os, Complex& c);
};

ostream& operator<<(ostream& os, Complex& c) {
    os << c.real << " + " << c.img << "i";
    return os;
}

int main() {
    Complex c1(2.5, 3.14);
    Complex c2(1.0, -2.72);

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    
    return 0;
}
*/

/*
//Efficiency

class Point {
private:
    double x, y;

public:
    Point() : x(0), y(0) {}
    Point(double x, double y) : x(x), y(y) {}
    friend double distance_to(Point& p1, Point& p2);
};

double distance_to(Point& p1, Point& p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;

    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1(1, 2);
    Point p2(4, 6);

    double distance = distance_to(p1, p2);

    cout << distance << endl;

    return 0;
}
*/

class B;    // Forward Declaration

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    friend void exchange(A& a, B& b);
    friend void display(const A& a, const B& b);
};

class B {
private:
    int value;

public:
    B(int v) : value(v) {}

    friend void exchange(A& a, B& b);
    friend void display(const A& a, const B& b);
};

void exchange(A& a, B& b) {
    int temp = a.value;
    a.value = b.value;
    b.value = temp;
}

void display(const A& a, const B& b) {
    cout << "A: " << a.value << endl;
    cout << "B: " << b.value << endl;
}

int main() {
    A a(34);
    B b(56);

    cout << "Before Exchange: " << endl;
    display(a, b);

    exchange(a, b);

    cout << "After Exchange: " << endl;
    display(a, b);

    return 0;
}