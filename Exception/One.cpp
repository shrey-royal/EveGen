#include<iostream>
#include<stdexcept>
using namespace std;

int main() {


    cout << "Before Exception" << endl;
    // 1
    try {
        int d=120;
        if(d == 0) {
            throw invalid_argument("divide by zero.");
        } else if (d >= 100) {
            throw out_of_range("naa thay");
        }
        cout << 12/d << endl;
    } catch (const out_of_range& e) {
        cout << e.what() << '\n';
        // throw runtime_error("abcd");
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    } catch(...) {
        cout << "Default Exception..." << endl;
    }

    // 2
    // try {
    //     throw 's';
    // }
    // catch (int dhulo) { cout << "int : " << dhulo << endl; }
    // catch (char dhulo) { cout << "char : " << dhulo << endl; }
    // catch (...) { cout << "Default Exception" << endl; }
    
    cout << "After Exception" << endl;

    return 0;
}