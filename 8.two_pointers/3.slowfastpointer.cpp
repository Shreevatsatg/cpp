#include<iostream>
#include <vector>

using namespace std;

//leetcode problem no: 287. Find the Duplicate Number

    int findDuplicate(vector<int>& nums) {

        // int n=nums.size();
        // unordered_set<int>s;
        // int ans;
        // for(int i=0;i<n;i++){
        //     if(s.find(nums[i])!=s.end()){
        //         return=nums[i];
        //         break;
        //     }
        //     s.insert(nums[i]);
        // }
        // return 0; //this works but they asked for O(1)time complexity this
        // uses O(N)

        int slow = nums[0], fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = nums[0];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }

    int main(){
        vector<int> nums={1,3,4,2,2};
        cout<<findDuplicate(nums);
        return 0;
    }