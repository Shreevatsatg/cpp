#include <iostream>
#include <string>
using namespace std;

// 1. Compile Time Polymorphism: Function Overloading
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

// 2. Runtime Polymorphism: Virtual Functions
class Parent {
public:
    virtual void hello() {
        cout << "Hello from Parent" << endl;
    }
};

class Child : public Parent {
public:
    void hello() override {
        cout << "Hello from Child" << endl;
    }
};

// 3. Operator Overloading
class Complex {
public:
    int real;
    int imag;

    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading + operator
    Complex operator+(const Complex &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Function Overloading
    Calculator calc;
    cout << "Sum (2 nums): " << calc.add(5, 10) << endl;
    cout << "Sum (3 nums): " << calc.add(5, 10, 15) << endl;

    // Virtual Functions (Dynamic Binding)
    Parent *ptr;
    Child obj;
    ptr = &obj;
    ptr->hello(); // Calls Child's hello() due to 'virtual'

    // Operator Overloading
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 + c2;
    c3.display();

    return 0;
}
