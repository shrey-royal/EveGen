#include<iostream>
using namespace std;

class Vehicle {
public:
    void display() {
        cout << "Vehicle" << endl;
    }
};

class Engine {
public:
    void display() {
        cout << "Engine" << endl;
    }
};

class Car : public Vehicle {
public:
    void display() {
        cout << "Car" << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void display() {
        cout << "Motorcycle" << endl;
    }
};

class ElectricEngine : public Engine {
public:
    void display() {
        cout << "Electric Engine" << endl;
    }
};

class GasEngine : public Engine {
public:
    void display() {
        cout << "Gas Engine" << endl;
    }
};

class HybridCar : public Car, public ElectricEngine, public GasEngine {
public:
    // void display() {
    //     cout << "Hybrid Car" << endl;
    // }
};

int main() {
    HybridCar car;
    car.Car::display();
    // car.display();  //Ambiguity: which display() to call?
    car.GasEngine::display();

    return 0;
}

/*
1. Vehicle Classification:
   Create a system to classify vehicles into different categories based on their type (e.g., car, motorcycle) and their engine type (e.g., electric, gas). Use hybrid inheritance to model this system effectively.

2. Employee Hierarchy:
   Design a system to represent employees in an organization. Employees can be categorized based on their role (e.g., manager, worker) and their specialization (e.g., IT, finance). Utilize hybrid inheritance to model this hierarchy.

3. Animal Kingdom:
   Develop a program to represent various animals and their characteristics. Animals can be categorized based on their species (e.g., mammal, bird) and their habitat (e.g., land, aquatic). Implement the system using hybrid inheritance.

4. Shape Hierarchy:
   Create a system to represent geometric shapes. Shapes can be categorized based on their type (e.g., circle, rectangle) and their properties (e.g., 2D, 3D). Use hybrid inheritance to model this hierarchy effectively.

5. Electronic Devices:
   Design a system to represent electronic devices such as smartphones, tablets, and laptops. Devices can be categorized based on their type (e.g., mobile, computer) and their power source (e.g., battery, electricity). Implement the system using hybrid inheritance to manage the complexity of the hierarchy.
*/