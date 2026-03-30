#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a[10000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    int k;
    cin >> k;
    int dem = 0;
    int dem1 = 0;
    bool find = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            dem++;
            find = true;
        }

    }
    if (find)
    {
        cout << dem << endl;
        for (int i = 0; i < n; i++)
        {
            dem1++;
            if (a[i] == k)
            {
                cout << i << " " << dem1 << endl;
            }
        }


    }
    else
        cout << 0;




}