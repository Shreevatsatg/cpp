#include <iostream>
#include <vector>

using namespace std;


// imp -> & is used as (bitwise or, address of, alias ), * is used as (multiplications, dereference)


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr<<endl; //pointer by default called constant pointer always pointes to the 0th element in the array or start element
    cout<<endl;

    int a=15;
    //arr=&a; //error because arr is a constant pointer
    cout<<&a<<endl;
    int* ptr= &a ; 
    ptr= ptr+1;//increments by 4 bytes that is size of the data type int
    cout<<ptr<<endl;
    cout<<endl;

    cout << arr<<endl;
    cout << arr+1<<endl;//increments by 4 bytes that is size of the data type int
    return 0;
}