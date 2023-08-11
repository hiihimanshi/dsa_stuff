#include <iostream>
#include <map>
using namespace std;
int main()
{

    map<int, string> m;

    m[1] = "Himanshi";
    m[2] = "Prajapati";
    m[0] = "HP";

    m.insert({3, "kumari"})

        for (auto i : m)
    {
        cout << i.first << i.fourth << endl;
    }
}