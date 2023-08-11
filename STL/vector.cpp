#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Size" << v.capacity() << endl;

    v.push_back(1);
    cout << "size = " << v.capacity() << endl;

    v.push_back(2);
    cout << "size = " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    cout << "First Element" << v.front() << endl;
    cout << "Back Element" << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << ' ';
    }

    cout << "before clear size" << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;
}