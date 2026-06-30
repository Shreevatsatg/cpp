#include <iostream>
using namespace std;

void arrayreverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "array after reversing: " << endl;
    for (int i=0;i<size;i++){
        cout <<arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    cout << "original array:" << endl;
    for (int i = 0; i < size; i++)
    {
       cout<< arr[i];
    }
    cout<<endl;
    arrayreverse(arr, size);
    return 0;
}