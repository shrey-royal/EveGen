// arr[i][j] = arr[i][k] * arr[k][j];

#include<iostream>
using namespace std;

class Vehicle {
private:
    string type;
    int fuelCapacity;   //in l
    int mileage;        //in kmpl
    int distanceDriven; //in km

public:
    void scan(string t, int fc, int m, int dd) {
        type = t;
        fuelCapacity = fc;
        mileage = m;
        distanceDriven = dd;
    }

    void display() {
        cout << "Type: " << type << endl;
        cout << "Fuel Capacity: " << fuelCapacity << " liters" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Distance Driven: " << distanceDriven << " km" << endl;
    }

    void calculateFuelEffiency() {
        double efficiency = (double)distanceDriven/fuelCapacity;
        cout << "Fuel Efficiency: " << efficiency << " km/l" << endl;
    }

    void performMaintenance() {
        cout << "Performing maintenance for " << type << endl;
    }
};


int main() {
    Vehicle car;
    car.scan("Car", 50, 15, 5000);
    car.display();
    car.calculateFuelEffiency();
    car.performMaintenance();
    cout << endl;
    
    Vehicle bike;
    bike.scan("Bike", 10, 40, 2000);
    bike.display();
    bike.calculateFuelEffiency();
    bike.performMaintenance();
    cout << endl;

    
    Vehicle truck;
    truck.scan("Truck", 200, 8, 10000);
    truck.display();
    truck.calculateFuelEffiency();
    truck.performMaintenance();
    cout << endl;

    return 0;
}