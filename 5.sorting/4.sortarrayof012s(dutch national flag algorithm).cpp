
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//leetcode question number 75
// sort array of 0's, 1's, 2's

void sortarray(vector<int> &nums)
{
    // sort(nums.begin(),nums.end());//brute force O(nlogn)

    // int n=nums.size(); //total O(n)
    // int count0=0,count1=0,count2=0;
    // for(int i=0;i<n;i++){//O(n)
    //     if(nums[i]==0){
    //         count0++;
    //     }
    //     else{
    //         nums[i]==1?count1++:count2++;
    //     }
    // int idx=0;
    // //O(n)
    // for(int i=0;i<count0;i++){
    //     nums[idx++]=0;
    // }
    // for(int i=0;i<count1;i++){
    //     nums[idx++]=1;
    // }
    // for(int i=0;i<count2;i++){
    //     nums[idx++]=2;
    // }
    // }

    // dutch national flag algorithm
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while (mid <= high) //O(n)
    {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

    int main()
    {
        vector<int> nums = {2, 0, 2, 1, 1, 0, 1};
        sortarray(nums);
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i];
        }
        return 0;
    }
