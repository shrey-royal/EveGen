#include<iostream>
using namespace std;

class Student {
    public:
        int rollNo;
        string name;
        float fees;

        Student() { //constructor
            rollNo = 0;
            name = "";
            fees = 0.0;
            cout << "Default constructor called..." << endl;
        }

        Student(int r, string n, float f) {
            rollNo = r;
            name = n;
            fees = f;
            cout << "Parameterized constructor called..." << endl;
        }

        void display() {
            cout << "RollNo.: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Fees: " << fees << endl;
        }
};

int main() {
    Student s, s1(23, "Krish", 10000.01);

    s.display();
    s1.display();
}

/*
Constructors in CPP:
They are special methods that invokes/called automatically when the object is created.

The main purpose of using the constructor is to initialize the class members.

three types of constructors:
    1 -> default constructor
    2 -> parameterized constructor
    3 -> copy constructor
    
Tasks:

1. Create a class representing a car with member variables for make, model, and year. Write a default constructor that initializes these variables to default values.
   
2. Implement a class for a geometric shape with member variables representing its dimensions. Write a parameterized constructor that initializes these dimensions when an object is created.

3. Design a class to model a bank account with member variables for account number, balance, and account holder name. Write a constructor that takes initial values for these variables.

4. Develop a class for a book with member variables for title, author, and publication year. Write a constructor that initializes these variables when an object of the class is instantiated.

5. Create a class representing a student with member variables for name, roll number, and age. Write a constructor that accepts these details as parameters during object creation.

6. Design a class to represent a point in a 2D coordinate system. Write a constructor that initializes the x and y coordinates to specific values.

7. Implement a class for a bank transaction with member variables for transaction ID, amount, and transaction type. Write a constructor that initializes these variables.

8. Develop a class to model a circle with member variables for radius and center coordinates. Write a constructor that initializes these variables when an object is created.

9. Design a class representing a calendar event with member variables for event name, date, and time. Write a constructor that takes these details as parameters.

10. Create a class to represent a computer with member variables for brand, model, and price. Write a constructor that initializes these variables when an object of the class is instantiated.


*/