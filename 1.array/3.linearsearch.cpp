#include <iostream>
using namespace std;

void leanearsearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << " target found at index " << i;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int target = 9;

    leanearsearch(arr, size, target);
    return 0;
}