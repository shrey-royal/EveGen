#include<iostream>
using namespace std;

class PaymentMethod {
public:
    virtual void processPayment(double amount) = 0;
};

class CreditCard : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing credit card payment of Rs." << amount << endl;
    }
};

class GPay : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing GPay payment of Rs." << amount << endl;
    }
};

class Bitcoin : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing Bitcoin payment of Rs." << amount << endl;
    }
};

void makePayment(PaymentMethod& method, double amount) {
    method.processPayment(amount);
}


int main() {
    CreditCard creditCard;
    GPay gPay;
    Bitcoin bitcoin;

    makePayment(creditCard, 100.0);
    makePayment(gPay, 200.0);
    makePayment(bitcoin, 300.0);

    return 0;
}