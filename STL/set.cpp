#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
    s.insert(9);
    s.insert(4);
    s.insert(2);
    s.insert(0);

    for (int i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for (int i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << "is 4 present = " << s.count(4) << endl;
    cout << "is -4 present = " << s.count(-4) << endl;

    set<int>::iterator it = s.find(9);
    cout << "value present at itr = " << *it << endl;
}