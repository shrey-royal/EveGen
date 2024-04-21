// 1. School Management System:
//    Develop a school management system where each school has multiple classes, and each class has multiple students. Implement classes for School, Class, and Student. The School class should aggregate Class objects, and each Class object should aggregate Student objects. Provide functionalities to add new classes and students, display all students in a particular class, and calculate average scores of students in a class.

#include<iostream>
using namespace std;

class Student {
private:
    string name;
    float score;

public:
    Student(string name, float score) : name(name), score(score) {}

    string getName() {
        return name;
    }

    float getScore() {
        return score;
    }
};

class Class {
private:
    string className;
    Student* students[10];
    int numStudents;

public:
    Class(string className) : className(className), numStudents(0) {}

    void addStudent(Student* student) {
        if(numStudents < 10) {
            students[numStudents++] = student;
        } else {
            cout << "Class is full! Cannot add more students." << endl;
        }
    }

    void displayStudents() {
        cout << "Students in class " << className << ": " << endl;
        for (int i = 0; i < numStudents; i++) {
            cout << "Name: " << students[i]->getName() << ", Score: " << students[i]->getScore() << endl;
        }
    }

    float calculateAverage() {
        if(numStudents == 0) return 0;

        float totalScore = 0;
        for (int i = 0; i < numStudents; i++) {
            totalScore += students[i]->getScore();
        }
        return totalScore / numStudents;
    }

    string getName() {
        return className;
    }
};

class School {
private:
    string name;
    Class* classes[5];
    int numClasses;

public:
    School(string name) : name(name), numClasses(0) {}

    void addClass(Class* obj) {
        if(numClasses < 5) {
            classes[numClasses++] = obj;
        } else {
            cout << "School is full!, Cannot add more classes." << endl;
        }
    }

    void displayStudentsInClass(string className) {
        for (int i = 0; i < numClasses; i++) {
            if(classes[i]->getName() == className) {
                classes[i]->displayStudents();
                return;
            }
        }
        cout << "Class not Found!" << endl;
    }

    void displayAverageScoreOfClass(string className) {
        for (int i = 0; i < numClasses; ++i) {
            if (classes[i]->getName() == className) {
                cout << "Average score in class " << className << ": " << classes[i]->calculateAverage() << endl;
                return;
            }
        }
        cout << "Class not found!" << endl;
    }
};

int main() {
    School school("Example School");

    Class class1("Class 1");
    class1.addStudent(new Student("John", 80));
    class1.addStudent(new Student("Alice", 90));
    class1.addStudent(new Student("Bob", 75));
    school.addClass(&class1);

    Class class2("Class 2");
    class2.addStudent(new Student("Emily", 85));
    class2.addStudent(new Student("Tom", 70));
    class2.addStudent(new Student("Emma", 95));
    school.addClass(&class2);

    school.displayStudentsInClass("Class 1");
    school.displayAverageScoreOfClass("Class 1");

    return 0;
}