#include<iostream>
using namespace std;

int main(){
    int n,k,item;
    int arr[n];
    cout<<"enter the number of elements"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
cout<<"enter the position to inser"<<endl;
cin>>k;
cout<<"enter the element to be inserted"<<endl;
cin>>item;
for(int j=n-1;j>=k-1;j--){
    arr[j+1]=arr[j];
}
arr[k-1]=item;
n=n++;
for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
}
return 0;
};