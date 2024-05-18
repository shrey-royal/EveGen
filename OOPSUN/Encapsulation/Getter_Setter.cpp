#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    double mileage;

public:
    // Constructor
    Car(string carMake, string carModel, int carYear, double carMileage)
        : make(carMake), model(carModel), year(carYear), mileage(carMileage) {}

    // Getter for make
    string getMake() {
        return make;
    }

    // Setter for make
    void setMake(string carMake) {
        make = carMake;
    }

    // Getter for model
    string getModel() {
        return model;
    }

    // Setter for model
    void setModel(string carModel) {
        model = carModel;
    }

    // Getter for year
    int getYear() {
        return year;
    }

    // Setter for year
    void setYear(int carYear) {
        if (carYear > 1885 &&  carYear <= 2024) { // Ensuring the year is valid
            year = carYear;
        } else {
            cout << "Invalid year for a car." << endl;
        }
    }

    // Getter for mileage
    double getMileage() {
        return mileage;
    }

    // Setter for mileage (added protection to prevent negative mileage)
    void setMileage(double carMileage) {
        if (carMileage >= 0) {
            mileage = carMileage;
        } else {
            cout << "Mileage cannot be negative." << endl;
        }
    }

    // Method to drive the car and increase mileage
    void drive(double distance) {
        if (distance > 0) {
            mileage += distance;
        } else {
            cout << "Distance driven must be positive." << endl;
        }
    }
};

int main() {
    // Create a car object
    Car myCar("Toyota", "Corolla", 2015, 45000.0);

    // Display initial car details
    cout << "Make: " << myCar.getMake() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;
    cout << "Mileage: " << myCar.getMileage() << " miles" << endl;

    // Drive the car
    myCar.drive(150.0);
    cout << "After driving 150 miles, Mileage: " << myCar.getMileage() << " miles" << endl;

    // Try to set an invalid year
    myCar.setYear(1800); // Invalid year

    // Set a valid year
    myCar.setYear(2020);
    cout << "Updated Year: " << myCar.getYear() << endl;

    // Set new mileage
    myCar.setMileage(47000.0);
    cout << "Updated Mileage: " << myCar.getMileage() << " miles" << endl;

    return 0;
}
