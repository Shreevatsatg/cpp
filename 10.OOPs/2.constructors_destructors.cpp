#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double cgpa;

    // 1. Non-parameterized (Default) Constructor
    Student() {
        cout << "Default Constructor called" << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, double c) {
        cout << "Parameterized Constructor called" << endl;
        name = n;
        cgpa = c;
    }

    // 3. Copy Constructor
    Student(Student &obj) {
        cout << "Copy Constructor called" << endl;
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void getInfo() {
        cout << "Name: " << name << ", CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1("Rahul", 8.9);
    s1.getInfo();

    Student s2(s1); // Custom Copy Constructor
    s2.getInfo();

    return 0;
}
