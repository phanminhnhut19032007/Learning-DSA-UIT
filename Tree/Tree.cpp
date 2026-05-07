#include <bits/stdc++.h>

using namespace std;
struct TNode
{
 int key;
 TNode*pLeft;
 TNode*pRight;
};
typedef TNode*Tree;	

//Khoi tao
void CreateTree(Tree &t)
{
    t=NULL;
}
Tree CreateNode(int x)
{
    Tree tmp = new TNode;
    if(tmp == NULL) return NULL;
    tmp->key=x;
    tmp->pLeft=tmp->pRight=NULL;
    return tmp; 
}
//them node 
bool AddNode(Tree &t,int x)
{
//tim vi tri de them
if(t!=NULL)
{
    if(t->key==x) return false;
    if(t->key>x) return AddNode(t->pLeft,x);
    else return AddNode(t->pRight,x);

}
t=CreateNode(x);
return true;
}

//Duyet Truoc
void NodeLeftRight(Tree t)
{
    if(t==NULL)
    {
        cout << t->key << " ";
    }
}


int main()
{
   

    return 0;
}