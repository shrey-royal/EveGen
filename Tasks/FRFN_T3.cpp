#include<iostream>
using namespace std;

class PrivateClass {
private:
    int privateData;

    friend class FriendClass;

public:
    PrivateClass(int data) : privateData(data) {}

    int getPrivateData() {
        return privateData;
    }
};

class FriendClass {
public:
    static void modifyPrivateData(PrivateClass& obj, int newData) {
        obj.privateData = newData;
    }
};

int main() {
    PrivateClass obj(5);

    cout << "Private Data before modification: " << obj.getPrivateData() << endl;
    FriendClass::modifyPrivateData(obj, 10);
    cout << "Private Data before modification: " << obj.getPrivateData() << endl;
}