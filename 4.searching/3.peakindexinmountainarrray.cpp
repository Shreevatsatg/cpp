#include <iostream>
#include <vector>
using namespace std;

// brute force O(n)
//  int search(vector<int>nums){
//      for (int i=0;i<nums.size();i++){
//          if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
//              return i;
//          }
//      }

//     return -1;
// }


//optimised using modifies binary search algoritm O(logn)
// int search(vector<int> nums)
// {
//     int start = 0;
//     int end = nums.size() - 1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
//         {
//             return mid;
//         }
//         if(nums[mid-1]<nums[mid]&&nums[mid<nums[mid+1]]){
            
//             start=mid+1;
//         }
//         else if(nums[mid-1]>nums[mid]&&nums[mid>nums[mid+1]]){
            
//             end=mid;
//         }
//         else{
//              return -1;
//         }

//     }
//     return -1;
// }


//even more simpler and straight foreword way
int search(vector<int> nums)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] > nums[mid + 1])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    cout << search(nums);
    return 0;
}