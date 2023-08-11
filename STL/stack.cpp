#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<string> s;

    s.push("himanshi");
    s.push("Prajapati");
    s.push("HP");

    cout << "Top Element = " << s.top() << endl;

    s.pop();
    cout << "Top Element = " << s.top() << endl;
}