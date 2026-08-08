#include <iostream>
#include <vector>

using namespace std;
// every element in a set will have 2 option wither to be included or excluded from the subset

void findsubset(vector<int> &arr, vector<int> &ans, int i)
{
    if (i == arr.size())
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }
    // include
    ans.push_back(arr[i]);
    findsubset(arr, ans, i + 1);

    // exclude
    ans.pop_back();
    findsubset(arr, ans, i + 1);
}

/*time complexity =total calls * time taken in each call
(2^n *n) * (constant O(1))
tc =O(2^n *n)
*/

// leetcode problem no:78. Subsets

void allsubsets(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &allsubset)
{
    if (i == arr.size())
    {
        allsubset.push_back({ans});
        return;
    }
    // include
    ans.push_back(arr[i]);
    allsubsets(arr, ans, i + 1, allsubset);

    // exclude
    ans.pop_back();
    allsubsets(arr, ans, i + 1, allsubset);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> ans;
    vector<vector<int>> allsubset;
    allsubsets(nums, ans, 0, allsubset);
    return allsubset;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    findsubset(arr, ans, 0);

    vector<vector<int>> anss;
    anss=subsets(arr);
    for(vector<int> val:anss){
        for(int v:val){
            cout<<v<<" ";
        }
        cout<<endl;
    }

    return 0;
}
