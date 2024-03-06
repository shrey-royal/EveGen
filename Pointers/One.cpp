#include<iostream>
using namespace std;

int main() {
    // int arr[10];
    // string str;

    // int *p1;
    // string *p2 = &str;

    // p1 = &arr[0];

    // cout << "\nEnter 10 elements in the array: " << endl;
    // for (int i = 0; i < 10; i++)    cin >> arr[i];

    // cout << "Array: ";
    // for (int i = 0; i < 10; i++) {
    //     cout << *(p1+i) << ", ";
    // }

    string str; //string datatype
    char str1[20];  //char array
    cout << "\nEnter str: ";
    // cin >> str;
    getline(cin, str);  //string
    cin.getline(str1, sizeof(str1)/sizeof(str1[0]));  //char array

    cout << "\nstr: " << str;
    cout << "\nstr1: " << str1;

    return 0;
}