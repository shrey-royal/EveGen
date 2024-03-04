#include<iostream>
using namespace std;

int main() {
    int side1, side2, side3;

    cout << "Enter the lengths of the three sides of the traingle: ";
    cin >> side1 >> side2 >> side3;

    if((side1 == side2) && (side2 == side3)) {
        cout << "This is an equilateral triangle." << endl;
    } else if(side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "This is an isosceles triangle." << endl;
    } else {
        cout << "This is an scalene triangle." << endl;
    }

    return 0;
}
