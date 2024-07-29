#include<iostream>
using namespace std;

int main(){
    int i,n,a[20],j,min;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the elements into the array"<<endl; 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"elements before sorting="<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
            int temp =a[j];
            a[j]=a[i];
            a[i]=temp;
            
            }
        }

    }
    cout<<"elements after sorting :"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
