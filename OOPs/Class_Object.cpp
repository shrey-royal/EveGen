#include<iostream>
using namespace std;

class Student {
    //instance variable / data members / class members
    public:
    int rollNo;
    string name;
    float fees;

    //methods
    void display() {
        cout << "\nRollNo.: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nFees: " << fees;
    }
};


int main() {
    Student s;

    cout << "Enter your Roll No: ";
    cin >> s.rollNo;

    cout << "Enter your Name: ";
    cin >> s.name;

    cout << "Enter your Fees: ";
    cin >> s.fees;

    s.display(); 

    return 0;
}

/*
Tasks:

1. Create a class named "Employee" with data members for employee ID, name, and salary. Include a method to input employee details and another method to display those details.

2. Implement a class called "Rectangle" with attributes length and width. Write methods to input dimensions, calculate area, and display the rectangle's details.

3. Develop a class named "BankAccount" with properties for account number, account holder's name, and balance. Include methods to deposit, withdraw, and display account details.

4. Design a class called "Book" with attributes for book title, author, and price. Write functions to input book details, update price, and display book information.

5. Create a class named "Car" with data members for make, model, and year. Implement methods to input car details, update year, and display the car's specifications.

*/