

#include <iostream>
#include <algorithm>
using namespace std;




void Nhap(int a[], int n)
{
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];

}
void AfterSorting(int a[], int n)
{
	cout << "Mang sau khi sap xep: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}


int main()
{
	int a[1000];
	int cnt[1000] = { 0 };
	int n;
	cin >> n;
	int m = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		cnt[a[i]]++;
		m = max(m, a[i]);
	}
	for (int i = 0; i <= m; i++)
	{
		while (cnt[i] > 0)
		{
			cout << i << " ";
			cnt[i]--;
		}
	}

	return 0;
}


