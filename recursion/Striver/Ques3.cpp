#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

// ? NAHI AAYA  SAMAJ ME ?

// *Print number from n to 1*

void print(int i, int n)
{

    // !base case
    if (i < 1)
    {
        return;
    }

    cout << i << endl;

    //  !recursive relation
    print(i - 1, n);
}

int main()
{
    int i, n;
    cin >> i >> n;
    cout << endl;
    print(n, n);
    return 0;
}