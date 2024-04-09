#include<iostream>
using namespace std;

class Employee {
protected:
    string name;
    int employeeID;
public:
    Employee(string n, int id) : name(n), employeeID(id) {}

    void display() {
        cout << "Name: " << name << ", EmployeeID: " << employeeID;
    }
};

class Manager: public Employee {
private:
    string department;
public:
    Manager(string n, int id, string dept) : Employee(n, id), department(dept) {}

    void display() {
        cout << "Manager - ";
        Employee::display();    //SCOPE RESOLUTION OPERATOR
        cout << ", Department: " << department << endl;
    }
};

class Engineer : public Employee {
private:
    string specialization;
public:
    Engineer(string n, int id, string spec) : Employee(n, id), specialization(spec) {}

    void display() {
        cout << "Engineer - ";
        Employee::display();
        cout << ", Specialization: " << specialization << endl;
    }
};

int main() {
    Manager manager("Meet S.", 419, "Engineering");
    Engineer engineer("Himesh P.", 421, "Software Development");


    cout << endl;
    manager.display();
    engineer.display();
    cout << endl;


    return 0;
}