#include<iostream>
#include<fstream>
using namespace std;

class FileHandler {
    string str;
public:
    string fileName;

    void writeFile() {
        ofstream file(fileName.append(".txt"));    //writing data into the file

        // ofstream file;
        // file.open(fileName.append(".txt"), ios::out);

        if(file.is_open()) {
            cout << "Enter the data to store into " << fileName << endl;
            getline(cin, str);
            
            file << str << endl;

            file.close();
        } else cout << "Error opening the file..." << endl;
    }

    void readFile() {
        ifstream file(fileName.append(".txt"));

        if(file.is_open()) {
            while(getline(file, str)) {
                cout << str << endl;
            }

            file.close();
        } else cout << "Error opening the file..." << endl;

    }
};

int main() {
    int choice;

    FileHandler fh;
 
    do {
        cout << "1. Write File\n2. Read File\n0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 0) {
            cout << "Exiting the program..." << endl;
            exit(0);
        }
        
        cout << "Enter fileName: ";
        getline(cin, fh.fileName);

        switch (choice) {
            case 1:
                fh.writeFile();
                break;

            case 2:
                fh.readFile();
                break;
            
            default:
                cout << "Invalid Choice! Please try again...";
                break;
        }
    } while (choice != 0);

    return 0;
}