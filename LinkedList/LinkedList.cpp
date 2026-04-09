#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
typedef struct Node *node;
// tao 1 node moi
node makeNode(int x)
{
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

// check empty
bool check(node a)
{
    return a == NULL;
}
// dem phan tu
int Size(node a)
{
    int cnt = 0;
    while (a != NULL)
    {
        cnt++;
        a = a->next;
    }
    return cnt;
}

// them 1 phan tu vao dau dslk
void insertfirst(node &a, int x)
{
    node tmp = makeNode(x);
    if (a == NULL)
    {
        a = tmp;
    }
    else
    {
        tmp->next = a;
        a = tmp;
    }
}
// them 1 phan tu vao cuoi
void insertlast(node &a, int x)
{
    node tmp = makeNode(x);
    if (a == NULL)
    {
        a = tmp;
    }
    else
    {
        node p = a;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
    }
}

// chen 1 phan tu vao giua dslk
void insertmid(node &a, int x, int pos)
{
    int n = Size(a);
    if (pos <= 0 || pos > n + 1)
        cout << "Khong the chen ";
    return;
    if (n == 1)
    {
        insertfirst(a, x);
        return;
    }
    if (n == pos + 1)
    {
        insertlast(a, x);
        return;
    }
    node p = a;
    for (int i = 1; i < pos - 1; i++)
    {
        p = p->next;
    }
    node tmp = makeNode(x);
    tmp->next = p->next;
    p->next = tmp;
}
// xoa phan tu o dau
void deletefirst(node &a)
{
    if (a == NULL)
        return;
    else
    {
        a = a->next;
    }
}

// xoa phan tu cuoi dslk
void deletelast(node &a)
{
    if (a == NULL)
        return;
    else
    {
        node truoc = NULL;
        node sau = a;
        while (sau->next != NULL)
        {
            truoc = sau;
            sau = sau->next;
        }
        if (truoc == NULL)
        {
            a = NULL;
        }
        else
        {
            truoc->next = NULL;
        }
    }
}
// xoa o giua
void deletemiddle(node &a, int pos)
{
    if (pos <= 0 || pos > Size(a))
        return;
    node truoc = NULL;
    node sau = a;
    for (int i = 1; i < pos; i++)
    {
        truoc = sau;
        sau = sau->next;
    }
    if (truoc == NULL)
    {
        a = a->next;
    }
    else
    {

        truoc->next = sau->next;
    }
}
// Sap xep(selecSort)
void Sort(node &a)
{
    for (node p = a; p != NULL; p = p->next)
    {
        node min = p;
        for (node q = p->next; q != NULL; q = q->next)
        {
            if (q->data < min->data)
            {
                min = q;
            }
        }
        int tmp = min->data;
        min->data = p->data;
        p->data = tmp;
    }
}

void in(node a)
{
    cout << "-------------------------\n";
    while (a != NULL)
    {
        cout << a->data << endl;
        a = a->next;
    }
}

int main()
{
    node head = NULL;

    return 0;
}