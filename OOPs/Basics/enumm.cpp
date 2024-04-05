#include<iostream>
using namespace std;

enum Color {
    RED, 
    GREEN, 
    BLUE
};

class ColoredObject {
private:
    Color color;

public:
    ColoredObject(Color color) {
        this->color = color;
    }

    Color getColor() const {
        return color;
    }

    void setColor(Color color) {
        this->color = color;
    }
};

int main() {
    ColoredObject obj(Color::BLUE);

    cout << "Current Color: " << obj.getColor()+1 << endl;
    obj.setColor(GREEN);
    cout << "Current Color: " << obj.getColor()+1 << endl;


    return 0;
}


// enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

// int main() {
//     week day;
//     day = Friday;
//     cout << "Day: " << day+1 << endl;

//     return 0;
// }