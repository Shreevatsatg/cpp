#include <iostream>
#include <vector>

using namespace std;
// leetcode problem no: 33

int search(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        
        int mid = start + (end - start) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        if (nums[start] <= nums[mid]) // left sorted or not
        {
            if (nums[start] <= target && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (nums[mid] <= target && target <= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2};
    cout << "element found at " << search(nums, 0);
    return 0;
}