

#include <iostream>
#include <algorithm>
using namespace std;
void InsertSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int x = a[i], pos = i - 1;
		while (pos >= 0 && x < a[pos])
		{
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
	}


}


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
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	Nhap(a, n);
	InsertSort(a, n);
	AfterSorting(a, n);

	return 0;
}


