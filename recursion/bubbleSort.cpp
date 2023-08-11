#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

void sortArray(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // recursive relation
    sortArray(arr, n - 1);
}

int main()
{
    int arr[6] = {10, 1, 7, 6, 14, 9};

    sortArray(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}