#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;

    v.push_back(10);
    v.push_back(56);
    v.push_back(43);
    v.push_back(82);

    cout << binary_search(v.begin(), v.end(), 82) << endl;

    cout << "lower Bound  " << lower_bound(v.begin(), v.end(), 56) - v.begin() << endl;

    int a = 4;
    int b = 8;
    cout << "max = " << max(a, b) << endl;
    cout << "min = " << min(a, b) << endl;

    swap(a, b);
    cout << endl
         << "a = " << a << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "string = " << abcd << endl;
}