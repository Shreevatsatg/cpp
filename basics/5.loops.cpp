#include <iostream>
using namespace std;

int main()
{
    // for loop
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }

    // while loop
    int i = 1;
    while (i <= 5)
    {
        cout << i << " ";
        i++;
    }
    
    // do while loops
    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= 5);
    return 0;
}