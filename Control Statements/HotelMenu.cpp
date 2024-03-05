#include <iostream>
using namespace std;

// Function to display the beverage menu
void displayMenu() {
    cout << "Starbucks Beverage Menu" << endl;
    cout << "1. Coffee" << endl;
    cout << "2. Tea" << endl;
    cout << "3. Milk" << endl;
    cout << "4. Juice" << endl;
    cout << "5. Water" << endl;
    cout << "6. Soda" << endl;
    cout << "7. Exit" << endl;
}

// Function to choose the size
void chooseSize() {
    cout << "Choose size: 1. Small 2. Medium 3. Large" << endl;
    //switch - select size
}

// Function to order coffee
void orderCoffee() {
    cout << "Coffee selected. ";
    chooseSize();
}

// Function to order tea
void orderTea() {
    cout << "Tea selected. ";
    chooseSize();
}

// Function to order milk
void orderMilk() {
    cout << "Milk selected. ";
    chooseSize();
}

// Function to order juice
void orderJuice() {
    cout << "Juice selected. ";
    //switch - types of juice
    chooseSize();
}

// Function to order water
void orderWater() {
    cout << "Water selected. ";
    chooseSize();
}

// Function to order soda
void orderSoda() {
    cout << "Soda selected. ";
    chooseSize();
}

int main() {
    int choice;
    
    do {
        displayMenu();
        cout << "Enter your choice (1-7): ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                orderCoffee();
                break;
            case 2:
                orderTea();
                break;
            case 3:
                orderMilk();
                break;
            case 4:
                orderJuice();
                break;
            case 5:
                orderWater();
                break;
            case 6:
                orderSoda();
                break;
            case 7:
                cout << "Thank you for visiting Starbucks. Have a nice day!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        
    } while(choice != 7);
    
    return 0;
}
