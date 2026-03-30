#include <iostream>
#include <vector>

using namespace std;
bool da_xuat_hien[1000005];

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; ++i) {
        int so_doc_vao;
        cin >> so_doc_vao;

        if (so_doc_vao >= 0 && so_doc_vao <= n) {
            da_xuat_hien[so_doc_vao] = true;
        }
    }

    for (int i = 0; i <= n; ++i) {
        if (da_xuat_hien[i] == false) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}