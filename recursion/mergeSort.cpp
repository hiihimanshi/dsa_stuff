#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] == arr[mainArrayIndex++];
    }

    int mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] == arr[mainArrayIndex++];
    }

    // !merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
    }
}

void mergeSort(int arr[], int s, int e)
{
    // !base case
    if (s > e)
    {
        return;
    }

    int mid = (s + e) / 2;

    // !left side solve
    mergeSort(arr, s, mid);

    // !right side solve
    mergeSort(arr, mid + 1, e);

    // !merge
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {25, 4, 61, 12, 90};
    int n = 5;
    mergeSort(arr, 0, n - 1);
    return 0;
}