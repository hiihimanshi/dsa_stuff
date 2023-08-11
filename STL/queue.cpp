#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("himanshi");
    q.push("Prajapati");
    q.push("HP");

    cout << "Top Element = " << q.front() << endl;

    q.pop();
    cout << "last element = " << q.back() << endl;
}