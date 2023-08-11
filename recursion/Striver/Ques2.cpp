#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

// *Print numbers from 1 to N*

void Print(int i, int n)
{

    // !base case
    if (i > n)
    {
        return;
    }

    cout << i << endl;

    // !recursive relation
    Print(i + 1, n);
}

int main()
{
    int i, n;
    cin >> i >> n;
    Print(i, n);
    return 0;
}