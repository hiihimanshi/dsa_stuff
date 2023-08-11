#include <iostream>
using namespace std;

// *recursion ------> when a function call itself directly or indirectly*

void reverse(string &str, int i, int j)
{
    cout << "call received for " << str << endl;

    // base case
    if (i > j)
    {
        return;
    }

    // processing
    swap(str[i], str[j]);
    i++;
    j--;

    // recursive relation
    reverse(str, i, j);
}

int main()
{
    string name = "prajapati";

    reverse(name, 0, name.length() - 1);
    cout << name << endl;
    return 0;
}