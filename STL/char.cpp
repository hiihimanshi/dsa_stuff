#include <iostream>
using namespace std;

// lec 30 macros, global variables

// inline function
// int getMax(int &a, int &b)
// {
//     return (a > b) ? a : b;
// }
// int main()
// {
//     int a = 1, b = 2;
//     int ans = 0;
//     // we can optimize this if cond via tertiary opertor
//     // ans = (a > b) ? a : b;

//     ans = getMax(a, b);
//     cout << ans << endl;
//     a = a + 3;
//     b = b + 1;

//     ans = getMax(a, b);
//     cout << ans << endl;
//     // if(a>b){
//     //     ans = a;
//     // }
//     // else{
//     //     ans=b;
//     // }
// }

// global variable
//_________________________
// using macros
// #define PI 3.14

// int main()
// {
//     int r = 5;
//     // double pi = 3.14;
//     double area = PI * r * r;
//     cout << "Area of a Circle is =  " << area << endl;
// }

// dynamic memory allocation in 2d arr
// int main()
// {
//     int n;
//     cin >> n;

//     int **arr = new int *[n];

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int[n];
//     }

//     // taking input
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // taking output
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // releasing memory
//     for (int i = 0; i < n; i++)
//     {
//         delete[] arr[i];
//     }
//     delete[] arr;
// }

// int getSum(int *arr, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     // variable size array
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "answer is" << getSum(arr, n) << endl;

// char ch = 's';
// cout << sizeof(ch) << endl;

// char *c = &ch;
// cout << sizeof(c) << endl;
// }

/*int &funct(int n)    // it will throw an error BAD PRACTICE
{
    int num = a;
    int &ans = num;
    return ans;
}*/

// void update2(int &n)
// {
//     n++;
// }

// void update1(int n)
// {
//     n++;
// }

// int main()
// {

// int n = 6;
// cout << "before " << n << endl;
// update2(n);
// cout << "after " << n << endl;

// int x = 6;

// create a ref variable

// int &y = x;
// cout << x << endl;
// x++;
// cout << x << endl;
// y++;
// cout << x << endl;

// funct(n);
// return 0;
// }

// void update(int **p)
// {
//     // no  change
//     p = p - 1;

//     // *p = *p - 1;

//     // **p = **p - 1;
// }

// int main()
// {
//     int i = 10;
//     int *p = &i;
//     int **p2 = &p;

//     cout << "all is well" << endl;
//     cout << "printing p : " << p << endl;
//     cout << "address of p : " << &p << endl;
//     // cout << *p << endl;
//     // cout << **p2 << endl;
//     // cout << &p2 << endl;
//     // for printing value of i = 10 |
//     cout << i << endl;
//     cout << *p << endl;
//     cout << **p2 << endl;

//     //  for address
//     cout << &i << endl;
//     cout << p << endl;
//     cout << *p2 << endl;
//     cout << &p << endl;
//     cout << p2 << endl;

//     cout << endl
//          << endl;
//     cout << "before : " << i << endl;
//     cout << "before : " << p << endl;
//     cout << "before : " << p2 << endl;
//     update(p2);
//     cout << "after : " << i << endl;
//     cout << "after : " << p << endl;
//     cout << "after : " << p2 << endl;
// }

// lec 26 !!

// it passes pointer not arr int *arr
// int getSum(int arr[], int n)
// {
//     cout << "size of arr" << sizeof(arr) << endl;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     cout << "Sum is" << getSum(arr, 5) << endl;
// }

// lec 26 more about pointers and array !!!

// void print(int *p)
// {
//     cout << *p << endl;
// }

// void update(int *p)
// {
//     p = p + 5;
//     cout << p << endl;
//     *p = *p + 1;
// }

// int main()
// {
//     // functions in pointers !!

//     int val = 3;
//     int *p = &val;
//     print(p); // address print

//     // for address updation
//     cout << "before = " << p << endl;
//     update(p);
//     cout << "after = " << p << endl;

//     // for value updation
//     cout << "before = " << *p << endl;
//     update(p);
//     cout << "after = " << *p << endl;

//     // char array !!
//     // int arr[4] = {1, 2, 3, 4};
//     // char ch[8] = "liana";
//     // cout << arr << endl;
//     // cout << ch << endl;

//     // char *c = &ch[1];
//     // cout << c << endl;

//     // char temp = 'e';
//     // char *p = &temp;
//     // cout << p << endl;

//     // int arr[10];
//     // int *ptr = &arr[10];
//     // cout << ptr << endl;
//     // ptr = ptr + 1;
//     // cout << ptr << endl;

//     // int num[10] = {6};
//     // int *ptr = &num[10];
//     // cout << "Num : " << num << endl;
//     // cout << "Size of num is : " << sizeof(num) << endl;
//     // cout << "Size of ptr is : " << sizeof(ptr) << endl;
//     // cout << "Size of ptr is : " << sizeof(*ptr) << endl;
//     // cout << "Address of num is : " << num << endl;
//     // cout << "Address : " << &num << endl;
//     // cout << "Address : " << &ptr << endl;

//     // int him[10];
//     // cout << "size of him is : " << sizeof(him) << endl;

//     // int *ptr = &him[0];
//     // cout << "size of him pointer is : " << sizeof(him) << endl;
//     // cout << "size of him pointer is : " << sizeof(*ptr) << endl;

//     // int arr[10] = {4, 6, 7, 9};
//     // cout << "Address of first array is :  " << arr << endl;
//     // cout << "Address of first array is :  " << &arr[7] << endl;
//     // cout << arr[0] << endl;
//     // cout << "5th : " << *arr << endl;
//     // cout << "2nd : " << *arr + 2 << endl;
//     // cout << "2nd : " << *(arr + 1) << endl;

//     // int i = 3;
//     // cout << i[arr] << endl;
//     return 0;
// }

// lec 25 pointers !!
// int main()
// {
//     int num = 6;
//     int a = num;
//     a++;
//     cout << num << endl;

//     int *p = &num;
//     cout << num << endl;
//     (*p)++;
//     cout << num << endl;

// bad practice
// int *ptr;
// cout << *ptr << endl;

// int num = 10;
// cout << num << endl;

// // to know address of num - use &num
// cout << "Address of num : " << &num << endl;

// int *ptr = &num;
// cout << "Value = " << *ptr << endl;
// cout << "Address = " << ptr << endl;

// double d = 7.9;
// double *p_1 = &d;
// cout << "Value = " << *p_1 << endl;
// cout << "Address = " << p_1 << endl;

// cout << "Size of integer is : " << sizeof(num) << endl;
// cout << "Size of pointer is : " << sizeof(ptr) << endl;
// }

// lec 22 ques ??
// bool checkPalindrome(char a[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (a[s] != a[e])
//         {
//             return 0;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// void reverse(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1;

//     while (s < e)
//     {
//         swap(name[s++], name[e--]);
//     }
// }

// int getLength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     char name[20];
//     cout << "Enter your name " << endl;
//     cin >> name;

//     cout << "your name is : " << name << endl;
//     // check length of char !
//     cout << "Length of char is : " << getLength(name) << endl;

//     // reverse function !
//     reverse(name, getLength(name));
//     cout << "your reverse name is : " << name << endl;

//     // check Palindrome function !
//     cout << "Check Palindrome  or not  : " << checkPalindrome(name, getLength(name)) << endl;

//     return 0;
// }