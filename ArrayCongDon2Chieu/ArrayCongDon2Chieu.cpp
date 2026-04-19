#include <bits/stdc++.h>
using namespace std;

int main()
{ // normal O(N2);
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int tong = 0;
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        for (int i = x1; i < x2; i++)
        {
            for (int j = y1; i < y2; j++)
            {
                tong += a[i][j];
            }
        }
        cout << tong << endl;
    }
    // ----VIP O(1)----
    int h, c;
    cin >> h >> c;
    int prefix[100][100];
    int arr[100][100];
    // Chu y i =1 ; j =1 ;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; i <= c; j++)
        {
            cin >> arr[i][j];
        }
    }
    prefix[0][0] = a[0][0];
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i][j] + arr[i][j];
        }
    }
    int t;
    while (t--)
    {
        int a1, b1, A, B;
        cin >> a1 >> A >> b1 >> B;
        int tong = 0;
        for (int i = a1; i <= A; i++)
        {
            for (int j = b1; j <= B; j++)
            {
                tong += prefix[A][B] - prefix[a1 - 1][B] - prefix[A][b1 - 1] + prefix[a1 - 1][b1 - 1];
            }
        }
        cout << tong << endl;
    }
    return 0;
}