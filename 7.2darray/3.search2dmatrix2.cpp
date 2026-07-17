#include<iostream>
#include<vector>

using namespace std;
//leetcode problem no:240 search a 2d matrix II  (this works for 74 th question as well but not optimal for that)

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n =matrix[0].size();

        int row = 0;
        int col = n - 1;

        while (row < m && col >= 0 ) {

            if (matrix[row][col] == target) {
                return true;
            } else if (target < matrix[row][col]) {
                col--;
            } else {
                row++;
            }
        }
        return false;
    }

    int main(){
        vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 5;
    searchMatrix(matrix, target) ? cout << "element found" : cout << "element not found";
        return 0;
    }