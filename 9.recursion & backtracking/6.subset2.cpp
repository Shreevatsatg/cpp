#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//leetcode problem no: 90. subsets 2

class Solution {
public:

    void allsubsets(vector<int>&nums,vector<int>&ans,vector<vector<int>>& subsets,int i){
        if(i==nums.size()){
            subsets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        allsubsets(nums,ans,subsets,i+1);

        ans.pop_back();
        
        //to remove duplicate
        int j=i+1;
        while(j<nums.size() && nums[i]==nums[j]){
            j++;
        }
        i=j;


        allsubsets(nums,ans,subsets,i);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>subsets;
        vector<int> ans;
        allsubsets(nums,ans,subsets,0);
        return subsets;
    }
};

int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>>subsets;
    Solution s;
    subsets=s.subsetsWithDup(nums);
    for(vector<int> val:subsets){
        for(int v:val){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}