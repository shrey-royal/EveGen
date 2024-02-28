#include<iostream>
using namespace std;

int main(){
    int a, b, choice;

    cout << "Enter a & b: ";
    cin >> a >> b;

    cout << "\nChoose operations: " << endl;
    cout << "1. Addition\n2.Subtraction" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "addition" << endl;
            break;
        
        case 2:
            cout << "subtraction" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl; 
            break;
    }
    
    return 0;
}
