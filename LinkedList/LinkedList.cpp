#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
typedef struct Node *node;
Node *makeNode(int x)
{
    node temp = new Node();
    temp->data = x;
    temp->next = NULL;
    return temp;
}
// Kiem tra rong
bool empty(node a)
{
    return a == NULL;
}
// size linked list
int Size(node a)
{
    int size = 0;
    while (a != NULL)
    {
        size++;
        a = a->next;
    }
    return size;
}
// them 1 phan tu vao dau danh sach lien ket
void insertFirst(node &a, int x)
{
    node temp = makeNode(x);
    if (a == NULL)
    {
        a = temp;
    }
    else
    {
        temp->next = a;
        a = temp;
    }
}

// them 1 phan tu vao cuoi linked list
void insertLast(node &a, int x)
{
    node temp = makeNode(x);
    if (a == NULL)
    {
        a = temp;
    }
    else
    {
        node p = a;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

// them 1 vao giua dslk
void insertMiddle(node &a, int x, int pos)
{
    int n = Size(a);
    if (pos <= 0 || pos > n + 1)
    {
        cout << "Vi tri chen khong hop le ";
        return;
    }
    if (n == 1)
    {
        insertFirst(a, x);
        return;
    }
    else if (n == pos + 1)
    {
        insertLast(a, x);
        return;
    }
    node p = a;
    for (int i = 1; i < pos - 1; i++)
    {
        p = p->next;
    }
    node temp = makeNode(x);
    temp->next = p->next;
    p->next = temp;
}

int main()
{

    return 0;
}