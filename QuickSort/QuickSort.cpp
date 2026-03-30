#include <iostream>
using namespace std;
void quickSort(int *a, int b, int e)
{
    if (b >= e)
        return;
    int x = a[0], i = b, j = e;
    while (i < j)
    {
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    quickSort(a, b, j);
    quickSort(a, i, e);
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quickSort(a, 0, n - 1);
    xuat(a, n);

    return 0;
}