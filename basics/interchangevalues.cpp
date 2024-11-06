#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"enter two numbers\n ";
    cin>>a>>b;
    cout<<"before inter changing :\na="<<a<<"\nb="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after inter changing:\na="<<a<<"\nb="<<b<<endl;
    return 0;
}
