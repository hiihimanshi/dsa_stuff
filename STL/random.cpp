#include <iostream>
using namespace std;

//  Lec 28 Ref variable, static vs Dynamic memory
// ref variable

void update2(int &n)
{
    n++;
}

void update(int n)
{
    n++;
}

int main()
{
    /*int i = 8;
    // create a ref variable
    int &j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;  */

    int n = 8;
    cout << "before : " << n << endl;
    // update(n);
    update2(n);
    cout << "after : " << n << endl;

    return 0;
}

// lec  27 Double Pointers
// void update(int **ptr2)
// {
//     // ptr2 = ptr2 + 1;
//     // kuch change hoga ??   NO

//     // *ptr2 = *ptr2 + 1;
//     // kuch change hoga ?? - YES  710 + 1 = 714

//     // **ptr2 = **ptr2 + 1;
//     // kuch change hoga ??   - YES   7 + 1 = 8
// }

// int main()
// {
//     int val = 7;

//     int *ptr = &val;
//     int **ptr2 = &ptr;

//     cout << "Well Done !!!" << endl;
//     cout << "printing ptr : " << ptr << endl;
//     cout << "Address of ptr  : " << &ptr << endl;

//     // cout <<"printing ptr : << *ptr2 << endl;  /* exactly same as ptr print val of ptr*/

//     //  thrice will return same val as 7
//     cout << val << endl;
//     cout << *ptr << endl;
//     cout << **ptr2 << endl;

//     // print 710

//     cout << &val << endl;  // address of val 710
//     cout << ptr << endl;   // print 820 ke ander wala 710
//     cout << *ptr2 << endl; //  print 710

//     cout << endl;
//     cout << "before : " << val << endl;
//     cout << "before : " << ptr << endl;
//     cout << "before : " << ptr2 << endl;
//     update(ptr2);
//     cout << endl;
//     cout << "after : " << val << endl;
//     cout << "after : " << ptr << endl;
//     cout << "after : " << ptr2 << endl;
//     return 0;
// }