#include<iostream>
#include<vector>

using namespace std;

//binary search only works on sorted data

//recursive

// int binarysearch(vector<int> & nums,int target,int start,int end){
    
//     if (start > end){
//         return -1;
//     }
//     int mid=(start+end)/2;
    
//      if(nums[mid]==target){
//         return mid;
//     }
//     if(nums[mid]<target){
//         return binarysearch(nums,target,mid+1,end);
//     }
//         return binarysearch(nums,target,start,mid-1);
    
// }

//iterative

int binarySearch(vector<int>& nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    int target=8;
    int st=0;
    int n=nums.size()-1;
    int end=n-1;
    //cout<<"element found at the index "<<binarysearch(nums,target,st,end);
    cout<<"element found at the index "<<binarySearch(nums, target);
    return 0;
}