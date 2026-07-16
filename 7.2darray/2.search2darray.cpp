#include <iostream>
#include <vector>

using namespace std;

// leet code problem no: 74;

// 1st variation
bool searchMatrix1(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();

    int start = 0;
    int end = m * n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int row = mid / n;
        int col = mid % n;

        if (target == matrix[row][col])
        {
            return true;
        }
        else if ( target > matrix[row][col] )
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}


// 2nd variation
bool searchrow(vector<vector<int>> &matrix, int target, int row)
{
    // to find the element using binary search inside the row
    int n = matrix[0].size();

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid2 = start + (end - start) / 2;
        if (target== matrix[row][mid2])
        {
            return true;
        }
        else if (target>matrix[row][mid2] )
        {
            start = mid2 + 1;
        }
        else
        {
            end = mid2 - 1;
        }
    }
    return false;
}
bool searchMatrix2(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();

    int rowstart = 0;
    int rowend = m - 1;

    while (rowstart <= rowend)
    {
        int mid = rowstart + (rowend - rowstart) / 2;

        if (target >= matrix[mid][0] && target <= matrix[mid][n-1])
        {
            return searchrow(matrix, target, mid);
        }
        else if (target >=matrix[mid][n-1])
        {
            rowstart = mid + 1;
        }
        else
        {
            rowend = mid -1 ;
        }
    }
    return false;
}



int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    searchMatrix1(matrix, target) ? cout << "element found" : cout << "element not found";
}