#include<iostream>
using namespace std;

int main(){
    int n,j;
    cout<<"enter the size"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
for( int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
    if(a[j]>a[j+1])
    {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    }
    }
    cout<<"after sorting "<<endl;
    for(int i=0;i<n;i++){
cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}


