#include <iostream>
#include <string>
using namespace std;

class A {
private:
    int privateData = 100;

public:
    // Static variable (shared among all objects)
    static int count;

    A() {
        count++;
    }

    // Static function (can only access static members)
    static void getCount() {
        cout << "Total objects: " << count << endl;
    }

    // Friend Function declaration
    friend void revealSecret(A &obj);
};

// Definition of friend function
void revealSecret(A &obj) {
    cout << "Friend function accessing private data: " << obj.privateData << endl;
}

// Initializing static variable
int A::count = 0;

int main() {
    A obj1, obj2, obj3;

    A::getCount(); // Static function call

    revealSecret(obj1); // Friend function call

    return 0;
}
