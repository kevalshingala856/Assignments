#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNo;

    void getStudentDetails() {
        getDetails();
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void showStudentDetails() {
        showDetails();
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void getTeacherDetails() {
        getDetails();
        cout << "Enter Subject: ";
        cin >> subject;
    }

    void showTeacherDetails() {
        showDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "\nEnter Student Details:\n";
    s.getStudentDetails();
    cout << "\nStudent Information:\n";
    s.showStudentDetails();

    cout << "\nEnter Teacher Details:\n";
    t.getTeacherDetails();
    cout << "\nTeacher Information:\n";
    t.showTeacherDetails();

    return 0;
}
