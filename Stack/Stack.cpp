#include <bits/stdc++.h>
#include <stack>

using namespace std;
// push
// pop
// top

int main()
{
    stack<int> s;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for (int i = 0; i < 4; i++)
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}