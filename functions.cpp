#include<iostream>
using namespace std;
int sum(int ,int);//you must declare the function first or you should write the full function before calling in it main function  
int main()
{
    int n ;
    int m;
    cin>>n>>m;
    cout<<sum(n,m)<<endl;
return 0;
}
int sum(int n,int m)
{
    int sum=n+m;
    return sum;

}

  