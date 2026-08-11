#include <iostream>
#include <string>
using namespace std;

// Class definition
class Teacher {
public:
    // Data members (Attributes)
    string name;
    string dept;
    string subject;
    double salary;

    // Member functions (Methods)
    void changeDept(string newDept) {
        dept = newDept;
    }

    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Object instantiation
    Teacher t1;
    t1.name = "Shradha";
    t1.dept = "Computer Science";
    t1.subject = "C++";
    t1.salary = 25000;

    t1.getDetails();

    return 0;
}
