#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A show" << endl;
    }
};

// Use virtual inheritance to solve Diamond Problem
class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main() {
    D obj;
    obj.show(); // No ambiguity because of 'virtual' inheritance

    return 0;
}
