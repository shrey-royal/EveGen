#include<iostream>
using namespace std;

class ClassA {
private:
    int data_a;

public:
    ClassA() : data_a(0) {}

    void setData_A(int data) {
        data_a = data;
    }

    int getData_A() {
        return data_a;
    }
};

class ClassB {
private:
    int data_b;

public:
    ClassB() : data_b(0) {}

    void setData_B(int data) {
        data_b = data;
    }

    int getData_B() { return data_b; }
};

class ClassC {
private:
    ClassA obj_a;   //Aggregation
    ClassB obj_b;
public:
    ClassC(int data_a, int data_b) {
        obj_a.setData_A(data_a);
        obj_b.setData_B(data_b);
    }
    
    int addAB() {
        return obj_a.getData_A() + obj_b.getData_B();
    }
};


int main() {
    ClassC obj(12, 24);

    cout << obj.addAB() << endl;

    return 0;
}