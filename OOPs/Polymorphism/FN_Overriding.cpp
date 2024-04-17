#include<iostream>
using namespace std;

class Parent {
private:
    int privateData;
public:
    Parent() : privateData(45) {}

    void displayData() {
        cout << "Private Data from Parent is " << privateData << endl;
    }
};

class Child : public Parent {
private:
    int privateData;
public:
    Child() : privateData(789) {}
    
    void displayData() {    //Overridden method
        cout << "Private Data from Child is " << privateData << endl;
    }
};

int main() {
    Child c_obj;
    Parent p_obj;

    p_obj.displayData();
    c_obj.displayData();

    return 0;
}

/*
Problem Statement:

Create a C++ program for an e-commerce system. Define a base class 'Product' with a method 'displayInfo()' to showcase product details like name, price, and description. Implement two derived classes, 'PhysicalProduct' and 'DigitalProduct', inheriting from 'Product'.

Override the 'displayInfo()' method in each derived class:

1. In the 'PhysicalProduct' class, override 'displayInfo()' to include specifics like weight, shipping cost, and delivery time.

2. In the 'DigitalProduct' class, override 'displayInfo()' to include information about download links and file sizes.

Instantiate instances of both 'PhysicalProduct' and 'DigitalProduct', highlighting how method overriding allows you to display unique product details while using a shared interface.

*/