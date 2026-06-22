#include <iostream>
#include <vector>
using namespace std;
// remove all the unique values and keep the 1 non unique value
//solve problem number 136(single NUmber) on leetcode
int main()
{
    // xor(^) returns 0 when 2 elements are same
    vector<int> vec = {1, 2, 1, 2, 3};
    int ans = 0;
    for (int val : vec)
    {
        ans = ans ^ val; // ans ^=val;
    }

    cout << ans;
    return 0;
}