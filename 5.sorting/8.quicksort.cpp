#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &arr, int st, int end){
    int pivott=arr[end];
    int i=st-1;
    for(int j=st; j<=end-1; j++){
        if(arr[j]<=pivott){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[end]);
    return i+1;
}
void quicksort(vector<int>&arr,int st, int end){
    if(st>=end){
        return;
    }
    int pividx=partition(arr,st,end);
    quicksort(arr, st, pividx-1);
    quicksort(arr,pividx+1, end);
}

int main(){
    vector<int> arr={1,3,2,1,3};
    int st=0;
    int end=arr.size()-1;
    quicksort(arr,st,end);
    for(int x: arr){
        cout<<x<<" ";
    }
}

//Tc= O(nlogn) -average case(generally)
//Tc=O(n^2) -worst case(if array is already sorted and we take any end as pivot(when we take smallest or largest value as pivot))

//Sc:O(1)