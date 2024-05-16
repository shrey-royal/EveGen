#include<iostream>
using namespace std;

class GrandParents {
private:
    string manners;
protected:
    GrandParents() {
        manners = "Discipline, Honesty, Loyalty";
    }

    string getManners() {
        return manners;
    }
};


class Father : public GrandParents {
private:
    double property;
protected:
    Father(double prop) : property(prop) {}
    
    double getProperty() {
        return property;
    }
};

class Mother : public GrandParents {
private:
    bool food;
protected:
    Mother(bool f) : food(f) {}

    bool getFood() {
        return food;
    }
};

class Son : public Father, public Mother {
private:
    int money;

    int getMoney() {
        return money;
    }

public:
    Son(double prop, bool f, int money) : Father(prop), Mother(f), money(money) {}

    void display() {
        cout << "GrandParents' Manners: " << Mother::getManners() << endl;
        cout << "Father's Property: " << getProperty() << endl;
        cout << "Mother's Food: " << (getFood() ? "Yes" : "No") << endl;
        cout << "Son's Money: " << getMoney() << endl;
    }
};


int main() {
    Son s(2000, true, -900);

    s.display();

    return 0;
}