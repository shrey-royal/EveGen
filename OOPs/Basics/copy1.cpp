// 6. Create a class to model a calendar event with attributes like title, date, and attendees. Implement a copy constructor to enable duplicating calendar events for scheduling conflicts resolution.

#include<iostream>
using namespace std;

class CalenderEvent {
    private:
    string title;
    string date;
    string attendees[10];
    int size;

    public:
    CalenderEvent(string t, string d, string a[], int s) {
        title = t;
        date = d;
        size = s;
        for (int i = 0; i < size; i++) {
            attendees[i] = a[i];
        }
    }

    CalenderEvent(CalenderEvent& e) {
        title = e.title;
        date = e.date;
        size = e.size;
        for (int i = 0; i < size; i++) {
            attendees[i] = e.attendees[i];
        }
    }

    void display() {
        cout << "\nTitle: " << title << endl;
        cout << "Date: " << date << endl;
        cout << "Guests: ";
        for (int i = 0; i < size; i++) {
            cout << attendees[i] << ", ";
        }
        cout << "\b\b " << endl;
    }
};

int main() {
    string guests[] = {"abcd", "efgh", "ijkl", "mnop"};
    int size = sizeof(guests)/sizeof(guests[0]);
    CalenderEvent event("t", "d", guests, size);

    //Copy constructor: copying the data of event object into event2 object
    CalenderEvent event2(event);

    event.display();
    event2.display();

    return 0;
}