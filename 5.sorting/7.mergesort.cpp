//this algorithm is also part of 9.recursion because it uses recursion its recommended to visit this after completing recursion and backtracking basics

#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr,int st, int mid, int end){//O(n)
    vector<int> temp;
    int i=st,j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0; idx<temp.size(); idx++){
        arr[st+idx]=temp[idx];
    }
}

void mergesort(vector<int>&arr, int st, int end){
    if(st<end){
        int mid=st+(end-st)/2;

        mergesort(arr,st,mid);
        mergesort(arr, mid+1, end);

        merge(arr,st,mid,end);
    }
}

int main(){
    vector<int> arr{50,20,10,30,70,40,80,60};
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
    mergesort(arr, 0, arr.size()-1);
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
    return 0;
}