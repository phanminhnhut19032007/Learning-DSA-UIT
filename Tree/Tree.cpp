#include <bits/stdc++.h>

using namespace std;
typedef int Data;
struct TNode
{
    Data key;      // Trường dữ liệu của Node [cite: 1560, 2093]
    TNode *pLeft;  // Con trỏ trỏ đến cây con trái [cite: 2094]
    TNode *pRight; // Con trỏ trỏ đến cây con phải [cite: 2095]
};
typedef TNode *TREE; // Định nghĩa kiểu TREE
// 1. Duyệt trước - Preorder (NLR) [cite: 2130, 2153]
void preorder(TREE Root)
{
    if (Root != NULL)
    {
        // <Xử lý nút Root tương ứng theo nhu cầu> [cite: 2157]
        preorder(Root->pLeft);  // Duyệt nhánh trái [cite: 2158]
        preorder(Root->pRight); // Duyệt nhánh phải [cite: 2159]
    }
}

// 2. Duyệt giữa - Inorder (LNR) [cite: 2131, 2164]
void inorder(TREE Root)
{
    if (Root != NULL)
    {
        inorder(Root->pLeft); // Duyệt nhánh trái [cite: 2167]
        // <Xử lý nút Root tương ứng theo nhu cầu> [cite: 2168]
        inorder(Root->pRight); // Duyệt nhánh phải [cite: 2168]
    }
}

// 3. Duyệt sau - Postorder (LRN) [cite: 2132, 2173]
void postorder(TREE Root)
{
    if (Root != NULL)
    {
        postorder(Root->pLeft);  // Duyệt nhánh trái [cite: 2175]
        postorder(Root->pRight); // Duyệt nhánh phải [cite: 2176]
        // <Xử lý nút Root tương ứng theo nhu cầu> [cite: 2177]
    }
}
//----BST---
struct TNODE
{
    int key;
    TNODE *pLeft;
    TNODE *pRight;
};
typedef TNODE *TREE;
// Tạo 1 cây rỗng 
void CreateTree(TREE &T)
{
    T = NULL; // Địa chỉ node gốc bằng NULL [cite: 1509, 1511, 1512]
}

// Tạo 1 node mới có khóa bằng x [cite: 1444, 1556]
TNODE *CreateTNode(int x)
{
    TNODE *p;
    p = new TNODE; // Cấp phát vùng nhớ động [cite: 1557, 1558]
    if (p == NULL)
        exit(1); // Thoát nếu không đủ bộ nhớ [cite: 1558, 1559]
    p->key = x;  // Gán trường dữ liệu bằng x [cite: 1560]
    p->pLeft = NULL;
    p->pRight = NULL;
    return p;
}
// Cách 1: Không dùng đệ quy [cite: 1463]
TNODE *searchNode(TREE Root, int x)
{
    TNODE *p = Root; // Bắt đầu từ node gốc [cite: 1453, 1465]
    while (p != NULL)
    {
        if (x == p->key)
            return p; // Tìm thấy [cite: 1454, 1467]
        if (x < p->key)
            p = p->pLeft; // Tìm bên cây con trái [cite: 1455, 1468, 1469]
        else
            p = p->pRight; // Tìm bên cây con phải [cite: 1456, 1470]
    }
    return NULL; // Không tìm thấy [cite: 1457, 1472]
}

// Cách 2: Dùng đệ quy [cite: 1476]
TNODE *searchNodeRecursion(TREE T, int x)
{
    if (T != NULL)
    {
        if (T->key == x)
            return T;
        if (T->key > x)
            return searchNodeRecursion(T->pLeft, x); // Tìm con trái [cite: 1482, 1483, 1484]
        return searchNodeRecursion(T->pRight, x);    // Tìm con phải [cite: 1485]
    }
    return NULL;
}

// Cách 1: Dùng đệ quy [cite: 1567]
int Insert(TREE &T, int x)
{
    if (T)
    {
        if (T->key == x)
            return 0; // Đã tồn tại khóa x, không thêm 
        if (T->key > x)
            return Insert(T->pLeft, x); // Tìm chèn bên trái 
        return Insert(T->pRight, x);    // Tìm chèn bên phải 
    }
    T = CreateTNode(x); // Thêm node vào vị trí rỗng tìm được
    return 1;
}

// Cách 2: Không dùng đệ quy [cite: 1581]
int InsertNoRecursion(TREE &Root, int x)
{
    if (Root == NULL)
    {
        Root = CreateTNode(x);
        return 1;
    }
    TREE T = Root;
    while (T)
    {
        if (T->key == x)
            return 0;
        if (T->key > x)
        {
            if (T->pLeft == NULL)
            {
                T->pLeft = CreateTNode(x);
                return 1;
            }
            else
                T = T->pLeft;
        }
        else
        {
            if (T->pRight == NULL)
            {
                T->pRight = CreateTNode(x);
                return 1;
            }
            else
                T = T->pRight;
        }
    }
    return 1;
}
// Tìm node chứa giá trị nhỏ nhất: Đi hết sang nhánh trái [cite: 1635, 1637]
TNODE *findMin(TREE &T)
{
    if (T == NULL)
        return NULL; // Cây rỗng [cite: 1641]
    if (T->pLeft == NULL)
        return T; // Điểm dừng chính là node cực trái [cite: 1637, 1638, 1642, 1643]
    return findMin(T->pLeft);
}
// Hàm tìm phần tử thế mạng Y (Nút cực trái của cây con phải) [cite: 1660, 1757]
void ThayThe(TREE &p, TREE &T)
{
    if (T->pLeft != NULL)
    {
        ThayThe(p, T->pLeft); // Tiếp tục tìm sang trái [cite: 1758, 1760]
    }
    else
    {
        p->key = T->key; // Thế chỗ giá trị node cần xóa bằng node thế mạng [cite: 1661, 1761]
        p = T;           // Lưu địa chỉ node thế mạng để giải phóng [cite: 1762]
        T = T->pRight;   // Móc nối con phải của node thế mạng lên vị trí của nó [cite: 1763]
    }
}

// Hàm xóa nút có trường dữ liệu bằng x [cite: 1739]
void DeleteNodeX(TREE &T, int x)
{
    if (T != NULL)
    {
        if (T->key < x)
            DeleteNodeX(T->pRight, x); // Tìm bên phải [cite: 1742]
        else if (T->key > x)
            DeleteNodeX(T->pLeft, x); // Tìm bên trái [cite: 1743]
        else
        { // Tìm thấy nút cần xóa [cite: 1743]
            TNODE *p = T;
            if (T->pLeft == NULL)
            {
                T = T->pRight; // Trường hợp rỗng con trái hoặc là nút lá [cite: 1746]
            }
            else if (T->pRight == NULL)
            {
                T = T->pLeft; // Trường hợp chỉ có con trái [cite: 1747]
            }
            else
            {
                ThayThe(p, T->pRight); // Có đủ 2 con, tìm node thế mạng bên phải [cite: 1748]
            }
            delete p; // Giải phóng vùng nhớ [cite: 1750]
        }
    }
}
// 1. Tính chiều cao của cây nhị phân [cite: 1768]
int Height(TNODE *T)
{
    if (!T)
        return -1;              // Cây rỗng [cite: 1769]
    int a = Height(T->pLeft);   // Chiều cao cây con trái [cite: 1771]
    int b = Height(T->pRight);  // Chiều cao cây con phải [cite: 1771]
    return (a > b ? a : b) + 1; // Chiều cao của nút = max(a, b) + 1 [cite: 1772]
}

// 2. Đếm số lượng node có trong cây (Cách 1: Không dùng đệ quy thuần) [cite: 1775, 1776]
int DemNode(TREE t)
{
    if (t == NULL)
        return 0;
    int a = DemNode(t->pLeft);
    int b = DemNode(t->pRight);
    return (a + b + 1);
}

// 3. Đếm số lượng node có trong cây (Cách 2: Sử dụng tham chiếu count) [cite: 1784, 1785]
void DemNodeBienDem(TREE t, int &count)
{
    if (t == NULL)
        return;
    DemNodeBienDem(t->pRight, count);
    count++; // Tăng biến đếm khi duyệt nút [cite: 1788]
    DemNodeBienDem(t->pLeft, count);
}
//------AVL TREE----
#define LH -1 // Cây con trái cao hơn [cite: 1153]
#define EH 0  // Cây con trái bằng cây con phải [cite: 1154]
#define RH 1  // Cây con phải cao hơn [cite: 1155]

typedef struct tagAVLNode
{
    char balFactor;            // Chỉ số cân bằng [cite: 1158]
    Data key;                  // Trường dữ liệu [cite: 1159]
    struct tagAVLNode *pLeft;  // Con trỏ trái [cite: 1160, 1162]
    struct tagAVLNode *pRight; // Con trỏ phải [cite: 1161, 1162]
} AVLNode;
typedef AVLNode *AVLTree; // Khai báo cây AVLTree [cite: 1164, 1165]
// TH!:left-left
void LL(AVLTree &T)
{
    AVLNode *T1 = T->pLeft;
    T->pLeft = T1->pRight;
    T1->pRight = T;
    switch (T1->balFactor)
    {
    case LH:
        T->balFactor = EH;
        T1->balFactor = EH;
        break;
    case EH:
        T->balFactor = LH;
        T1->balFactor = RH;
        break;
    }
    T = T1;
}
// TH2:left-right
void LR(AVLTree &T)
{
    AVLNode *T1 = T->pLeft;
    AVLNode *T2 = T1->pRight;
    T->pLeft = T2->pRight;
    T2->pRight = T;
    T1->pRight = T2->pLeft;
    T2->pLeft = T1;
    switch (T2->balFactor)
    {
    case LH:
        T->balFactor = RH;
        T1->balFactor = EH;
        break;
    case EH:
        T->balFactor = EH;
        T1->balFactor = EH;
        break;
    case RH:
        T->balFactor = EH;
        T1->balFactor = LH;
        break;
    }
    T2->balFactor = EH;
    T = T2;
}
// TH3:right - right
void RR(AVLTree &T)
{
    AVLNode *T1 = T->pRight;
    T->pRight = T1->pLeft;
    T1->pLeft = T;
    switch (T1->balFactor)
    {
    case RH:
        T->balFactor = EH; // Cập nhật chỉ số cân bằng [cite: 1301]
        T1->balFactor = EH;
        break;
    case EH:
        T->balFactor = RH;
        T1->balFactor = LH;
        break;
    }
    T = T1;
}
// TH4:Right-left
void RL(AVLTree &T)
{
    AVLNode *T1 = T->pRight;
    AVLNode *T2 = T1->pLeft;
    T->pRight = T2->pLeft;
    T2->pLeft = T;
    T1->pLeft = T2->pRight;
    T2->pRight = T1;
    switch (T2->balFactor)
    {
    case RH:
        T->balFactor = LH;
        T1->balFactor = EH;
        break;
    case EH:
        T->balFactor = EH;
        T1->balFactor = EH;
        break;
    case LH:
        T->balFactor = EH;
        T1->balFactor = RH;
        break;
    }
    T2->balFactor = EH;
    T = T2;
}