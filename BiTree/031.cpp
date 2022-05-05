#include <iostream>
using namespace std;

typedef struct TNode
{
  char data;
  struct TNode *lchild, *rchild;
  int ltag = 0, rtag = 0;
} TNode, *iTree;

void InTh(TNode *&p, TNode *&pre)
{
  if (p != NULL)
  {
    InTh(p->lchild, pre);
    if (p->lchild == NULL)
    {
      p->lchild = pre;
      p->ltag = 1;
    }
    if (pre != NULL && pre->rchild == NULL)
    {
      pre->rchild = p;
      pre->rtag = 1;
    }
    pre = p;
    InTh(p->rchild, pre);
  }
}

iTree aa()
{
  char x;
  cin >> x;
  if (x != '#')
  {
    TNode *T = new TNode;
    T->data = x;
    T->lchild = aa();
    T->rchild = aa();
    return T;
  }
  return NULL;
}
