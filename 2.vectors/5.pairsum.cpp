#include <iostream>
#include <vector>
using namespace std;

// vector<int> bruteforce(vector<int> nums, int target){
//  vector<int> ans;
//  int n= nums.size();

//  for(int i=0; i<n; i++){
//     for(int j=0;j<n;j++){
//         if(nums[i]+nums[j]== target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//         }
//     }
//     return ans;
//  }
// }

vector<int> optimized(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairsum = nums[i] + nums[j];
        if (pairsum > target)
        {
            j--;
        }
        else if (pairsum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int target = 4;

    // vector<int> ans = bruteforce(nums, target);

    vector<int> ans = optimized(nums, target);

    cout << "elements giving sum equal to target "<<target <<" are ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << nums[ans[i]] << " ";
    }

    return 0;
}