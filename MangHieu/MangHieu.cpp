#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;
    int a[1000];
    for (int &x : a)
    {
        cin >> x;
    }
    // Mang Hieu
    int D[1000];
    D[0] = a[0];
    for (int i = 1; i < n; i++)
    {

        D[i] = a[i] - a[i - 1];
    }
    // tang tu left -> right len k don vi
    while (q--)
    {
        int left, right, k;
        cin >> left >> right >> k;
        D[left] += k;
        D[right - 1] -= k;
    }
    int tmp[1000];
    // Khoi phuc mang a ban dau bang mang cong don
    for (int i = 1; i < n; i++)
    {
        tmp[i] = tmp[i - 1] + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << tmp[i] << " ";
    }

    return 0;
}