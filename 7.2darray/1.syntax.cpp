#include <iostream>
#include<vector>
using namespace std;

int main()
{
    // syntax
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = 4;
    int cols = 3;
    cout << matrix[2][1] << endl;
    matrix[2][1] = 18;
    cout << matrix[2][1] << endl;

    // loops
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // input

    // int matrix2[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // int row2 =4;
    // int cols2=3;
    // for(int i=0;i<row2;i++){
    //     for(int j=0;j<cols2;j++){
    //         cin>>matrix2[i][j];
    //     }
    // }

    // for(int i=0;i<row2;i++){
    //     for(int j=0;j<cols2;j++){
    //         cout<<matrix2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // in memory 2d arrays can be saved in 2 ways
    // 1. row major (row wise)(most common)
    // 2.column major(column wise)

    // linear search
    int num = 10;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == num)
            {
                cout << num << " found at " << i << " row and " << j << " column" << endl;
            }
        }
    }

    // maximum row sum
    int rowsum = 0;
    for (int i = 0; i < row; i++)
    {
        int rowsum2 = 0;
        for (int j = 0; j < cols; j++)
        {
            rowsum2 += matrix[i][j];
        }
        rowsum = (max(rowsum, rowsum2));
    }
    cout << "maximum row sum = " << rowsum;

    // maximum column sum
    int colsum = 0;
    for (int i = 0; i < cols; i++)
    {
        int colsum2 = 0;
        for (int j = 0; j < row; j++)
        {
            colsum2 += matrix[j][i];
        }
        colsum = (max(colsum, colsum2));
    }
    cout << "maximum column sum = " << colsum << endl;

    // diagonals (rows=cols so we take "n" for both row and col count)
    // diagonal sum

    int matrix3[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int n = 3;
    int sum = 0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             sum+=matrix3[i][j];
    //         }
    //         else if(j==n-i-1){
    //             sum+=matrix3[i][j];
    //         }
    //     }
    // }

    // optimized;
    for (int i = 0; i < n; i++)
    {

        sum += matrix3[i][i];
        if (i != n - i - 1)// to avoide middle element from adding twice
        { 
            sum += matrix3[i][n - i - 1];
        }
    }
    cout << "diagonal sum = " << sum << endl; // 
    
    //2d vector
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    //rows=mat.size();
    //cols=mat[i].size();
    //advantage of vextor matrix is that we can have different number of elements in each row if we want
    cout<<mat[0][0]<<endl;

    //we can use same loops and all as 2d array

    return 0;
}