#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

// ? climb stair

int climbStair(int n)
{

    // base case
    if (n < 0)
    {
        return 0;
    }

    if (n == 0)
    {
        return 1;
    }

    // recursive relation
    int ans = climbStair(n - 1) + climbStair(n - 2);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = climbStair(n);
    cout << ans;
    return 0;
}