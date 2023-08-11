#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

void print(int arr[], int n)
{
    cout << "size of array " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int n, int key)
{
    print(arr, n);
    // base case
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }

    // recursive relation
    else
    {
        bool remainingPart = linearSearch(arr + 1, n - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {4, 6, 8, 9, 1};
    int n = 5;
    int key = 1;
    bool ans = linearSearch(arr, n, key);
    if (ans)
    {
        cout << "Present " << endl;
    }
    else
    {
        cout << "Absent " << endl;
    }

    return 0;
}