#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int key, int s, int e)
{
    print(arr, s, e);
    // base case
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, key, mid + 1, e);
    }
    if (arr[mid] > key)
    {
        return binarySearch(arr, key, s, mid - 1);
    }
}

int main()
{
    int arr[6] = {25, 34, 56, 78, 89, 100};
    int n = 6;
    int key = 89;
    cout << "Present or not " << binarySearch(arr, key, 0, 5);
    return 0;
}

// ! Normal method !
/*
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s / 2);
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s / 2);
    }
    return -1;
}

int main()
{
    int num[6] = {25, 67, 43, 88, 12, 50};
    int numIndex = binarySearch(num, 6, 12);
    cout << "Index of 12 is  : " << numIndex << endl;
    return 0;
}
*/