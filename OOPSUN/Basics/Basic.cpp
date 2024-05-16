#include<iostream>
#include<string>
using namespace std;

class ToyStore {
private:
    float discount;
    string name;
    string brand;
    float price;

public:
    ToyStore(string name = "", string brand = "", float price = 0.0, float discount = 0.0) {
        this->name = name;
        this->brand = brand;
        this->price = price;
        this->discount = discount;
    }

    void createToy() {
        cout << "Enter toy name: ";
        cin >> name;

        cout << "Enter brand name: ";
        cin >> brand;

        cout << "Enter price: ";
        cin >> price;

        cout << "\nToy added successfully!\n\n" << endl;
    }

    void displayToy() {
        if(name == "" || brand == "" || price == 0) return;
        cout << "Toy name: " << name << endl;
        cout << "Toy Brand: " << brand << endl;
        cout << "Toy Price: " << price << endl;
        cout << "Discount: " << discount << endl;
    }

    void updateToy() {
        int choice;
        cout << "Update Toy details: \n" << endl;
        cout << "1. Name" << endl;
        cout << "2. Brand" << endl;
        cout << "3. Price" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1:
                cout << "Enter new name: ";
                getline(cin, name);
                break;

            case 2:
                cout << "Enter new brand: ";
                getline(cin, brand);
                break;
        
            case 3:
                cout << "Enter new price: ";
                cin >> price;
                // cin.ignore();
                break;

            default:
                cout << "Invalid choice!\n";
        }
    }

    void deleteToy() {
        name = "";
        brand = "";
        price = 0.0;
        cout << "Toy removed successfully!\n";
    }
};

int main() {
    int size, choice, index;
    ToyStore* toys = nullptr;

    do {
        cout << "\nToy Store Management System (CRUD)\n" << endl;
        cout << "1. Create Toys\n";
        cout << "2. Display Toys\n";
        cout << "3. Update Toy\n";
        cout << "4. Delete Toy\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter number of toys to create: ";
            cin >> size;
            if(toys == nullptr) {
                toys = new ToyStore[size];
            } else {
                cout << "Resizing functionality not implemented yet." << endl;
            }

            for(int i=0; i<size; i++) {
                toys[i].createToy();
                cout << endl;
            }
            break;
        
        case 2:
            if(toys == nullptr) {
                cout << "No toys created yet!\n";
            } else {
                for (int i = 0; i < size; i++) {
                    toys[i].displayToy();
                    cout << endl;
                }
            }
            break;

        case 3:
            if(toys == nullptr) {
                cout << "No toys created yet!\n";
            } else {
                cout << "Enter the index of the toy to update (0 to " << size - 1 << "): ";
                cin >> index;

                if(index >= 0 && index < size) {
                    toys[index].updateToy();
                } else {
                    cout << "Invalid index!\n";
                }
            }
            break;

        case 4:
            if(toys == nullptr) {
                cout << "No toys created yet!\n";
            } else {
                cout << "Enter the index of the toy to delete (0 to " << size - 1 << "): ";
                cin >> index;

                if(index >= 0 && index < size) {
                    toys[index].deleteToy();
                } else {
                    cout << "Invalid index!\n";
                }
            }
            break;

        case 5:
            if(toys != nullptr) {
                delete[] toys;
                toys = nullptr;
            }
            cout << "Exiting...\n";
            break;
        
        default:
            cout << "Invalid choice!\n";
            break;
        }
    } while(choice != 5);

    return 0;
}