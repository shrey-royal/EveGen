#include<iostream>
using namespace std;

class Employee {
    public:
    int eid;
    string ename;
    float esalary;

    void display() {
        cout << "\neid: " << eid << endl;
        cout << "ename: " << ename << endl;
        cout << "esalary: " << esalary << endl;
    }
};

int main() {
    // int a = 34;
    // int *p = &a;

    // cout << *p << endl << p;


    Employee e;
    e.eid = 123;
    e.ename = "name";
    e.esalary = 876;

    Employee *e_ptr = &e;
    e_ptr->display();

    return 0;
}

// * =  indirection pointer / dereference pointer
// -> = member access operator