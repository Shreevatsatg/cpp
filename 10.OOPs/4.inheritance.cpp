#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

// 1. Single Inheritance
class Student : public Person {
public:
    int rollNo;

    Student(string name, int age, int rollNo) : Person(name, age) {
        this->rollNo = rollNo;
    }

    void getInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Roll No: " << rollNo << endl;
    }
};

// 2. Multilevel Inheritance
class GradStudent : public Student {
public:
    string researchArea;

    GradStudent(string name, int age, int rollNo, string area) : Student(name, age, rollNo) {
        this->researchArea = area;
    }

    void getInfo() {
        Student::getInfo();
        cout << "Research Area: " << researchArea << endl;
    }
};

// 3. Multiple Inheritance
class Teacher {
public:
    string subject;
    Teacher(string sub) : subject(sub) {}
};

class TA : public Student, public Teacher {
public:
    TA(string name, int age, int roll, string sub) : Student(name, age, roll), Teacher(sub) {}

    void getInfo() {
        Student::getInfo();
        cout << "Subject TAing: " << subject << endl;
    }
};

int main() {
    GradStudent gs1("Rahul", 22, 101, "Machine Learning");
    gs1.getInfo();

    cout << "---" << endl;

    TA ta1("Sneha", 21, 102, "OOPs");
    ta1.getInfo();

    return 0;
}
