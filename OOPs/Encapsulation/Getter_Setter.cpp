#include<iostream>
using namespace std;

class Account {
private:
    int accNo;
    string name;
    double balance;
public:
    Account(int accNo, string name, double balance) : accNo(accNo), name(name), balance(balance) {}

    //Getters and Setters
    void setAccNo(int accNo) {
        this->accNo = accNo;
    }

    void setName(string name) {
        this->name = name;
    }

protected:
    void setBalance(double balance) {
        this->balance = balance;
    }

public:
    int getAccNo() {
        return accNo;
    }

    string getName() {
        return name;
    }

    double getBalance() {
        return balance;
    }
};

class SBI : public Account {
public:
    SBI(int accNo, string name, double balance) : Account(accNo, name, balance) {}

    void withdraw(double amount) {
        double current_balance = getBalance();
        if(amount <= current_balance-2000) {
            setBalance(current_balance - amount);
        } else {
            cout << "Insuficient Balance... (" << current_balance << ")" << endl;
        }
    }

    void deposit(int amount) {
        double current_balance = getBalance() + amount;
        setBalance(current_balance);
    }
};


int main() {
    SBI bank(123456, "Dhruv", 500000);

    bank.deposit(45000);
    cout << "Current balance is " << bank.getBalance() << endl;

    bank.withdraw(500000);
    cout << "Current balance is " << bank.getBalance() << endl;


    return 0;
}