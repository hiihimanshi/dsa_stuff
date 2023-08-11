#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

bool isSorted(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main()
{
    int arr[6] = {6, 1, 7, 9, 32, 4};
    int size = 6;
    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Array is not sorted " << endl;
    }
    return 0;
}