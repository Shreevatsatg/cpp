#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

//leet code :2965. Find Missing and Repeated Values  O(n^2)

    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s;
        vector<int> ans;
        int n=grid.size();
        int a,b;

        int expsum= 0, actualsum=0;

        //to find repeating value
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualsum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }

    expsum=(n*n)*(n*n+1)/2;
    b=expsum+a-actualsum;
    ans.push_back(b);

    return ans;

    }

    int main(){
        vector<vector<int>> grid={{1,3},{2,2}};
        vector<int> result= findMissingAndRepeatedValues(grid);
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<endl;
        }

        return 0;
    }