#include<iostream>
#include<vector>

using namespace std;

//leetcode problem no:51. N-Queens

class Solution {

    bool issafe(vector<string>&board,int row,int col,int n){ //O(n)
        //horizontally
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q'){
                return false;
            }
        }
        //vertically
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }

        //left top diagonal
        for(int i=row, j=col;i>=0 &&j>=0;i--,j--){
                if(board[i][j]=='Q'){
                    return false;
                }
        }

        //right top diagonal
        for(int i=row, j=col;i>=0 &&j>=0;i--,j++){
                if(board[i][j]=='Q'){
                    return false;
                }
        }

        return true;
    }
    void solveq(vector<string>&board,int row,int n,vector<vector<string>> &ans){
        if(row==n){
            ans.push_back({board});
            return;
        }

        for(int j=0;j<n;j++){
            if(issafe(board,row,j,n)){
                board[row][j] ='Q';
                solveq(board,row+1,n,ans);
                board[row][j]='.';
            }
        }


    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        solveq(board,0,n,ans);
        return ans;
    }
};

int main(){
    vector<vector<string>> ans;
    Solution s;
    ans = s.solveNQueens(4);
    for(auto val : ans){
        for(auto i : val){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}