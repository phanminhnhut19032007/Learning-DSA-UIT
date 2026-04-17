#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000];
    int n;
    cin >> n;
    set<int> se;
    // vi du mang ={1,2,3,2,4}
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // se ={1,2,3,4} theo thu tu tang dan va khong trung lap
    for (int x : a)
        se.insert(x);
    // in chieu tang dan
    for (auto it = se.begin(); it != se.end(); ++it)
    {
        cout << *it << " ";
    }
    // in giam dan
    for (auto it = se.rbegin(); it != se.rend(); ++it)
    {
        cout << *it << " ";
    }
    // search
    auto it = se.find(2);
    if (it != se.end())
        cout << "Tim thay" << endl;
    else
        cout << "khong thay" << endl;
    if (se.count(10) == 1)
    {
        cout << "Ok";
    }
    else
        cout << "No";
    se.erase(10);         // xoa phan tu
    multiset<int> s;      // co the luu trung
    unordered_set<int> a; // thu tu bat ki
    return 0;
}