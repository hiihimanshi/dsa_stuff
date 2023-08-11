#include <iostream>
using namespace std;

// datatypes
// int main()
// {
// strings
// string s;
// cin >> s;
// cout << s;

// string s1, s2;
// cin >> s1 >> s2;
// cout << s1 << s2;

// can pick any of the sentence except enter getline
// string s;
// getline(cin, s);
// cout << s;
// return 0;
// }

// conditions
// int main()
// {
//     int age;
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << "You are an adult" << endl;
//     }
//     else
//     {
//         cout << "you are a teen " << endl;
//     }
// }

// ques A school has following grading system??
// int main()
// {
//     int marks;
//     cin >> marks;
//     if (marks < 25)
//     {
//         cout << "F" << endl;
//     }
//     else if (marks >= 25 && marks <= 44)
//     {
//         cout << "E" << endl;
//     }
//     else if (marks >= 45 && marks <= 49)
//     {
//         cout << "D" << endl;
//     }
//     else if (marks >= 50 && marks <= 59)
//     {
//         cout << "C" << endl;
//     }
//     else if (marks >= 60 && marks <= 79)
//     {
//         cout << "B" << endl;
//     }
//     else if (marks >= 80 && marks <= 100)
//     {
//         cout << "A" << endl;
//     }
//     return 0;
// }

// another ques ???  Doesn't run ???
// int main()
// {
//     int age;
//     cout << "My age : ";
//     cin >> age;

//     if (age < 18)
//     {
//         cout << "Not Eligible for Job" << endl;
//     }
//     else if (age >= 18)
//     {
//         cout << "Eligible for job" << endl;
//     }
//     else if (age >= 55 && age <= 57)
//     {
//         cout << "Eligible for Job , but Retirement soon" << endl;
//     }
//     else
//     {
//         cout << "Retirement Time" << endl;
//     }
//     return 0;
// }

// Switch statement
// ques ??  doesn't run ?????
// int main()
// {
//     int day;
//     cin >> day;
//     switch (day)
//     {
//     case1:
//         cout << "Monday";
//         break;

//     case2:
//         cout << "Tuesday";
//         break;
//     case3:
//         cout << "Wednesday";
//         break;
//     case4:
//         cout << "Thursday";
//         break;
//     case5:
//         cout << "Friday";
//         break;
//     case6:
//         cout << "Saturday";
//         break;
//     case7:
//         cout << "Sunday";
//         break;
//     }
//     cout << day;
//     return 0;
// }

// Arrays
// int main()
// {
//     int arr[10];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
//     cout << arr[2];
//     arr[3] += 5;
//     // arr[3] = 45;
//     cout << arr[3];
//     return 0;
// }

// 2d array
// int main()
// {
//     int arr[4][2];
//     arr[3][2] = 54;
//     cout << arr[3][2];
//     return 0;
// }

// for loops
// int main()
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         cout << "HIMANSHI " << endl;
//     }
// }

// while loops
// int main()
// {
//     int i, n;
//     cin >> i >> n;
//     while (i <= n)
//     {
//         cout << "Himanshi"<<i << endl;
//         i++;
//     }
// }

// functions
// void printName(string name)
// {
//     cout << "Hey! " << name;
// }
// int main()
// {
//     string name;
//     cin >> name;
//     printName(name);
//     return 0;
// }

// Ques function ??
// int sum(int num1, int num2)
// {
//     int sum = num1 + num2;
//     return sum;
// }
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2);
//     cout << res;
//     return 0;
// }

// pass by value  ---> this will pass the copy of original  val
// void doSomething(int n)
// {
//     cout << n << endl;
//     n *= 2;
//     cout << n << endl;
//     n *= 3;
//     cout << n << endl;
// }
// int main()
// {
//     int n = 5;
//     doSomething(n);
//     cout << n << endl;
//     return 0;
// }

// pass by reference --> it will pass the original vlaue sita gita rita rita
// void doSomething(string &s)
// {
//     cout << s << endl;
//     s[0] = 'G';
//     cout << s << endl;
//     s[0] = 'R';
//     cout << s << endl;
// }
// int main()
// {
//     string s = "Sita";
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }

// pattern
// int main()
// {
// int n;
// cin >> n;
// int i = 1;
// while (i < n)
// {
//     int j = 1;
//     while (j <= n)
//     {
//         cout << '*';
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cout << '*';
//     }
//     cout << endl;
// }
// }

// void print1(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         print1(n);
//     }
// }

// int main()
// {
// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <= i; j++)
//     {
//         cout << "* ";
//     }
//     cout << endl;
// }

// int n;
// cin >> n;
// for (int i = 1; i < n; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout << j;
//     }
//     cout << endl;
// }

// int n;
// cin >> n;
// for (int i = 1; i < n; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout << i;
//     }
//     cout << endl;
// }

// int n;
// cin >> n;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 0; j < n - i + 1; j++)
//     {
//         cout << "* ";
//     }
//     cout << endl;
// }

// int n;
// cin >> n;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j < n - i + 1; j++)
//     {
//         cout << j;
//     }
//     cout << endl;
// }

// int n;
// cin >> n;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j < n - i + 1; j++)
//     {
//         cout << j;
//     }
//     cout << endl;
// }

// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     // space
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         cout << " ";
//     }

//     // star
//     for (int j = 0; j < 2 * i - 1; j++)
//     {
//         cout << "*";
//     }

//     // space
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         cout << " ";
//     }
//     cout << endl;
// }

// opposite of above
// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     // space
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }

//     // star
//     for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//     {
//         cout << "*";
//     }

//     // space
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }
//     cout << endl;
// }

// combination of above two diamond
// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     // space
//     for (int j = 0; j <= n - i - 1; j++)
//     {
//         cout << " ";
//     }

//     // star
//     for (int j = 0; j < 2 * i - 1; j++)
//     {
//         cout << "*";
//     }

//     // space
//     for (int j = 0; j <= n - i - 1; j++)
//     {
//         cout << " ";
//     }
//     cout << endl;
// }
// for (int i = 0; i < n; i++)
// {
//     // space
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }

//     // star
//     for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//     {
//         cout << "*";
//     }

//     // space
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }
//     cout << endl;
// }

// done dona done op
// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     // num
//     for (int j = 1; j <= n - i - 1; j++)
//     {
//         cout << j;
//     }

//     // star
//     for (int j = 0; j <= 2 * i - 1; j++)
//     {
//         cout << "*";
//     }

//     // num
//     for (int j = 1; j <= n - i - 1; j++)
//     {
//         cout << j;
//     }
//     cout << endl;
// }

// incomplete pahad pattern
// int n;
// cin >> n;
// int i;
// while (i <= n)
// {
//     // space
//     int j, p = 1;
//     while (p <= n - i)
//     {
//         cout << " ";
//         p++;
//     }
//     while (j < 2 * i - 1)
//     {
//         cout << "*";
//         j++;
//     }
//     while (p <= n - i)
//     {
//         cout << " ";
//         p++;
//     }
//     cout << endl;
// }
// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     // space
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         cout << " ";
//     }

//     // star
//     for (int j = 0; j < 2 * i - 1; j++)
//     {
//         cout << "*";
//     }

//     // space
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         cout << " ";
//     }
//     cout << endl;
// }
// for (int i = 0; i < n; i++)
// {
//     // space
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         cout << " ";
//     }

//     // star
//     for (int j = 0; j < 2 * i - 1; j++)
//     {
//         cout << "*";
//     }

//     // space
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         cout << " ";
//     }
//     cout << endl;
// }
// for (int i = 0; i < n; i++)
// {
//     // space
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         cout << " ";
//     }

//     // star
//     for (int j = 0; j < 2 * i - 1; j++)
//     {
//         cout << "*";
//     }

//     // space
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         cout << " ";
//     }
//     cout << endl;
// }
// for (int i = 0; i < n - 1; i++)
// {
//     cout << " ";
//     cout << " ";
//     for (int j = 0; j < n - 2; j++)
//     {
//         cout << "*";
//     }
//     cout << endl;
// }

// tooths
// int n;
// cin >> n;

// for (int i = 0; i < n; i++)
// {
//     // space
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }

//     // star
//     for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//     {
//         cout << "*";
//     }

//     // space
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }

//     // star
//     for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//     {
//         cout << "*";
//     }

//     // space
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }

//     // star
//     for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//     {
//         cout << "*";
//     }

//     // space
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }
//     cout << endl;
// }

// didn't got it properly
// int m;
// cin >> m;
// for (int i = 1; i <= 2 * m - 1; i++)
// {
//     int stars = i;
//     if (i > m)
//         stars = 2 * m - i;
//     for (int j = 1; j <= stars; j++)
//     {
//         cout << "*";
//     }
//     cout << endl;
// }

// pattern 12 did'nt get it ??????
// int n;
// cin >> n;
// int space = 2 * (n - 1);
// for (int i = 1; i <= n; i++)
// {
//     // num

//     for (int j = 1; j <= i; j++)
//     {
//         cout << j;
//     }

//     // space
//     for (int j = 1; j <= space; j++)
//     {
//         cout << " ";
//     }

//     // num
//     for (int j = 1; j >= 1; j++)
//     {
//         cout << j;
//     }
//     cout << endl;
//     space -= 2;
// }
// }

// pattern 13
// int main()
// {
//     int n;
//     cin >> n;
//     int p = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << p << " ";
//             p++;
//         }
//         cout << endl;
//     }
// }

// pattern 13 using while loop
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int p = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << p << " ";
//             j++;
//             p++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// pattern 14
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (char ch = 'A'; ch <= 'A' + i; ch++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// pattern 14 using while
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 0;
// while (i < n)
// {
//     char ch = 'A';
//     while (ch <= 'A' + i)
//     {
//         cout << ch << " ";
//         ch++;
//     }
//     cout << endl;
//     i++;
// }
// }

// pattern 15 using while loop
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 0;
//     while (i <=n)
//     {
//         char ch = 'A';
//         while (ch <= 'A' + n - i)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// pattern 15
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// pattern 16
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A' + i;
//         for (int j = 0; j <= i; j++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// pattern 16 using while
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 0;
//     while (i < n)
//     {
//         int j = 0;
//         char ch = 'A' + i;
//         while (j <= i)
//         {
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// pattern 17
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // alphabet
        for (int j = 0; j < ; j++)
        {
            cout << '*';
        }
        // space
        for (int j = 0; j < n - i - 1; i++)
        {
            cout << " ";
        }
        cout << endl;
    }
}