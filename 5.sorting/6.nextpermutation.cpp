#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void nextpermutation(vector<int>&nums){
    //1.find pivot
    int pivot=-1,n=nums.size();

    for(int i=n-1;i>=0;i-- ){
        if(nums[i]<nums[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot==-1){
        reverse(nums.begin(),nums.end());
        return;
    }

    //2.next larger element
    for(int i=n;i>pivot;i--){
        if(nums[i]>nums[pivot]){
            swap(nums[i],nums[pivot]);
            break;
        }
    }

    //3.reverse
    int i=pivot+1,j=n-1;
    while(i<=j){
        swap(nums[i++],nums[j--]);
    }
}

int main(){
    vector<int>nums={1,2,3};
    nextpermutation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
    return 0;
}