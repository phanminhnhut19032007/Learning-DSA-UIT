
#include <iostream>
#include <vector>
using namespace std;

struct NODE
{
    int data;
    NODE *pre;
    NODE *next;
};
typedef struct NODE *node;
node makeNode(int x)
{
    node tmp = new NODE();
    tmp->data = x;
    tmp->pre = NULL;
    tmp->next = NULL;
    return tmp;
}
// check rong
bool check(node a)
{
    return a == NULL;
}
// them dau
int size(node a)
{
    int size = 0;
    while (a != NULL)
    {
        size++;
        a = a->next;
    }
    return size;
}
void insertfirst(node &a, int x)
{
    node tmp = makeNode(x);
    if (a == NULL)
    {
        a = tmp;
        return;
    }
    else
    {
        tmp->next = a;
        a->pre = tmp;
        a = tmp;
    }
}
// themcuoi
void inserttail(node &a, int x)
{
    node tmp = makeNode(x);
    if (a == NULL)
    {
        a = tmp;
        return;
    }
    else
    {
        node p = a;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
        tmp->pre = p;
        tmp->next = NULL;
    }
}
// them giua
void insertmid(node &a, int x, int k)
{
    node tmp = makeNode(x);
    if (k <= 0 || k > size(a) + 1)
    {
        return;
    }
    if (k == 1)
    {
        insertfirst(a, x);
        return;
    }
    node p = a;
    for (int i = 1; i < k; i++)
    {
        p = p->next;
    }
    tmp->next = p;
    p->pre->next = tmp;
    tmp->pre = p->pre;
    p->pre = tmp;
}

int main()
{
    node head = NULL;
    int x;
    cin >> x;
    while (x)
    {
        int a;
        cin >> a;
        insertfirst(head, a);
        x--;
    }
    cout << size(head);

    return 0;
}
