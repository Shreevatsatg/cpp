#include<iostream>
#include<vector>

using namespace std;

//passby value
void nochange(int a){
 a=20;
}

//pass by  reference (pointer)
void change(int* a){
 *a=20;
}

//pass by referenece (alias)
void change2(int & b){
 b=20;
}

//pointer is a variable used to store address of another variable
int main(){
    int a = 10;
    //cout<<&a; //prints address of the a which is a hexa decimal number

    int* ptr=&a; //creating pointer
    cout<<ptr;

    int** ptrptr= &ptr; //pointer to pointer
    cout<<ptrptr;

    cout<<*(&a); //dereference prints the value at the address of a
    cout<<a; //same as dereference
    cout<<**(ptrptr)<<endl; //double dereference to print the element in the address stored in ptrptr(nested)

    //null pointer
    int** ptrn=NULL; //to keep it empty, and we cannot dereference NUll pointer;

    //pass by reference using pointer;
    
    cout<<a<<endl;
    nochange(a); //pass by value
    cout<<a<<endl;
    change(&a); //pass by reference (passing the address of a) now a original value changes 
     change2(a); //pass by reference using alias
    cout<<a<<endl;

    //another way to create pass by reference is by using aliasis


    return 0;
}