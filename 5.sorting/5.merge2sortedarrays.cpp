#include<iostream>
#include<vector>
using namespace std;

void merge2array(vector<int> & num1,int m,vector<int> & num2, int n){
    int idx=m+n-1;
    int i=m-1;
    int j=n-1;
    while(i>=0&&j>=0){
        if(num1[i]>=num2[j]){
            num1[idx--]=num1[i--];
        }
        else{
            num1[idx--]=num2[j--];
        }
    }
    while(j>=0){
        num1[idx--]=num2[j--];
    }
}

int main(){
    vector<int> num1={1,2,3,4,5,0,0,0,0,0,0}, num2={2,3,4,5,6,7};
    int m=5,n=6;
    merge2array(num1,m,num2,n);
    for(int i=0;i<num1.size();i++){
        cout<<num1[i];
    }
}