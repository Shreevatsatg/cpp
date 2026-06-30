#include <iostream>
#include <vector>
using namespace std;

// brute force (O(n^2))

// int maxarea(vector<int> &height)
// {
//     int maxwater=0;
//     int n= height.size();
//     for(int i=0;i<n;i++){
//         int left =height[i];
//         for(int j=i+1;j<n;j++){
//             int right=height[j];
//             int width=j-i;
//             int height=min(left,right);
//             int area=width*height;
//             maxwater=max(maxwater,area);
//         }
//     }
//     return maxwater;
// }

// O(n)

int maxarea(vector<int> &height)
{
    int n = height.size();
    int lp = 0;
    int rp = n - 1;
    int maxwater = 0;
    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int area = w * ht;
        maxwater = max(maxwater, area);
        height[lp] < height[rp] ? lp++ : rp--;
    };
    return maxwater;
}

int main()
{
    vector<int> height = {1, 2, 3, 4, 5, 6};
    cout << maxarea(height);

    return 0;
}