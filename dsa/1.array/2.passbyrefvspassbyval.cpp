#include <iostream>
using namespace std;

void passbyref(int arr[], int size)
{
    int i;
    cout << "inside the passbyref function";
    for (i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
        cout << arr[i] << " ";
    }
}

int main()
{
    //passby reference
    int i;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    cout << "inside the main before pass by ref";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    passbyref(arr, size);
    cout << "inside the main after passby ref";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    //passby value
}