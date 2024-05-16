#include<iostream>
using namespace std;

class MyClass {
public:
    int *arr, size;

    MyClass(int size) {
        this->size = size;
        // arr = (int *)calloc(size, sizeof(int));
        arr = new int[size];
    }

    void scanData() {
        for (int i = 0; i < size; i++) {
            cout << "Enter arr[" << i << "]: ";
            cin >> arr[i];
        }
    }

    void printData() {
        cout << "arr["<< size << "]: { ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << ", ";
        }
        cout << "\b\b }\n";
    }

    ~MyClass() {
        // free(arr);
        delete arr;
    }
};

int main() {
    MyClass obj(5);

    obj.scanData();

    obj.printData();

    return 0;
}