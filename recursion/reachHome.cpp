#include <iostream>
using namespace std;
// *recursion ------> when a function call itself directly or indirectly*

void reachHome(int src, int dest)
{

    cout << "Source : " << src << " Destination : " << dest << endl;

    // base case
    if (src == dest)
    {
        cout << "we are home! " << endl;
        return;
    }

    // processing
    src++;

    // recursive relation
    reachHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;
    reachHome(src, dest);
}

// void reachHome(int src, int dest)
// {
//     cout << "Source : " << src << "  Destination : " << dest << endl;
//     // base case
//     if (src == dest)
//     {
//         cout << "we are home" << endl;
//         return;
//     }

//     // processing
//     src++;

//     // recursive case
//     reachHome(src, dest);
// }

// int main()
// {
//     int src = 1;
//     int dest = 10;
//     reachHome(src, dest);
//     return 0;
// }