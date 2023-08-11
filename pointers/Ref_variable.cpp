#include <iostream>
using namespace std;

// * Reference variable*
/*
int main()
{
    int i = 5;

    // create ref var
    int &j = i;
    cout << "i ; " << i << endl;
    i++;
    cout << "i ; " << i << endl;

    cout << "j ; " << j << endl;
    j++;
    cout << "j ; " << j << endl;
    return 0;
}
*/

void update1(int n)
{
    n++;
}

// ref variable
void update2(int &n)
{
    n++;
}

int main()
{
    int n = 5;
    cout << "before : " << n << endl;
    update1(n);
    cout << "after : " << n << endl;

    cout << "before : " << n << endl;
    update2(n);
    cout << "after : " << n << endl;

    return 0;
}