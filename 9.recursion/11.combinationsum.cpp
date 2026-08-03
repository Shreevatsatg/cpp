#include<iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> ans;      // Stores all valid combinations
    vector<int> current;          // Stores the current combination being built

    void solve(int index, vector<int>& candidates, int target) {

        // Base Case 1:
        // If target becomes 0, we found a valid combination.
        if (target == 0) {
            ans.push_back(current);
            return;
        }

        // Base Case 2:
        // If we have checked all candidates or target becomes negative,
        // no valid combination can be formed.
        if (index == candidates.size() || target < 0)
            return;

        // -----------------------------------------------------
        // Choice 1: Take the current candidate
        // -----------------------------------------------------
        if (candidates[index] <= target) {

            // Add current candidate
            current.push_back(candidates[index]);

            // Stay at same index because we can reuse this number
            solve(index, candidates, target - candidates[index]);

            // Backtrack:
            // Remove the last inserted element before exploring
            // the next possibility.
            current.pop_back();
        }

        // -----------------------------------------------------
        // Choice 2: Skip current candidate
        // -----------------------------------------------------
        solve(index + 1, candidates, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        solve(0, candidates, target);

        return ans;
    }
};

int main(){
    Solution s1;
    vector<int> candidates = {2,3,6,7};
    vector<vector<int>> result = s1.combinationSum(candidates, 7);

    for(int i=0;i<result.size();i++){
        for(int j=0;j<(result[i].size());j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}