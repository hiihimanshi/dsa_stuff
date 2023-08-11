#include <iostream>
using namespace std;

// finding GCD of a and b ??
int gcd(int a, int b)
{

    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b :  " << endl;
    cin >> a >> b;
    cout << endl;

    int ans = gcd(a, b);
    cout << "GCD of a and b is : " << ans;
}

// selection sort ques ??? ni hua!
// void selectionSort(int n, int arr[])
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }

// int main()
// {
//     int arr[5] = {65, 20, 13, 11, 46};

//     cout << "selection sort of array is : " << selectionSort << endl;
// }

// binary search ques ???
// int binarySearch(int arr[], int size, int key)
// {

//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start / 2);

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }

//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start / 2);
//     }
//     return -1;
// }

// int main()
// {
//     int even[6] = {2, 4, 6, 8, 10, 12};
//     int odd[5] = {1, 3, 5, 7, 9};

//     int evenIndex = binarySearch(even, 6, 8);
//     int oddIndex = binarySearch(odd, 5, 9);
//     cout << "Index of 8 is : " << evenIndex << endl;
//     cout << "Index of 9 is : " << oddIndex << endl;

//     return 0;
// }

// long long int sqrtInteger(int n, int x)
// {
//     int s = 0;
//     int e = n;
//     int mid = s + (e - s) / 2;
//     long long int ans = -1;

//     while (s <= e)
//     {
//         int square = mid * mid;
//         if (square == n)
//         {
//             return mid;
//         }
//         if (square < n)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// double morePrecision(int n, int precision, int tempSol)
// {
//     double factor = 1;
//     double ans = tempSol;

//     for (int i = 0; i < precision; i++)
//     {
//         factor = factor / 10;

//         for (double j = ans; j * j < n; j = j + factor)
//         {
//             ans = j;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;

//     int tempSol = sqrtInteger(n);
//     cout << "answer is " << morePrecision(n, 3, tempSol);
//     return 0;
// }

// not done yet ???
//  int binarySearch(int n, int x)
// {
//     int s = 0;
//     int e = n;
//     int mid = s + (e - s) / 2;
//     int ans = -1;

//     while (s <= e)
//     {
//         int square = mid * mid;
//         if (square == n)
//         {
//             return mid;
//         }
//         if (square < n)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// int mySqrt(int x)
// {
//     return binarySearch(x);
// }

// int main()
// {
//     int x;
//     cout << "Enter your number  " << endl;
//     cin >> x;
//     cout << "Square root of the number is  " << endl;

//     return 0;
// }

/*int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{

    int arr[5] = {19, 10, 8, 4, 1};

    cout << " Pivot is  " << getPivot(arr, 5) << endl;

    return 0;
}

 ?? int firstOcc(int arr[], int n, int key)
{

    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (arr[mid] < key) // right m jao
        {
            start = mid + 1;
        }
        else if (arr[mid] > key) // left m jao
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{

    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] < key) // right m jao
        {
            start = mid + 1;
        }
        else if (arr[mid] > key) // left m jao
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int num[12] = {1, 2, 3, 4, 5, 3, 3, 3, 3, 4, 5, 3};

    cout << "first Occ of 3 is at index " << firstOcc(num, 12, 3) << endl;
    cout << "last Occ of 3 is at index " << firstOcc(num, 12, 3) << endl;

    return 0;
}

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};

    int evenIndex = binarySearch(even, 6, 12);
    cout << "Index of 12 is  " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 7);
    cout << "Index of 7 is  " << oddIndex << endl;

    return 0;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {

        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{
    int arr[6] = {1, 0, 1, 1, 0, 0};
    sortOne(arr, 6);
    printArray(arr, 6);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even[6] = {2, 4, 6, 8, 9, 12};
    int odd[5] = {5, 112, 34, 56, 77};

    swapAlternate(even, 6);
    printArray(even, 6);

    cout << endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);

    cout << endl;

    return 0;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    int n;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of the numbers is :" << sum;
    return 0;
}*/

/* bool search(int array[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] = element)
            return 1;
    }
    return 0;
}

int main()
{
    int array[10] = {5, 10, 15, 20};
    cout << "Enter the element to search for:" << endl;
    int element;
    cin >> element;

    bool found = search(array, 10, element);
    if (found)
    {
        cout << "element is present" << endl;
    }
    else
    {
        cout << "element is not present" << endl;
    }
}*/

/*int array[10];
   cout << "Value at 8 index"<<" "<< array[8];*/
/*void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;
    int arr[10];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    print(arr, n);

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "max value" << max;

    int min = 100;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "min value"
         << " " << min;
} */