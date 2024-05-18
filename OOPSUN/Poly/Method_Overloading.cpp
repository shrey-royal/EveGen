#include<iostream>
using namespace std;

class Airport {
private:
    string code;
    string name;
public:
    void setDetails(const string& code) {
        this->code = code;
        this->name = "";
    }

    void setDetails(const string& code, const string& name) {
        this->code = code;
        this->name = name;
    }

    void display() {
        if(name == "") {
            cout << "-> " << code << endl;
        } else {
            cout << "-> " << code << " (" << name << ")" << endl;
        }
    }
};


int main() {
    Airport amd, jfk, fih;

    amd.setDetails("AMD", "Ahmedabad International Airport");
    jfk.setDetails("JFK");
    fih.setDetails("FIH", "Kinshasa");

    amd.display();
    jfk.display();
    fih.display();


    return 0;
}