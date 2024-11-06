#include<iostream>
using namespace std;

int main(){
    int a =10;
    int *aptr;//pointer declaration
    aptr = &a;//assighmimg a's address to aptr 
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;//accessing the value in a through pointer
    return 0; 

}