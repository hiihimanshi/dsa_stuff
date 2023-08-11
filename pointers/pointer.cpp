#include <iostream>
using namespace std;

// int main()
//{
//  *lecture 25*
//  int num = 5;
//  cout << num << endl;

// // num / *ptr will print same val == 5
// int *ptr = &num;
// cout << "Value : " << *ptr << endl;

// // to know  the address of num/variable ___ &num
// cout << "address of num is : " << &num << endl;
// // ptr / &num will print the same address as ---08
// cout << "Address ptr : " << ptr << endl;

// // size
// cout << "Size of integer is : " << sizeof(num) << endl;
//  cout << "Size of pointer is : " << sizeof(ptr) << endl;

// double
// double di = 8.9;
// double *ptr = &di;

// // will print val
// cout << di << endl;
// cout << "value :" << *ptr << endl;

// // address
// cout << "Address num : " << &di << endl;
// cout << "Address ptr : " << ptr << endl;

// // size
// cout << "Size of integer is : " << sizeof(di) << endl;
// cout << "Size of pointer is : " << sizeof(ptr) << endl;

// BAD PRACTICE
// printing to some random garbage value/address
// int *p;
// cout << *p << endl;

// it will throw a segmentation error
// int *p = 0;
// cout << *p << endl;

// that's how operations is used in pointers
// int num = 6;
// int a = num;
// cout << num << endl;
// a++;
// cout << num << endl;

// int *p = &num;
// cout << "before : " << num << endl;
// (*p)++;
// cout << "after  : " << num << endl;

// // copying a pointer
// int *q = p;
// cout << p << "-----" << q << endl;
// cout << *p << "------" << *q << endl;

// *important concept*
// int i = 3;
// int *t = &i;
// *t = *t + 1;
// cout << "val : " << *t << endl;
// cout << "before : " << t << endl;
// t = t + 1;
// cout << "after : " << t << endl;
// return 0;
//}

/*
int main()
{
    // *lecture 26*
    /* int arr[10] = {1, 6, 3, 4, 5};
     // address of arr = address of first block of arr
     cout << "address of first memory block is : " << arr << endl;
     cout << "address of first memory block is : " << &arr[0] << endl;

     // value at 1st block  of arr
     cout << "1st : " << *arr << endl;
     // thrice   will give same ans
     cout << "2nd : " << *arr + 1 << endl;
     cout << "3rd : " << *(arr + 1) << endl; // next block m jana
     cout << "4th : " << *(arr) + 1 << endl;
     cout << "5th : " << arr[2] << endl;
     cout << "6th : " << *(arr + 2) << endl;

     int i = 3;
     cout << i[arr] << endl;
     */

/*
// ?????????
int temp[10];
cout << sizeof(temp) << endl;
cout << sizeof(*temp) << endl;
cout << sizeof(&temp) << endl;

int *ptr = &temp[0];
cout << sizeof(ptr) << endl;
cout << sizeof(*ptr) << endl;
cout << sizeof(&ptr) << endl;
*/

/* int a[10] = {1, 2, 3, 4, 5};
cout << &a[0] << endl;
cout << &a << endl;
cout << a << endl;

int *p = &a[0];
cout << p << endl;
cout << *p << endl;
cout << &p << endl;
*/

/* int arr[10];
// ERROR
// arr = arr + 1;

int *ptr = &arr[0];
cout << ptr << endl;
ptr = ptr + 1;
cout << ptr << endl;
*/

// char arrays
/* int arr[6] = {1, 2, 3, 4, 5};
 char ch[6] = "liana";
 cout << arr << endl;
 cout << ch << endl;

 char *c = &ch[0];
 // prints entire string
 cout << c << endl;
 */
// return 0;
//}*/

// functions in pointers
/*
void print(int *p)
{
    // to print val
    cout << *p << endl;
}

void update(int *p)
{
    // p = p + 1;
    // cout << "inside : " << p << endl;
    *p = *p + 1;
}

int main()
{
    int val = 5;
    int *p = &val;
    print(p);

    // cout << "before : " << p << endl;
    // update(p);
    // cout << "after : " << p << endl;

    cout << "before : " << *p << endl;
    update(p);
    cout << "after : " << *p << endl;
    return 0;
}
*/

// *lecture 27*
// double pointers
/*
void update(int **ptr)
{
    *ptr2 = *ptr2 + 1;
    // Any change ? ---->  yes

    **ptr = **ptr + 1;
    // Any change ? ---->
}

int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout << "DONE " << endl;

    // // print add of ptr
    // cout << &i << endl;
    // cout << ptr << endl;
    // cout << *ptr2 << endl;
    // cout << "printing p : " << ptr << endl;
    // cout << "*ptr2 : " << *ptr2 << endl;

    // //  address of int ptr
    // cout << &ptr << endl;
    // cout << ptr2 << endl;
    // cout << "address of p : " << &ptr << endl;

    // // print value
    // cout << "i : " << i << endl;
    // cout << "*ptr : " << *ptr << endl;
    // cout << "**ptr2 : " << **ptr2 << endl;

    cout << endl;
    cout << "before : " << i << endl;
    cout << "before : " << ptr << endl;
    cout << "before : " << ptr2 << endl;
    update(ptr2);
    cout << "after : " << i << endl;
    cout << "after : " << ptr << endl;
    cout << "after : " << ptr2 << endl;

    return 0;
}
*/