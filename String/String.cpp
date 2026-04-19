#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    //____Chu y nhap co the bi troi lenh____
    // Cach fix : getchar() (chi doc 1 ki tu) or cin.ignore() (xoa ki tu nhung chi 1 hoac neu hon thi phai biet so luong)
    // Cach fix 2 : dem co bao nhieu \n
    while ((getline(cin, s)))
    {
        if (s != "")
            break;
    }
    cout << s;
}