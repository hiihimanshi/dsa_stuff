#include <iostream>
#include <list>

using namespace std;
int main()
{

    list<int> l;

    list<int> n(4, 100);
    cout << "print n" << endl;
    for (int i : n)
    {
        cout << i << " ";
    }

    l.push_back(5);
    l.push_front(4);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << endl;
    }
}