#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;

    char  op;
    cout<<"enter an operator "<<endl;
    cin>>op;

    switch(op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    default:
        cout<<"enter an another operator"<<endl;
        break;
    }
    return 0;
}