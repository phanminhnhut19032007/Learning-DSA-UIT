#include <bits/stdc++.h>
using namespace std;

int main()
{ //-----Mang 1 chieu----
  // normal O(N)
  int n, q;
  int a[1000];
  cin >> n >> q;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  while (q--)
  {
    int l, r;
    cin >> l >> r;
    long long tong = 0;
    for (int i = l; i <= r; i++)
    {
      tong += a[i];
    }
    cout << tong << endl;
  }
  // ------VIP O(1)------
  long long pre[1000];
  pre[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    pre[i] = pre[i - 1] + a[i];
  }
  while (q--)
  {
    int left, right;
    cin >> left >> right;
    if (left == 0)
    {
      cout << pre[right] << endl;
    }
    cout << pre[right] - pre[left - 1] << endl;
  }

  return 0;
}