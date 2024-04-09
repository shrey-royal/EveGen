#include<iostream>
using namespace std;

class Beverages {
protected:
    string name;

public:
    Beverages(string n) : name(n) {}
};

class ColdDrinks {
protected:
    float price;

public:
    ColdDrinks(float p) : price(p) {}
};

class Soda : public Beverages, public ColdDrinks {
private:
    string flavor;
public:
    Soda(string n, float p, string flvr) : Beverages(n), ColdDrinks(p), flavor(flvr) {}

    void display() {
        cout << "Name: " << name << ", Price: Rs." << price << ", Flavor: " << flavor << endl;
    }
};

int main() {
    Soda s("Coca Cola", 20, "Cola");
    s.display();

    Soda s1("Limca", 20, "Lemon");
    s1.display();


    return 0;
}