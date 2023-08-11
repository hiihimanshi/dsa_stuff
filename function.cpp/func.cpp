#include <iostream>
using namespace std;

/*int findSum(int a; int b)
{
    int sum = a + b;
    return sum;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int ans = divide(10, 2);
    cout << ans << endl;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int ans = multiply(2, 7);
    cout << ans << endl;
} */

/*void print_1_to_n(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    print_1_to_n(8);
}*/

/*bool isPrime(int n)
{
    int m = 2;
    while (m < n)
    {
        if (n % m == 0)
        {
            return false;
        }
        m++;
    }
    return true;
}

int main()
{
    bool ans = isPrime(21);
    cout << ans << endl;
    ans = isPrime(85);
    cout << ans << endl;
}*/

int factorial(int n)
{
    int ans = 1;
    int i = 1;
    while (i <= n)
    {
        ans = ans * i;
        i++;
    }
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);
    int ans = fact_n / (fact_r * fact_n_r);

    cout << ans << endl;

    // int n, r;
    // cin >> n >> r;
    // int fact_n = 1;
    // int i = 1;
    // while (i <= n)
    // {
    //     fact_n = fact_n * i;
    //     i++;
    // }

    // int fact_r = 1;
    // int j = 1;
    // while (j <= r)
    // {
    //     fact_r = fact_r * j;
    //     j++;
    // }

    // int fact_n_r = 1;
    // int k = 1;
    // while (i <= n - r)
    // {
    //     fact_n_r = fact_n_r * k;
    //     k++;
    // }
    // cout << fact_n / (fact_r * fact_n_r) << endl;

    return 0;
}