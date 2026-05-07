#include <bits/stdc++.h>
#include <stack>

using namespace std;
// push
// pop
// top
// Kiem tra ({[]})
bool CHECK(string s)
{
    stack<char> st;
    for (char x : s)
    {
        if (x == '(' || x == '[' || x == '{')
        {
            st.push(x);
        }
        else
        {
            if (st.empty())
                return false;
            char y = st.top();
            st.pop();
            if (!((x == ')' && y == '(') || (x == '}' && y == '{') || (x == ']' && y == '[')))
            {
                return false;
            }
        }
    }
    return st.empty();
}
// chuyen doi tien to sang trung to
void ChangeTienToTrungTo(string s)
{
    stack<string> st;
    for (int i = s.size() - 1; i >= 0; i--)
    {

        if (isalpha(s[i]))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();

            string ss = "(" + s1 + s[i] + s2 + ")";
            st.push(ss);
        }
    }
    cout << st.top() << endl;
}
void ChangeTienToHauTo(string s)
{
    stack<string> st;
    for (int i = s.size() - 1; i >= 0; i--)
    {

        if (isalpha(s[i]))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();

            string ss = s1 + s2 + s[i];
            st.push(ss);
        }
    }
    cout << st.top() << endl;
}
// Muc do uu tien
int pre(char x)
{
    if (x == '*' || x == '/')
        return 2;
    else if (x == '+' || x == '-')
        return 1;
    else
        return 0;
}
void ChangeTrungToHauTo(string s)
{
    stack<char> st;
    string res = "";
    for (char x : s)
    {
        if (x == '(')
        {
            st.push(x);
        }
        else if (isalpha(x))
        {
            res += x;
        }
        else if (x == ')')
        {
            while (st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && (pre(st.top()) >= pre(x)))
            {
                res += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res << endl;
}
int main()
{
    string s;
    cin >> s;
    ChangeTrungToHauTo(s);
    return 0;
}