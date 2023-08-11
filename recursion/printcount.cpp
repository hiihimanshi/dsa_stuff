#include <iostream>
using namespace std;
// *recursion ------> when a function call itself directly or indirectly*

// Find n count  ?
int printCount(int n)
{

    // Base case
    if (n == 0)
    {
        return 1;
    }

    // Recursive relation
    cout << n << endl;
    printCount(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << endl;
    printCount(n);
}
