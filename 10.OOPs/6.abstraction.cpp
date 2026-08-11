#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    // Pure Virtual Function
    virtual void draw() = 0;

    void commonFunction() {
        cout << "All shapes have a common function." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate abstract class
    
    Circle c;
    c.draw();
    c.commonFunction();

    Square s;
    s.draw();

    return 0;
}
