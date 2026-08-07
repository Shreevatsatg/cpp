#include<iostream>
#include<vector>

//countinverse(total number of elements satisfying i<j and arr[i]>arr[j])
using namespace std;

int merge(vector<int> &arr,int st, int mid, int end){//O(n)
    vector<int> temp;
    int i=st,j=mid+1;
    int invcount=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            invcount+=(mid-i+1);
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
    return invcount;
}

int mergesort(vector<int>&arr, int st, int end){
    if(st<end){
        int mid=st+(end-st)/2;

        int leftinvercount = mergesort(arr,st,mid);
        int rightinvcount =mergesort(arr, mid+1, end);

        int invcount= merge(arr,st,mid,end);

        return leftinvercount+rightinvcount+invcount;
    }
    return 0;
}


int main(){
    //brute force aproach: O(n^2)

    // vector<int>arr={6,3,5,2,7};
    // int count=0;
    // for(int i=0;i<5;i++){
    //     for(int j=1+1;j<5;j++){
    //         if(arr[i]>arr[j]){
    //             count ++;
    //         }
    //     }
    // }
    //cout<<count;

    //optimal approach: using merge sort: O(nlogn)
    vector<int> arr{6,3,5,2,7};
    int ans=mergesort(arr, 0, arr.size()-1);
    cout<<"inv count = " << ans;
    return 0;
}s