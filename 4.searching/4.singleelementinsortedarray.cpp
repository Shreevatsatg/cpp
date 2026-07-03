#include <iostream>
#include <vector>

using namespace std;

// search the single element in an sorted array with all numbers twice in pairs exept one find that

// brute force

// int search(vector<int> nums)
// {
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
//         {
//             return nums[i];
//         }
//     }

//         return -1;
// }

// optimized

int search(vector<int> nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while(start <= end)  
    {
        int mid = start + (end - start) / 2;

        // Boundary cases
        if(mid == 0)
            return nums[0];

        if(mid == nums.size() - 1)
            return nums[mid];

        if(nums[mid-1] != nums[mid] && nums[mid+1] != nums[mid])
            return nums[mid];

        if(mid % 2 == 0)
        {
            if(nums[mid] == nums[mid+1])
                start = mid + 2;
            else
                end = mid - 1;
        }
        else
        {
            if(nums[mid] == nums[mid-1])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 9, 9, 10, 10};
    cout << search(nums);
    return 0;
}
