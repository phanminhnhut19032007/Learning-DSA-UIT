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
//tim so cach it nhat chuyen tu 1 so sang 1 so khac
int bfs(int s ,int t)
{
    queue<pair<int,int>> Q;
    Q.push({s,0});
    set<int> se;
    while(!Q.empty())
    {
        pair<int,int> x = Q.front();
        Q.pop();
        if(x.first==t)
        {
            return x.second;
        }
    }
}

int main()
{

    return 0;
}