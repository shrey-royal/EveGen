#include<iostream>
using namespace std;


class MyClass {
private:
    int data;

public:
    MyClass(int d) : data(d) {}

    friend void printData(const MyClass& obj);  //Made Friend
};

void printData(const MyClass& obj) {    //Use Friendship
    cout << "Data in MyClass: " << obj.data << endl;
}

int main() {
    MyClass obj(42);

    printData(obj);

    return 0;
}