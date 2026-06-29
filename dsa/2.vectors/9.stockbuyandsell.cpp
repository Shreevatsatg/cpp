#include <iostream>
#include <vector>
using namespace std;

int maxprofit(vector<int> &price)
{
    int maxprofit = 0;
    int minprice = INT8_MAX;
    for (int i = 1; i < price.size(); i++)
    {
        if (price[i] > minprice)
        {
            maxprofit = max(maxprofit, price[i] - minprice);
        }
        else
        {
            minprice = min(minprice, price[i]);
        }
    }
    return maxprofit;
}

int main()
{
    vector<int> price = {7, 1, 5, 3, 6, 4};
    int ans = maxprofit(price);
    cout<<ans;
    return 0;
}