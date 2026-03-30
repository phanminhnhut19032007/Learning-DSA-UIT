#include <iostream>
using namespace std;

int main() {
    int n;
    // Nhập số lượng phần tử N
    if (!(cin >> n)) return 0;

    int a[10000];
    // Nhập mảng
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    // Nhập giá trị x cần tìm
    cin >> x;

    // --- TÌM TỪ ĐẦU MẢNG ĐẾN CUỐI MẢNG ---
    int dem_dau = 0;
    int pos_dau = -1;
    for (int i = 0; i < n; i++) {
        dem_dau++;
        if (a[i] == x) {
            pos_dau = i; // Vị trí 1-based (phần tử thứ i+1)
            break;
        }
    }

    // Xuất kết quả tìm từ đầu
    if (pos_dau == -1) {
        cout << -1 << endl;
        // Theo yêu cầu: Nếu không tìm thấy ở 2 dòng đầu thì không cần xuất 2 dòng tiếp theo
        return 0;
    }
    else {
        cout << pos_dau << endl;
        cout << dem_dau << endl;
    }

    // --- TÌM TỪ CUỐI MẢNG ĐẾN ĐẦU MẢNG ---
    int dem_cuoi = 0;
    int pos_cuoi = -1;
    for (int i = n - 1; i >= 0; i--) {
        dem_cuoi++;
        if (a[i] == x) {
            // Đề bài yêu cầu: "Vị trí của x... (đếm từ cuối đến đầu)"
            // Ví dụ trong ảnh: mảng 1 -4 3 2 6, x = -4 nằm ở vị trí thứ 3 tính từ cuối
            pos_cuoi = n - i;
            break;
        }
    }

    // Xuất kết quả tìm từ cuối
    cout << pos_cuoi - 1 << endl;
    cout << dem_cuoi << endl;

    return 0;
}