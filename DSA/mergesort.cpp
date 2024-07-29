#include<iostream> 
using namespace std;

void merge(int arr[],int l,int mid,int r){
int n1=mid-l+1;
int n2=r-mid;

int a[n1];
int b[n2];//temp arr

for(int i=0;i<n1;i++){
    a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+l+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            k++;j++;

        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2){
        arr[k]=a[j];
        k++;j++;
    }
}

void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}


int  main() 
{ 
    int arr[10], i, n; 
    cout<<"Enter the number of elements:"<<endl; 
    cin>>n;
    cout<<"Enter the elements:"<<endl; 
    for (i = 0; i < n; i++) 
    cin>>arr[i]; 
    cout<<"Elements before sorting:"<<endl; 
    for(i = 0; i < n; i++) 
    cout<<arr[i]<<endl;
    mergesort(arr, 0, n - 1); 
    cout<<"\nSorted array:"<<endl; 
    for (i = 0; i < n; i++) 
    cout<< arr[i]<<" "; 
    return 0; 
}
