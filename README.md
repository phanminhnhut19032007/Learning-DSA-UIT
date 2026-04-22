# 🧠 DSA Data Structure Alog DSA Data Structure Alogrithm

> "Bad programmers worry about the code. Good programmers worry about data structures and their relationships." — Linus Torvalds

[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square&logo=c%2B%2B)](https://cppreference.com/)
[![LeetCode](https://img.shields.io/badge/Practice-LeetCode-orange?style=flat-square&logo=leetcode)](https://leetcode.com/u/your_user/)
[![Profile](https://img.shields.io/badge/University-UIT-red?style=flat-square)](https://www.uit.edu.vn/)

Kho lưu trữ này chứa toàn bộ kiến thức, mã nguồn và ghi chú về **Cấu trúc dữ liệu và Giải thuật** mà mình đã tích lũy trong quá trình học tập tại UIT.

---

## 📌 Mục lục
1. [Cấu trúc dữ liệu](#-cấu-trúc-dữ-liệu)
2. [Giải thuật](#-giải-thuật)
3. [Độ phức tạp thời gian (Big O)](#-độ-phức-tạp)
4. [Tài liệu tham khảo](#-tài-liệu-tham-khảo)

---

## 🏗 Cấu trúc dữ liệu
*Mỗi thư mục bao gồm file triển khai (.cpp) và giải thích lý thuyết.*

| Cấu trúc dữ liệu | Trạng thái | Link |
| :--- | :---: | :--- |
| **Array & String** | ✅ | [Xem tại đây](./Data-Structures/Array/) |
| **Linked List** (Single, Double) | ✅ | [Xem tại đây](./Data-Structures/LinkedList/) |
| **Stack & Queue** | ✅ | [Xem tại đây](./Data-Structures/Stack-Queue/) |
| **Trees** (BST, AVL, B-Tree) | 🚧 | [Xem tại đây](./Data-Structures/Trees/) |
| **Hash Table** | 🚧 | [Xem tại đây](./Data-Structures/Hash/) |
| **Graph** | ⏳ | [Xem tại đây](./Data-Structures/Graph/) |

---

## ⚡ Giải thuật
Tập trung vào tư duy giải quyết vấn đề và tối ưu hóa code.

### 🔍 Tìm kiếm & Sắp xếp
- [x] **Sorting:** Bubble, Selection, Insertion, Merge, Quick Sort.
- [x] **Searching:** Linear, Binary Search.

### 🛠 Các kỹ thuật thuật toán
- [ ] **Recursion & Backtracking:** Đệ quy và Quay lui (N-Queens, Sudoku).
- [ ] **Greedy:** Giải thuật tham lam.
- [ ] **Dynamic Programming:** Quy hoạch động (Knapsack, LCS).
- [ ] **Divide and Conquer:** Chia để trị.

---

## ⏱ Độ phức tạp (Big O Cheat Sheet)

| Algorithm | Average | Worst | Space |
| :--- | :--- | :--- | :--- |
| **Quick Sort** | $O(n \log n)$ | $O(n^2)$ | $O(\log n)$ |
| **Merge Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n)$ |
| **Binary Search** | $O(\log n)$ | $O(\log n)$ | $O(1)$ |

---

## 🛠 Cách sử dụng
Để chạy các ví dụ trong repo này, bạn cần trình biên dịch C++ (GCC/G++):

```bash
# Clone repository
git clone [https://github.com/phanminhnhut19032007/dsa-mastery.git](https://github.com/phanminhnhut19032007/dsa-mastery.git)

# Biên dịch một bài cụ thể
g++ ./Data-Structures/LinkedList/main.cpp -o main
./main
