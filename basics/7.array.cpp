#include <iostream>
using namespace std;

int main() {
    // defination
    int arr[5] = {1, 2, 3, 4, 5};

    // accessing
    cout << arr[0];

    // loop
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // size
    int n = sizeof(arr) / sizeof(arr[0]);
}