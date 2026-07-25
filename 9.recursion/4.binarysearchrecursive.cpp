#include<iostream>
#include<vector>

using namespace std;

int binarysearch(vector<int> nums,int target, int start,int end){
    int mid=start+(end-start)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]<target){
        return binarysearch(nums,target,mid+1,end);
    }
    else{
        return binarysearch(nums,target,start,mid-1);
    }

}

int main(){
    vector<int>nums={1,2,3,4,5,6,7,8,9,0};
    int target=1;
    cout<<binarysearch(nums,target,0,nums.size()-1);
    return 0;
}