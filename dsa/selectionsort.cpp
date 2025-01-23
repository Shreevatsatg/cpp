#include<iostream>
using namespace std;

int main(){
    int i,n,a[20],j,min,temp;
    cout<<"enter the seze of array"<<endl;
    cin>>n;
    cout<<"enter the elements into array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"ellements before sorting is"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min =j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    cout<<"elements after sorting ="<<endl;
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}