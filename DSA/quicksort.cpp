#include<iostream>
using namespace std;

void quicksort(int a[10],int first,int last)
{
    int i,j,loc,temp;
    if(first<last);
    {
        loc=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[loc]&&i<last)
            i++;
            while(a[j]>a[loc])
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[loc];
        a[loc]=a[j];
        a[j]=temp;
        quicksort(a,0,j-1);
        quicksort(a,j+1,last);
    }
};
int  main(){
    int a[10],n,i;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements into the array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    quicksort(a,0,n-1);
    cout<<"sorted array "<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}