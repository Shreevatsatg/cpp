#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return index if found
        }
    }

    return -1; // Not found
}

int main()
{
    int arr[] = {12, 5, 8, 21, 17, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int index = linearSearch(arr, size, target);

    if (index != -1)
    {
        cout << "Element found at index " << index << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}