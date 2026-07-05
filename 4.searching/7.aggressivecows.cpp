//same as previous algoritnms

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossible(int mid, vector<int> &stalls, int cows) {
    int lastCow = stalls[0];
    int count = 1;

    for(int i = 1; i < stalls.size(); i++) {
        if(stalls[i] - lastCow >= mid) {
            lastCow = stalls[i];
            count++;
            if(count == cows) return true;
        }
    }
    return false;
}

int getdistance(vector<int> &arr, int n, int c){
    sort(arr.begin(), arr.end());
    int s = 0;
    int e = arr[n-1] - arr[0];
    int ans = -1;

    while(s <= e) {
        int mid = (s + e) / 2;
        if(isPossible(mid, arr, c)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n=5,c=3;
    vector<int>arr={1,2,8,4,9};
    cout<<getdistance(arr,n,c)<<endl;
    return 0;
}