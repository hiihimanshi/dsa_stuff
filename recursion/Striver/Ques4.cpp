#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

// ? NAHI AAYA  SAMAJ ME ?

//* Print number from 1 to N but you are not allowed to do (i++) *

void print(int i, int n)
{
    print(i, n);

    // !base case
    if (i < 1)
    {
        return;
    }

    cout << i << endl;

    // !recursive relation
    print(i - 1, n);
}

int main()
{
    int i, n;
    cin >> n;
    cout << endl;

    print(n, n);
    return 0;
}