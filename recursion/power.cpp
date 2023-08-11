#include <iostream>
using namespace std;
// *recursion ------> when a function call itself directly or indirectly*

// Find Power of n ?  {power of 5^n}
int power(int n)
{

    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursive relation
    else
    {
        return 5 * power(n - 1);
    }

    // // processing
    // int c = power(n - 1);
    // int d = c * 5;

    // return d;
}

int main()
{
    int n;
    cin >> n;
    int ans = power(n);
    cout << "Power of 5 is : " << ans << endl;
}

// Find Power of n ?  {power of 2^n}
int power(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // processing
    // f(n) = n * f(n-1)  ---- 3^4 = 3 * 3^3
    // int smaller = power(n - 1);
    // int bigger = 2 * smaller;
    // return bigger;

    // Recursive case
    return 2 * power(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int ans = power(n);
    cout << "Power of n is : " << ans << endl;

    return 0;
}