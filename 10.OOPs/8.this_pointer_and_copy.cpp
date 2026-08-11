#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        // use of 'this' pointer to differentiate between local variable and data member
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Custom Copy Constructor for Deep Copy
    Student(Student &obj) {
        cout << "Deep Copy Constructor called" << endl;
        this->name = obj.name;
        this->cgpaPtr = new double; // New memory allocation
        *this->cgpaPtr = *obj.cgpaPtr;
    }

    ~Student() {
        delete cgpaPtr;
    }

    void getInfo() {
        cout << "Name: " << name << ", CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Rahul", 8.9);
    Student s2(s1); // Deep copy occurs

    *s2.cgpaPtr = 9.2; // Changing s2's CGPA won't affect s1

    cout << "S1 Info: ";
    s1.getInfo();
    cout << "S2 Info: ";
    s2.getInfo();

    return 0;
}
