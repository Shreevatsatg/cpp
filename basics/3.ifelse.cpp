#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << " enter your age";
    cin >> age;
    if (age >= 18)
    {
        cout << "Adult";
    }
    else
    {
        cout << "Minor";
    }
    return 0;
}