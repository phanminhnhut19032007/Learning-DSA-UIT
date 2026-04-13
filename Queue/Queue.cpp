#include <queue>
#include <bits/stdc++.h>
using namespace std;

vector<string> s;
void init()
{
    queue<string> q;
    q.push("1");
    s.push_back("1");
    while (s.size() < 10000)
    {
        string top = q.front();

        s.push_back(top + "0");
        s.push_back(top + "1");
        q.push(top + "0");
        q.push(top + "1");
        q.pop();
    }
}

int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << " ";
        }
    }

    return 0;
}