#include<iostream>
using namespace std;

int main() {
    char c;

    cout << "Enter any alphabet: ";
    cin >> c;

    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        switch (c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Entered Character is Vowel..." << endl;
            break;
        
        default:
            cout << "Entered Character is Consonant..." << endl;
            break;
        }
    }


    return 0;
}