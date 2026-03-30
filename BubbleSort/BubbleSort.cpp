

#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
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
	BubbleSort(a, n);
	AfterSorting(a, n);

	return 0;
}
