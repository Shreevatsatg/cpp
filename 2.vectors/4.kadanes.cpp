#include <iostream>
#include <vector>
using namespace std;

//problem number 53 (maximum subarray) on leetcode
//to find the maximum sum giving subarray from a array
int main()
{
    //broute force method
    // int n = 5;
    // int arr[5] = {-1,2,3,4,-5,};
    // int maxsum = 0;

    // for (int st = 0; st < n; st++)
    // {
    //     int currsum = 0;
    //     for (int end = st; end < n; end++)
    //     {
    //         currsum += arr[end];
    //         maxsum = max(currsum, maxsum); 
    //     }
    // }

    // cout << "max subarray sum =" << maxsum << endl;


    //kadane's algorithm
    int nums[5] = {-1,2,3,4,-5,};
    int maxsum = 0;
        int currentsum = 0;
        for (int val :nums){
            currentsum += val;
            maxsum=max(currentsum,maxsum);
            if(currentsum<0){
                currentsum=0;
            }
        }
        cout<< maxsum;

    return 0;
}