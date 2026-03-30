#include <iostream>
using namespace std;

void heaptify(int a[], int n, int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;
    // left child
    if (l < n && a[largest] < a[l])
    {
        largest = l;
    }
    if (r < n && a[largest] < a[r])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(a[largest], a[i]);
        heaptify(a, n, largest);
    }
}
void heapsort(int a[], int n)
{
    // build Max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heaptify(a, n, i);
    }
    // change max element to last index and delete this index.
    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heaptify(a, i, 0);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    heapsort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}