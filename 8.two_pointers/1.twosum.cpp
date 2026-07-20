#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

//leetcode problem no :1 two sum

    vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int, int> m;
        vector<int> ans;

        for(int i=0;i<arr.size();i++){
            int first =arr[i];
            int sec= tar-first;

            if(m.find(sec)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first]=i;
        }
        return ans;
    }
int main(){
    vector<int>nums ={2,7,11,15};
int target = 9;
vector<int> ans= twoSum(nums,target);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}
    return 0;
}