// 1. School Management System:
//    Develop a school management system where each school has multiple classes, and each class has multiple students. Implement classes for School, Class, and Student. The School class should aggregate Class objects, and each Class object should aggregate Student objects. Provide functionalities to add new classes and students, display all students in a particular class, and calculate average scores of students in a class.
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string name, int marks) : name(name), marks(marks) {}

    string getName() { return name; }
    int getMarks() { return marks; }
};

class ClassRoom {
private:
    string name;
    Student** students;
    int num_students;
    int capacity;

public:
    ClassRoom(string name) : name(name), capacity(10) {
        num_students = 0;
        students = new Student*[capacity];
    }

    ~ClassRoom() {
        delete[] students;
        delete students;
    }

    string getClassRoomName() { return name; }

    void add_student(Student* student) {
        if(num_students == capacity) {
            cout << "Warning: Class at capacity, students not added." << endl;
            return;
        }
        students[num_students++] = student;
    }

    double get_average_score() {
        if(num_students == 0) {
            return 0.0;
        }

        double total_score = 0.0;
        for (int i = 0; i < num_students; i++) {
            total_score += students[i]->getMarks();
        }
        return total_score / num_students;
    }

    void display_students() {
        cout << "Students in class " << name << ":" << endl;
        for (int i = 0; i < num_students; i++) {
            cout << "- " << students[i]->getName() << endl;
        }
    }
};

class School {
private:
    string name;
    ClassRoom** classes;
    int num_classes;
    int capacity;

public:
    School(string name) : name(name) {
        num_classes = 0;
        capacity = 10;
        classes = new ClassRoom*[capacity];
    }

    ~School() {
        delete[] classes;
        delete classes;
    }

    int getNum_classes() { return num_classes; }

    ClassRoom** getClasses() { return classes; }

    void add_class(ClassRoom* class_obj) {
        if(num_classes == capacity) {
            cout << "Warning: School at capacity, class not added." << endl;
        }
        classes[num_classes++] = class_obj;
    }

    double calculate_class_average(string class_name) {
        for (int i = 0; i < num_classes; i++) {
            if(classes[i]->getClassRoomName() == class_name) {
                return classes[i]->get_average_score();
            }
        }
        return -1.0;
    }
};

int main() {
    School school("My School");

    ClassRoom mathClass("Math");
    ClassRoom sciClass("Science");

    school.add_class(&mathClass);
    school.add_class(&sciClass);

    mathClass.add_student(new Student("Dhruv Sharma", 90));
    mathClass.add_student(new Student("Meet Sarvaiya", 85));
    sciClass.add_student(new Student("Zafar S", 99));
    sciClass.add_student(new Student("Himesh Reshamiya", 13));

    mathClass.display_students();
    cout << "Average marks in Math: " << school.calculate_class_average("Math") << endl;
    
    sciClass.display_students();
    cout << "Average marks in Science: " << school.calculate_class_average("Science") << endl;

    // for (int i = 0; i < school.getNum_classes(); i++) {
    //     delete school.getClasses()[i];
    // }
    // delete school.getClasses();

    return 0;
}