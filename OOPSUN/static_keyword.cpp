#include<iostream>
using namespace std;

class MyClass {
public:
    static int count;

    MyClass() {
        count++;
    }
};

int MyClass::count = 0;

int main() {
    cout << "Initial Value of Count: " << MyClass::count << endl;

    MyClass obj, obj1;

    cout << "After initializing Objects, Value of Count: " << obj.count << endl;
}