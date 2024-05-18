#include<iostream>
using namespace std;

class Dhruv_Sharma {
protected:
    double wealth;
public:
    Dhruv_Sharma(double wealth) : wealth(wealth) {}
    int getWealth() { return wealth; }
};

class Dhruvi : public Dhruv_Sharma {
public:
    Dhruvi(double wealth) : Dhruv_Sharma(wealth) {}
    int getWealth() { return wealth; }
};

int main() {
    Dhruvi daughter(987654321);

    cout << "Wealth of Sharma Family: " << daughter.getWealth() << endl;
    
    return 0;
}