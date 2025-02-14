#include<iostream>
using namespace std;

int main(){
int nums[]={-5,15,6,3,5,99};
int n =6;
int i,s,l;

int smallest =INT8_MAX;
int largest =INT8_MIN;

for(i=0; i<n ;i++){
    // smallest=min(nums[i],smallest);
    // largest=imax(nums[i],largest);
    if (nums[i]<smallest){
        smallest =nums[i];
        s=i;
    
   }
   if (nums[i]>largest){
    largest =nums[i];
l=i;
}
   
}
cout<<"position:"<<s<<endl;
cout<<"value:"<<smallest<<endl;
cout<<"position:"<<l<<endl;
cout<<"value:"<<largest;
    return 0;
}
