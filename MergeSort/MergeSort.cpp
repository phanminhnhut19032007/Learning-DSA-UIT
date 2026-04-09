#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r)
{

    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0;
    int j = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[j])
        {
            a[l] = x[i];
            l++;
            i++;
        }
        else
        {
            a[l] = y[j];
            l++;
            j++;
        }
    }
    while (i < x.size())
    {
        a[l] = x[i];
        ++l;
        ++i;
    }
    while (j < y.size())
    {
        a[l] = y[j];
        ++l;
        ++j;
    }
}

void mergesort(int a[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;

    mergesort(a, l, mid);

    mergesort(a, mid + 1, r);
    merge(a, l, mid, r);
}

int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Mang A truoc khi sap xep: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "Sap xep:" << "\n";
    mergesort(a, 0, n - 1);
    cout << "\nMang sau khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}