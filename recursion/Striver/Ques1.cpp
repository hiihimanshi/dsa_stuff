#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

// *Print name n times*

void print(int n, int i)
{

    // base case
    if (i > n)
    {
        return;
    }

    cout << "Himanshi" << endl;

    print(n, i + 1);
}

int main()
{
    int i;
    int n;
    cin >> n >> i;
    print(n, i);
    return 0;
}