#include <iostream>
#include <vector>

using namespace std;

bool isvalid(vector<int> arr, int n, int m, int maxallowedpages )//time :O(n)
{
    int stu=1, pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxallowedpages){
            return false;
        }
        if(pages+arr[i]<=maxallowedpages){
            pages+=arr[i];
        }else{
            stu++;
            pages=arr[i];
        }
    }
    return stu>m ? false:true;
}

int allocatebook(vector<int> arr, int n, int m) // O(logn*n)
{   
    if(m>n){
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)//O(n)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum; // possible range of answer

    while (st <= end)//O(logn)
    {
        int mid = st + (end - st) / 2;

        if (isvalid(arr, n, m, mid))
        { // left
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocatebook(arr, n, m) << endl;
    return 0;
}
