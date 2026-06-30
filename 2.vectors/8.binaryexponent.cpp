#include <iostream>
using namespace std;

double binexpo(double x, int n)
{
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    long binform = n;

    if (n < 0)
    {
        x = 1 / x;
        binform = -binform;
    } // to handle negative power

    double ans = 1;

    while (binform > 0)
    {
        if (binform % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }
    return ans;
}

int main()
{
    int ans = binexpo(2, 3);
    cout << ans;
    return 0;
}
