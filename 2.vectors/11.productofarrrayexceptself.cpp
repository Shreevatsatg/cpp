#include <iostream>
#include <vector>
using namespace std;

// brute force O(n^2)
// vector<int> productExceptSelf(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> ans(n, 1);
//     for (int i = 0; i < n; i++)
//     {
//         int prod = 1;
//         for (int j = 0; j < n; j++)
//         {
//             if (j != i)
//             {
//                 prod *= nums[j];
//             }
//         }
//         ans[i] = prod;
//     }

//     return ans;
// }



//optimized O(n)
// vector<int> productExceptSelf(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> ans (n, 1);
//     vector<int> prefix(n, 1);
//     vector<int> sufix(n, 1);
//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] = prefix[i - 1] * nums[i - 1];
//     }
//     for (int j = n-2; j >= 0; j--)
//     {
//         sufix[j] = sufix[j + 1] * nums[j + 1];
//     }
//     for (int k = 0; k < n; k++)
//     {
//         ans[k] = prefix[k] * sufix[k];
//     }

//     return ans;
// }




//optimized with O(n) and space complexity

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans (n, 1);
    vector<int> sufix(n, 1);
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int suffix=1;
    for (int j = n-2; j >= 0; j--)
    {
        suffix *= nums[j + 1] ;
        ans[j] *=suffix;
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}