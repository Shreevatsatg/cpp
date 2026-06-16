#include <iostream>
using namespace std;

int main()
{
    int day = 2;
    switch (day)
    {
    case 1:
        cout << "Mon";
        break;

    case 2:
        cout << "Tue";
        break;

    default:
        cout << "Invalid";
    }
}