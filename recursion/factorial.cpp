#include <iostream>
using namespace std;
// *recursion ------> when a function call itself directly or indirectly*

// Find factorial ??
int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursion case
    else
    {
        return n * factorial(n - 1);
    }

    // processing
    // int chhota = factorial(n - 1);
    // int bada = n * chhota;

    // return bada;
}

int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);
    cout << "Answer is : " << ans << endl;

    return 0;
}