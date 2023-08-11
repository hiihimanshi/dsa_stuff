#include <iostream>
using namespace std;

int main()
{

    // counting from n (4 3 2 1)
    /*int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // star pattern ( * * *)
    int n;
    cin >> n;
    int i = 1;
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*"<< " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // counting till n ??
    int n;
    cin >> n;
    int i = 1;
    int p = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << p << " ";
            p++;
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern of no. j=i
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    //pattern from n (n - i + 1)
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << n - i + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern of same j (A B C D)
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char c = 'A' + j - 1;
            cout << c << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern of same i (A A A A)
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char c = 'A' + i - 1;
            cout << c << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern of same j but (a b c d)
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char c = 'a' + j - 1;
            cout << c << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern of no. (1_2 3_3 4 5)
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j < i * 2)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern of no. ( i - j + 1) show negative no.
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern of no. ( j + i + 1)
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j + i + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern of char (D_C D_ B C D)
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char c = 'A' + n - i;
        while (j <= i)
        {
            cout << c << " ";*
            j++;
        }
        cout << endl;
        i++;
    }

    // counting no. till $
    char c;
    cin >> c;
    int count = 0;
    while (c != '$')
    {
        count++;
        cin >> c;
    }
    cout << count << endl;*/

    char c;
    c = cin.get();
    int count = 0;
    while (c != '$')
    {
        count++;
        c = cin.get();
    }
    cout << count << endl;

    // mirroe star print /
    /*int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int space = 1;
         while (space <= n - i)
         {
             cout << " ";
             space++;
         }
         int j = 1;
         while (j <= i)
         {
             cout << '*';
             j++;
         }
         cout << endl;
         i++;
     }

     // mirror no. print ?
     int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int space = 1;
         while (space <= n - i)
         {
             cout << " ";
             space++;
         }
         int j = 1;
         while (j <= i)
         {
             cout << j;
             j++;
         }
         cout << endl;
         i++;
     }

     int n;
     cin >> n;
     int i = 0;
     while (i <= n)
     {
         int space = 1;
         while (space <= n - i)
         {
             cout << " ";
             space++;
         }
         int j = 1;
         while (j <= i)
         {
             cout << i;
             j++;
         }
         cout << endl;
         i++;
     }

     // inverted number print ??
     int n;
     cin >> n;
     int i = n;
     while (i > 0)
     {
         int j = i;
         while (j > 0)
         {
             cout << i;
             j--;
         }
         cout << endl;
         i--;
     }

     int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int space = 1;
         while (space <= n - i)
         {
             cout << " ";
             space++;
         }
         int j = 1;
         while (j <= i)
         {
             cout << j;
             j++;
         }
         j = i - 1;
         while (j >= 1)
         {
             cout << j;
             j--;
         }
         cout << endl;
         i++;
     }

     // triangular star pattern ??
     int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int space = 1;
         while (space <= n - i)
         {
             cout << " ";
             space++;
         }
         int j = 1;
         while (j <= i)
         {
             cout << "*";
             j++;
         }
         j = i - 1;
         while (j >= 1)
         {
             cout << "*";
             j--;
         }
         cout << endl;
         i++;
     }

     // triangle of numbers ??
     int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int space = 1;
         while (space <= n - i)
         {
             cout << " ";
             space++;
         }
         int p = i;
         int j = 1;
         while (j <= i)
         {
             cout << p;
             p++;
             j++;
         }
         p = (2 * i - 2);
         while (p > j)
         {
             cout << p;
             p--;
         }
         cout << endl;
         i++;
     }    */
}
