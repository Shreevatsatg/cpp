#include <iostream>
using namespace std;

int main()
{

    int i;
    int marks[5];
    cout << "enter the elements int the array " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    cout << "output is" << endl;

    for (i = 0; i < 5; i++)
    {

        cout << marks[i] << endl;
    }

    return 0;
};