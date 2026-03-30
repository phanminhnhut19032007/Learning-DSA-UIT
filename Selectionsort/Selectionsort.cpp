

#include <iostream>
#include <algorithm>
using namespace std;

void Selectionsort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		swap(a[i], a[min]);
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
	Selectionsort(a, n);
	AfterSorting(a, n);

	return 0;
}
